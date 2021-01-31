#include "pch.h"
#include "Util.h"
#include "Loaders.h"
#include "Enums.h"
// PNM

// skip line and return the last character, if End Of File return -1
int skipLine(FILE* f) {
	int c = 0;
	while (true) {
		c = fgetc(f); // get one character from file
		if (c == EOF) // end of file
			return -1;
		if (c == '\n' || c == '\r') // new line or line return
			break; // goto next loop
	}
	while (true) {
		c = fgetc(f);
		if (c == EOF)
			return -1;
		if (c == '\n' || c == '\r')
			continue;
		else {
			fseek(f, -1, SEEK_CUR);
			return 0;
		}
	}
}

int skipComent(FILE* f) {
	int c = 0;
	while (true) {
		c = fgetc(f);
		if (c == '#') {
			if (skipLine(f) == -1) // End Of File
				return -1;
			continue; // restart loop
		}
		else {
			fseek(f, -1, SEEK_CUR);
			return 0;
		}
	}
}

int readInt(FILE* f) {
	int c = 0;
	int n = 0;
	int count = 0;
	while (true) {
		c = fgetc(f);
		if (c >= '0' && c <= '9') {
			n *= 10;
			n += c - '0';
			count++;
		}
		else if (c == ' ' || c == '	' || c == '\n' || c == '\r')
			if (count > 0) {
				fseek(f, -1, SEEK_CUR);
				return n;
			}
			else
				continue;
		else if (c == EOF)
			if (count == 0)
				return -1;
			else
				return n;
		else if (c == '#') {
			if (count == 0) {
				skipLine(f);
			}
			else {
				fseek(f, -1, SEEK_CUR);
				return n;
			}
		}
		else {
			if (count > 0) {
				fseek(f, -1, SEEK_CUR);
				return n;
			}
		}
	}
}

inline ushort swap_16u(ushort x) {
	return ((x & 0x00ff) << 8) | ((x & 0xff00) >> 8);
}

