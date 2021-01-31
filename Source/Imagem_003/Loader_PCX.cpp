#include "pch.h"
//#include "Generated\_GEN_Struct.h"
#include "Enums.h"
#include "definitions.h"
#include "structs.h"
#include "Imagem_003.h"

#include "Util.h"
#include "Loaders.h"

#pragma pack(push, 1)   // n = 16, pushed to stack
// PCX header
struct PCX {
	byte manufacturer;
	byte version;
	byte encoding;
	byte bitsperpixel;
	sshort xmin;
	sshort ymin;
	sshort xmax;
	sshort ymax;
	sshort hdpi;
	sshort vdpi;
	byte colormap[48];
	byte reserved;
	byte nplanes;
	sshort bytesperline;
	sshort paletteinfo;
	sshort hscreensize;
	sshort vscreensize;
	byte _filler[54];
};
#pragma pack(pop)   // n = 2 , stack popped

// image formats
enum {
	PCX_1BIT,             // 1 bpp, 1 plane (1 bit)
	PCX_1BIT_x,             // 1 bpp, 1 plane (1 bit)
	PCX_2BIT,             // 2 bpp, 1 plane (2 bit)
	PCX_4BIT,             // 4 bpp, 1 plane (4 bit)
	PCX_8BIT,             // 8 bpp, 1 plane (8 bit)
	PCX_24BIT,            // 8 bpp, 3 planes (24 bit)
	PCX_32BIT             // 8 bpp, 4 planes (32 bit)
};

// PCX reading and saving
static const byte bPCXDefaultPalette[3 * 16] = {
	0,   0,   0,
	0,   0, 255,
	0, 255,   0,
	0, 255, 255,
  255,   0,   0,
  255,   0, 255,
  255, 255,   0,
  255, 255, 255,
   85,  85, 255,
   85,  85,  85,
	0, 170,   0,
  170,   0,   0,
   85, 255, 255,
  255,  85, 255,
  255, 255,  85,
  255, 255, 255
};

void RLEencode(byte* p, uint size, FILE* f) {
	uint last, cont;
	last = (byte) * (p++);
	cont = 1;
	size--;
	while (size-- > 0) {
		uint data;
		data = (byte) * (p++);
		// Up to 63 bytes with the same value can be stored using
		// a single { cont, value } pair.
		if ((data == last) && (cont < 63)) {
			cont++;
		}
		else {
			if ((cont > 1) || ((last & 0xC0) == 0xC0))
				fputc((cont | 0xC0), f); // write a 'counter' byte
			fputc((byte)last, f);
			last = data;
			cont = 1;
		}
	}
	// write the last one and return;
	if ((cont > 1) || ((last & 0xC0) == 0xC0))
		fputc((char)(cont | 0xC0), f);
	fputc((char)last, f);
}

void RLEdecode(byte* p, uint size, FILE* f) {
	while (size > 0) {
		int c = fgetc(f);
		if (c < 0)
			return;
		uint data = (uint)c;
		if ((data & 0xC0) != 0xC0) {// If ((data & 0xC0) != 0xC0), then the value read is a data byte		
			*(p++) = (byte)data;
			size--;
		}
		else { // Then it is a counter (cont = val & 0x3F) and the next byte is the data byte.		
			uint cont = data & 0x3F;
			if (cont > size) // the file is corrupted or malformed
				break;
			c = fgetc(f);
			if (c == EOF)
				return;
			data = (byte)c;
			for (uint i = 1; i <= cont && size > 0; i++)
				*(p++) = (byte)data;
			size -= cont;
		}
	}
}

img_basis* read_PCX(FILE* f) {
	long fp = ftell(f);
	byte* p;               // space to store one scanline
	byte* dst;             // pointer into wxImage data
	ushort width, height;     // size of the image
	//uint i, j;
	//unsigned int bytesperline;      // bytes per line (each plane)
	//int version;               // bits per pixel (each plane)
	//int bitsperpixel;               // bits per pixel (each plane)
	//int nplanes;                    // number of planes
	//int encoding;                   // is the image RLE encoded?
	int format;                     // image format (8 bit, 24 bit)
	PCX* h = new PCX;
	byte color_bust = 0;
	if (!h)
		return 0;
	fread(h, 1, 128, f);
	//version = h->version;
	//encoding = h->encoding;
	//nplanes = h->nplanes;
	//bitsperpixel = h->bitsperpixel;
	//bytesperline = h->bytesperline;
	width = h->xmax - h->xmin + 1;
	height = h->ymax - h->ymin + 1;

	if (true) {
		printf("*** READING IMAGE PCX FILE  ***\n"
			   "*** Manufacturer %i\n"
			   "*** Version %i\n"
			   "*** Encoding %i\n"
			   "*** BitsPerPixel %i\n"
			   "*** Xmin %i\n"
			   "*** Ymin %i\n"
			   "*** Xmax %i\n"
			   "*** Ymax %i\n"
			   "*** HDpi %i\n"
			   "*** VDpi %i\n"
			   "*** Reserved %i\n"
			   "*** NPlanes %i\n"
			   "*** BytesPerLine %i\n"
			   "*** PaletteInfo %i\n"
			   "*** HscreenSize %i\n"
			   "*** VscreenSize %i\n"
			   "*** xres %i\n"
			   "*** yres %i\n"
			   "*** *** *** *** *** *** *** ***\n"
			   ,
			   h->manufacturer,
			   h->version,
			   h->encoding,
			   h->bitsperpixel,
			   h->xmin,
			   h->ymin,
			   h->xmax,
			   h->ymax,
			   h->hdpi,
			   h->vdpi,
			   h->reserved,
			   h->nplanes,
			   h->bytesperline,
			   h->paletteinfo,
			   h->hscreensize,
			   h->vscreensize,
			   width,
			   height
		);
	}

	if ((h->manufacturer != 0xA) || (h->version > 5)) {
		delete h;
		return 0;
	}
	if ((h->nplanes == 3) && (h->bitsperpixel == 8))
		format = PCX_24BIT;
	else if ((h->nplanes == 4) && (h->bitsperpixel == 8))
		format = PCX_32BIT;
	else if ((h->nplanes == 1) && (h->bitsperpixel == 8))
		format = PCX_8BIT;
	else if ((h->nplanes == 1) && (h->bitsperpixel == 4))
		format = PCX_4BIT;
	else if ((h->nplanes == 1) && (h->bitsperpixel == 2))
		format = PCX_2BIT;
	else if ((h->nplanes == 1) && (h->bitsperpixel == 1))
		format = PCX_1BIT;
	else if ((h->nplanes == 2) && (h->bitsperpixel == 1))
		format = PCX_1BIT_x;
	else if ((h->nplanes == 3) && (h->bitsperpixel == 1))
		format = PCX_1BIT_x;
	else if ((h->nplanes == 4) && (h->bitsperpixel == 1))
		format = PCX_1BIT_x;
	else {
		delete h;
		fseek(f, fp, SEEK_SET);
		return 0;
	}

	img_basis* img = new img_basis;
	if (!img) {
		delete h;
		fseek(f, fp, SEEK_SET);
		return 0;
	}
	img->xres = width;
	img->yres = height;

	switch (format) {
		case PCX_1BIT_x:
		case PCX_1BIT:
		case PCX_2BIT:
		case PCX_4BIT:
		case PCX_8BIT:
		{
			img->chanels = 1;
			img->bpp = 8;
			img->dataSize = width * height * 1;
			img->dataFormat = imDF :: DF_L_8u;
			break;
		}
		case PCX_24BIT:
		{
			img->chanels = 3;
			img->bpp = 24;
			img->dataSize = width * height * 3;
			img->dataFormat = imDF :: DF_BGR_8u;
			break;
		}
		case PCX_32BIT:
		{
			img->chanels = 4;
			img->bpp = 32;
			img->dataSize = width * height * 4;
			img->dataFormat = imDF :: DF_BGRA_8u;
			break;
		}
		default:
			break;
	}

	img->pixels = new byte[img->dataSize];
	if (!img->pixels) {
		delete h;
		delete img;
		fseek(f, fp, SEEK_SET);
		return 0;
	}
	img->pal = new byte[768];
	if (!img->pal) {
		delete h;
		delete img;
		fseek(f, fp, SEEK_SET);
		return 0;
	}
	p = new unsigned char[h->bytesperline * h->nplanes];
	if (!p) {
		delete h;
		delete img;
		fseek(f, fp, SEEK_SET);
		return 0;
	}
	dst = img->pixels;
	memset(img->pixels, 0, img->dataSize);
	
	for (int j = height; j; j--) {
		if (h->encoding)
			RLEdecode(p, h->bytesperline * h->nplanes, f);
		else
			fread(p, 1, h->bytesperline * h->nplanes, f);

		switch (format) {
			case PCX_1BIT_x:
			{
				byte* innerSrc = p;
				for (uint plane = 0; plane < h->nplanes; plane++) {
					uint x = 0;
					for (uint bpline = 0; bpline < uint(h->bytesperline); bpline++) {
						byte bits = *innerSrc++;
						for (int k = 7; k >= 0; k--) {
							unsigned bit = (bits >> k) & 1;
							if (bpline * 8 + k >= width) /* skip padding bits */
								continue;
							dst[ x] |= bit << plane;
							x++;
						}
					}
				}
				dst += img->xres ;
				break;
			}
			case PCX_1BIT:
			case PCX_2BIT:
			case PCX_4BIT:
			{
				for (uint i = 0; i < width; i++) {
					if (h->bitsperpixel == 1) {
						*(dst) = ((p[i / 8] >> (7 - i % 8)) & 0x01);
						dst ++;
					}
					else if (h->bitsperpixel == 2) {
						*(dst) = ((p[i / 4] >> ((3 - i % 4) * 2)) & 0x03);
						dst ++;
					}
					else if (h->bitsperpixel == 4) {
						*(dst) = ((p[i / 2] >> ((1 - i % 2) * 4)) & 0x0F);
						dst ++;
					}
				}
				break;
			}
			case PCX_8BIT:
			{
				for (uint i = 0; i < width; i++) {
					*dst = p[i];// first pass, just store the colour index
					dst ++;
				}
				break;
			}
			case PCX_24BIT:
			{
				for (uint i = 0; i < width; i++) {
					*(dst++) = p[i + 2 * h->bytesperline];
					*(dst++) = p[i + h->bytesperline];
					*(dst++) = p[i];
				}
				break;
			}
			case PCX_32BIT:
			{
				img->hasAlpha = 1;
				for (uint i = 0; i < width; i++) {
					*(dst++) = p[i + 2 * h->bytesperline];
					*(dst++) = p[i + h->bytesperline];
					*(dst++) = p[i];
					*(dst++) = p[i + 3 * h->bytesperline];;
				}
				break;
			}
		}
	}
	delete[] p;
	int ExtPal = 0;
	if (h->bitsperpixel == 1 && h->nplanes == 1 && h->version != 3) {
		if ((h->colormap[0] == h->colormap[3] && h->colormap[1] == h->colormap[4] && h->colormap[2] == h->colormap[5]) ||
			(h->colormap[0] < 17 && h->colormap[3] < 17 && h->colormap[1] < 17 && h->colormap[4] < 17 && h->colormap[2] < 17 && h->colormap[5] < 17)
			) {
			img->pal[0] = 0; img->pal[1] = 0; img->pal[2] = 0;
			img->pal[3] = 255; img->pal[4] = 255; img->pal[5] = 255;
			printf("*** USING MONOCROME 2 COLORS PALETTE ***\n");
		}
		else {
			memcpy(img->pal, bPCXDefaultPalette, 48);
			memcpy(img->pal, h->colormap, 6);
			printf("*** USING PCX 2 COLORS HEADER PALETTE ***\n");
		}
	}
	//else if ((h->bitsperpixel == 1 || h->bitsperpixel == 2 || h->bitsperpixel == 4 ) && (h->nplanes == 1 || h->nplanes == 2 || h->nplanes == 3 || h->nplanes == 4))
	// {
	//	color_bust = h->colormap[0] >>5;
	//	memcpy(img->pal, iPCXDefaultPalette, sizeof(iPCXDefaultPalette));
	//	printf("*** USING DEFAULT 16 COLORS PCX PALETTE ***\n");
	// }
	else {
		ExtPal = fgetc(f);
		printf("ExtPal %i\n", ExtPal);
		if (ExtPal == 12) {
			fread(img->pal, 1, 768, f);
			printf("*** USING EXTENDED 256 COLORS PALETTE ***\n");
		}
		else if (h->version == 3) {
			memcpy(img->pal, bPCXDefaultPalette, sizeof(bPCXDefaultPalette));
			printf("*** USING DEFAULT 16 COLORS PCX PALETTE ***\n");
		}
		else if (ExtPal == -1 && h->version == 5 && h->paletteinfo == 2) {
			//for (int i = 0; i < 256; i++) {
			//	img->pal[i * 3 + 0] = i;
			//	img->pal[i * 3 + 1] = i;
			//	img->pal[i * 3 + 2] = i;
			// }
			//printf("*** USING GENERATED GRAYSCALE PALETTE ***\n");
			printf("*** NOT USING PALETTE, USE DE INDEX AS A GRAYSCALE ***\n");
		}
		else if (ExtPal == -1 && h->version != 3) {
			memcpy(img->pal, h->colormap, 48);
			printf("*** USING PCX 16 COLORS HEADER PALETTE ***\n");
		}
		else {
			memcpy(img->pal, bPCXDefaultPalette, sizeof(bPCXDefaultPalette));
			printf("*** USING DEFAULT 16 COLORS PCX PALETTE 2 ***\n");
		}
	}
	if (format == PCX_1BIT || format == PCX_2BIT || format == PCX_4BIT || format == PCX_8BIT || format == PCX_1BIT_x) {
		if (h->version == 5 && h->paletteinfo == 2 && ExtPal == -1) { // gray
			// for (unsigned long k = height * width; k; k--) {
			//	unsigned char index;
			//	index = *p;
			//	*(p++) = index;
			//	*(p++) = index;
			//	*(p++) = index;
			//	*(p++) = 255;
			// }
		}
		//else if(color_bust)
		//	for (unsigned long k = height * width; k; k--)
		//	{
		//		unsigned char index;
		//		index = *p;
		//		*(p++) = img->pal[byte(3 * (index >> color_bust) + 2)];
		//		*(p++) = img->pal[byte(3 * (index >> color_bust) + 1)];
		//		*(p++) = img->pal[byte(3 * (index >> color_bust)    )];
		//		*(p++) = 0;
		//	}
		else {
			img->chanels = 3;
			img->bpp = 24;
			img->dataSize = width * height * 3;
			img->dataFormat = imDF :: DF_BGR_8u;
			byte* data = new byte[img->xres * img->yres * 3];
			if (!data) {
				delete h;
				delete img;
				fseek(f, fp, SEEK_SET);
				return 0;
			}
			byte* p = data;
			byte index;
			for (uint i = 0; i < (uint)width * height; i++) {
				index = img->pixels[i];
				*(p++) = img->pal[3 * index + 2];
				*(p++) = img->pal[3 * index + 1];
				*(p++) = img->pal[3 * index    ];
			}
			delete img->pixels;
			img->pixels = data;
		}
		delete[] img->pal;
		img->pal = 0;
	}
	img->orientation = 1;
	delete h;
	return img;
}