img_basis* read_PNM(FILE* f) {
	long fp = ftell(f);
	int compression = 0;
	int c = 0;
	int xres = 0, yres = 0, bpp = 1, maxval = 0;
	img_basis* img = 0;
	printf("*** Reading PNM file ***\n");
	if (!f)
		return 0;
	c = fgetc(f);
	if (c == EOF || c != 'p' && c != 'P') {
		printf("*** NOT SUPORTED PNM file ***\n");
		fseek(f, fp, SEEK_SET);
		return 0;
	}
	printf("format = %c", byte(c));
	c = fgetc(f);
	printf("%c\n", byte(c));
	if ((c < '1' || c > '7')) { // c == 1 or 2, 3, 4, 5 or 6
		printf("*** NOT SUPORTED PNM file ***\n");
		fseek(f, fp, SEEK_SET);
		return 0;
	}	//if (skipLine(f) == -1 || skipComent(f) == -1)
	if (c != '7') {
		xres = readInt(f);
		if (xres == -1) {
			printf("*** NOT SUPORTED PNM file, SMALL FILE ***\n");
			fseek(f, fp, SEEK_SET);
			return 0;
		}
		yres = readInt(f);
		if (yres == -1) {
			printf("*** NOT SUPORTED PNM file, SMALL FILE ***\n");
			fseek(f, fp, SEEK_SET);
			return 0;
		}
	}
	img = new img_basis;
	if (!img) {
		printf("*** img == NULL ***\n");
		fseek(f, fp, SEEK_SET);
		return 0;
	}
	img->xres = xres;
	img->yres = yres;
	img->orientation = 1;

	switch (c) {
		case '1': // monocrome  0 or 1 in text format
		{
			//skipLine(f); // \n
			//skipComent(f); // any comment
			fgetc(f); // skip new line
			c = fgetc(f);
			if (c != '\n')
				fseek(f, -1, SEEK_CUR);
			img->dataFormat = imDF::DF_L_8u;
			img->dataSize = xres * yres;
			img->bpp = 8;
			img->chanels = 1;
			img->pixels = new byte[img->dataSize];
			if (!img->pixels) {
				fseek(f, fp, SEEK_SET);
				delete img;
				return 0;
			}
			byte* p = img->pixels;
			for (uint i = 0; i < img->dataSize; ) {
				c = fgetc(f);
				if (c == '1') {
					*(p++) = 0;
					i++;
				}
				else if (c == '0') {
					*(p++) = 255;
					i++;
				}
				else if (c == '#') {
					skipLine(f);
					continue;
				}
				else if (c == EOF)
					break;
				else if (c == '\n' || c == '\r' || c == ' ' || c == '	') // new line or space
					continue;
				else // unknow?
					continue;
			}
			break;
		}
		case '2': // grayscale 0 to 255 in text format
		{
			//c = fgetc(f);
			//if (c == '\n' || c == '\r') {
			//	fseek(f, -1, SEEK_CUR);
			//	if (skipLine(f) == -1) {
			//		delete img;
			//		return 0;
			//	}
			//}
			fgetc(f); // skip new line
			c = fgetc(f);
			if (c != '\n')
				fseek(f, -1, SEEK_CUR);
			if ((maxval = readInt(f)) == -1) {
				fseek(f, fp, SEEK_SET);
				delete img;
				return 0;
			}
			if (maxval > 255) {
				float mul = 65535.f / maxval;

				img->dataFormat = imDF :: DF_L_16u;
				img->dataSize = xres * yres*2;
				img->bpp = 16;
				img->chanels = 1;
				img->pixels = new byte[img->dataSize];
				if (!img->pixels) {
					fseek(f, fp, SEEK_SET);
					delete img;
					return 0;
				}
				ushort* p = (ushort *)img->pixels;
				for (uint i = 0; i < img->dataSize; ) {
					if ((c = readInt(f)) == -1)
						break;
					*(p++) = ushort(c * mul);
					i++;
				}
			}
			else {
				float mul = 255.f / maxval;

				img->dataFormat = imDF :: DF_L_8u;
				img->dataSize = xres * yres;
				img->bpp = 8;
				img->chanels = 1;
				img->pixels = new byte[img->dataSize];
				if (!img->pixels) {
					fseek(f, fp, SEEK_SET);
					delete img;
					return 0;
				}
				byte* p = img->pixels;
				for (uint i = 0; i < img->dataSize; ) {
					if ((c = readInt(f)) == -1)
						break;
					*(p++) = byte(c * mul);
					i++;
				}
			}
			break;
		}
		case '3': // color 0 to 255 in text format
		{
			//c = fgetc(f);
			//if (c == '\n' || c == '\r') {
			//	fseek(f, -1, SEEK_CUR);
			//	if (skipLine(f) == -1) {
			//		delete img;
			//		return 0;
			//	}
			//}
			maxval = readInt(f);
			if (maxval < 1 ) {
				delete img;
				fseek(f, fp, SEEK_SET);
				return 0;
			}
			//c= fgetc(f);
			//c= fgetc(f);
			fgetc(f); // skip new line
			c = fgetc(f);
			if (c != '\n')
				fseek(f, -1, SEEK_CUR);
			if (maxval > 255) {
				float mul = 65535.f / maxval;
				img->dataFormat = imDF :: DF_RGB_16u;
				img->dataSize = xres * yres * 3*2;
				img->bpp = 48;
				img->chanels = 3;
				img->pixels = new byte[img->dataSize];
				if (!img->pixels) {
					delete img;
					fseek(f, fp, SEEK_SET);
					return 0;
				}
				ushort* p = (ushort*)img->pixels;
				for (uint i = 0; i < img->dataSize/2; i++ ) {
					if ((c = readInt(f)) == -1)
						break;
					*(p++) = ushort(c * mul);
				}
				break;
			}
			else {
				float mul = 255.f / maxval;
				img->dataFormat = imDF :: DF_RGB_8u;
				img->dataSize = xres * yres * 3;
				img->bpp = 24;
				img->chanels = 3;
				img->pixels = new byte[img->dataSize];
				if (!img->pixels) {
					delete img;
					fseek(f, fp, SEEK_SET);
					return 0;
				}
				byte* p = img->pixels;
				for (uint i = 0; i < img->dataSize; i++) {
					if ((c = readInt(f)) == -1)
						break;
					*(p++) = byte(c * mul);
				}
				break;
			}
		}
		case '4': // binary format 1 bpp
		{
			//skipLine(f); // skip new line
			fgetc(f); // skip new line
			c = fgetc(f);
			if (c != '\n')
				fseek(f, -1, SEEK_CUR);
			img->dataSize = xres * yres * 1;
			img->bpp = 8;
			img->chanels = 1;
			img->pixels = new byte[img->dataSize];
			img->dataFormat = imDF :: DF_L_8u;
			if (!img->pixels) {
				fseek(f, fp, SEEK_SET);
				delete img;
				return 0;
			}
			byte* data = new byte[img->xres];
			if (!data) {
				fseek(f, fp, SEEK_SET);
				delete img;
				return 0;
			}
			byte* p = img->pixels;
			for (int height = 0; height < img->yres; height++) { // binary format 1 bpp
				fread(data, 1, (img->xres + 7) / 8, f);
				for (uint i = 0; i < img->xres; i++) {
					*(p++) = (!((data[i / 8] >> (7 - i % 8)) & 0x01)) * 255;
				}
			}
			delete[] data;
			break;
		}
		case '5': // binary format 8 bpp
		{
			maxval = readInt(f);
			if (maxval < 1 || maxval > 255) {
				delete img;
				fseek(f, fp, SEEK_SET);
				return 0;
			}
			float mul = 255.f / maxval;
			//skipLine(f); // skip new line
			fgetc(f); // skip new line
			c = fgetc(f);
			if (c != '\n')
				fseek(f, -1, SEEK_CUR);
			img->dataFormat = imDF :: DF_L_8u;
			img->dataSize = xres * yres * 1;
			img->bpp = 8;
			img->chanels = 1;
			img->pixels = new byte[img->dataSize];
			if (!img->pixels) {
				fseek(f, fp, SEEK_SET);
				delete img;
				return 0;
			}
			fread(img->pixels, 1, (img->dataSize), f);
			break;
		}
		case '6': // binary format 24 bpp
		{
			maxval = readInt(f);
			//skipLine(f); // skip new line
			fgetc(f); // skip new line
			c = fgetc(f);
			if (c != '\n')
				fseek(f, -1, SEEK_CUR);
			if (!maxval) {
				fseek(f, fp, SEEK_SET);
				delete img;
				return 0;
			}
			if (maxval > 255) {
				float mul = 65535.f / maxval;
				img->bpp = 48;
				img->chanels = 3;
				img->dataSize = xres * yres * img->chanels * 2;
				img->pixels = new byte[img->dataSize];
				img->dataFormat = imDF :: DF_RGB_16u;

				if (!img->pixels) {
					fseek(f, fp, SEEK_SET);
					delete img;
					return 0;
				}
				ushort* p1 = (ushort*)img->pixels;
				ushort* data = new ushort[img->xres * img->chanels * sizeof(ushort)];
				if (!data) {
					fseek(f, fp, SEEK_SET);
					delete img;
					return 0;
				}
				for (uint y = 0; y < img->yres; y++) {
					fread(data, sizeof(data[0]), (img->xres * img->chanels), f); // read one line
					ushort* p2 = data;
					for (int x = 0; x < img->xres; x++) {
						p1[0] = ushort(swap_16u(p2[0]) * mul);
						p1[1] = ushort(swap_16u(p2[1]) * mul);
						p1[2] = ushort(swap_16u(p2[2]) * mul);
						p1 += 3;
						p2 += 3;
					}
				}
				delete[] data;
			}
			else {
				float mul = 255.f / maxval;
				img->bpp = 24;
				img->chanels = 3;
				img->dataSize = xres * yres * img->chanels * 2;
				img->dataSize = xres * yres * 3;
				img->bpp = 24;
				img->chanels = 3;
				img->dataFormat = imDF :: DF_BGR_8u;
				img->pixels = new byte[img->dataSize];
				if (!img->pixels) {
					fseek(f, fp, SEEK_SET);
					delete img;
					return 0;
				}
				byte* p1 = img->pixels;
				fread(img->pixels, 1, (img->dataSize), f);
				c = 0;
				for (int i = 0; i < img->xres * img->yres; i++) {
					c = byte(p1[0] * mul);
					p1[0] = byte(p1[2] * mul);
					p1[2] = byte(c);
					p1[1] = byte(p1[1] * mul);
					p1 += 3;
				}
			}
			break;
		}
		default:
		{
			fseek(f, fp, SEEK_SET);
			printf("*** NOT SUPORTED PNM file YET ***\n");
			delete img;
			return 0;
		}
	}

#if 0
	// make conversons here at end of function
	// if(img->bpp ! 32){
	//		do conversion
	// }
	if (img->chanels < 4) {
		byte* p = new byte[img->xres * img->yres * 4];
		if (!p) {
			fseek(f, fp, SEEK_SET);
			delete img;
			return 0;
		}
		switch (img->chanels) {
			case 1:
			{
				for (int i = 0; i < img->xres * img->yres; i++) {
					p[i * 4 + 0] = img->pixels[i];
					p[i * 4 + 1] = img->pixels[i];
					p[i * 4 + 2] = img->pixels[i];
					p[i * 4 + 3] = 255;
				}
				//delete[] img->pixels;
				//img->pixels = p;
				//p = 0;
				//img->bpp = 32;
				//img->chanels = 4;
				//img->dataSize = img->xres * img->yres * img->bpp / 8;
				break;
			}
			case 2:
			{
				for (int i = 0; i < img->xres * img->yres; i++) {
					p[i * 4 + 0] = img->pixels[i * 2];
					p[i * 4 + 1] = img->pixels[i * 2];
					p[i * 4 + 2] = img->pixels[i * 2];
					p[i * 4 + 3] = img->pixels[i * 2 + 1];
				}
				//delete[] img->pixels;
				//img->pixels = p;
				//p = 0;
				//img->bpp = 32;
				//img->chanels = 4;
				//img->dataSize = img->xres * img->yres * img->bpp / 8;
				break;
			}
			case 3:
			{
				for (int i = 0; i < img->xres * img->yres; i++) {
					p[i * 4 + 0] = img->pixels[i * 3 + 0];
					p[i * 4 + 1] = img->pixels[i * 3 + 1];
					p[i * 4 + 2] = img->pixels[i * 3 + 2];
					p[i * 4 + 3] = 255;
				}
				//delete[] img->pixels;
				//img->pixels = p;
				//p = 0;
				//img->bpp = 32;
				//img->chanels = 4;
				//img->dataSize = img->xres * img->yres * img->bpp / 8;
				break;
			}
			case 4:
			{
				if (p)
					delete[] p;
				break;
			}
			default:
			{
				fseek(f, fp, SEEK_SET);
				delete img;
				if (p)
					delete[] p;
				return 0;
			}
		}
		delete[] img->pixels;
		img->pixels = p;
		p = 0;
		img->bpp = 32;
		img->chanels = 4;
		img->dataSize = img->xres * img->yres * img->bpp / 8;
	}
#endif // 0

	return img;
}