//void RLEdecode(unsigned char* p, unsigned int size, FILE* f) {
//	while (size != 0) {
//		unsigned int data = (unsigned char)fgetc(f);
//		if ((data & 0xC0) != 0xC0) {
//			*(p++) = (unsigned char)data;
//			size--;
//		}
//		else {
//			unsigned int cont = data & 0x3F;
//			if (cont > size) // can happen only if the file is malformed
//				break;
//			data = (unsigned char)fgetc(f);
//			for (unsigned int i = 1; i <= cont; i++)
//				*(p++) = (unsigned char)data;
//			size -= cont;
//		}
//	}
//}

//void RLEdecode(unsigned char* p, unsigned int size, FILE* f) {
//	// Read 'size' bytes. The PCX official specs say there will be
//	// a decoding break at the end of each scanline (but not at the
//	// end of each plane inside a scanline). Only use this function
//	// to read one or more _complete_ scanlines. Else, more than
//	// 'size' bytes might be read and the buffer might overflow.
//
//	while (size != 0) {
//		unsigned int data = (unsigned char)fgetc(f);
//
//		// If ((data & 0xC0) != 0xC0), then the value read is a data
//		// byte. Else, it is a counter (cont = val & 0x3F) and the
//		// next byte is the data byte.
//
//		if ((data & 0xC0) != 0xC0) {
//			*(p++) = (unsigned char)data;
//			size--;
//		}
//		else {
//			unsigned int cont = data & 0x3F;
//			if (cont > size) // can happen only if the file is malformed
//				break;
//			data = (unsigned char)fgetc(f);
//			for (unsigned int i = 1; i <= cont; i++)
//				*(p++) = (unsigned char)data;
//			size -= cont;
//		}
//	}
//}

/*
img_basis* IMG_LoadPCX_RW(FILE* f) {
	if (!f)
		return 0;
	char fname[1024];
	FILE* file = 0;
	PCX * h = new PCX;
	if (!h)
		return 0;
	FILE* lst = fopen("lst_PCX.txt", "w");
	if (!lst) {
		delete h;
		return 0;
	}
	while (fgets(fname, 1020, f))
	{
		file = fopen(removeEndL(fname, 1022), "r");
		if (file) {
			if (fread(h, 1, sizeof(PCX), file) == sizeof(PCX)) {
				int width = h->xmax - h->xmin + 1;
				int height = h->ymax - h->ymin + 1;
				if (true){
					fprintf(lst,
						//"Manufacturer %i		"
						//"Version %i		"
						//"Encoding %i		"
						//"BitsPerPixel %i		"
						//"Xmin %i		"
						//"Ymin %i		"
						//"Xmax %i		"
						//"Ymax %i		"
						//"HDpi %i		"
						//"VDpi %i		"
						//"Reserved %i		"
						//"NPlanes %i		"
						//"BytesPerLine %i		"
						//"PaletteInfo %i		"
						//"HscreenSize %i		"
						//"VscreenSize %i		"
						//"width %i		"
						//"height %i		"
						"%i	"
						"%i	"
						"%i	"
						"%i	"
						"%i	"
						"%i	"
						"%i	"
						"%i	"
						"%i	"
						"%i	"
						"%i	"
						"%i	"
						"%i	"
						"%i	"
						"%i	"
						"%i	"
						"%i	"
						"%i	"
						"%s\n"
						,
						h->manufacturer,
						h->version,
						h->encoding,
						h->bitsperpixel,
						h->xmin,
						h->ymin,
						h->xmax,
						h->ymax,
						h->hdpi,
						h->vdpi,
						h->reserved,
						h->nplanes,
						h->bytesperline,
						h->paletteinfo,
						h->hscreensize,
						h->vscreensize,
						width,
						height,
						fname
					);

				}
			}
			fclose(file);
		}
	}
	delete h;
	fclose(lst);
	return 0;
}
*/


