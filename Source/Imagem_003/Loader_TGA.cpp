#include "pch.h"
//#include "Generated\_GEN_Struct.h"
#include "Enums.h"
#include "definitions.h"
#include "structs.h"
#include "Imagem_003.h"

#include "Util.h"
#include "Loaders.h"

// TGA
#pragma pack(push, 1)   // n = 16, pushed to stack
// Truevision Targa File header
struct TGA {
	uchar 	id_length;  		// 1
	uchar	color_type; 		// 2		1=indexed
	uchar	image_type; 		// 3		1=raw index pallete,2=raw rgb rgba ,3=raw grey,
	ushort	color_start; 		// 4 5 9=rle idx, 10=rle rgb rgba,11=rle grey
	union {
		ushort	color_length, pal_length;	// 6 7
	};
	union {
		uchar	color_depth, pal_depth;		// 8
	};
	ushort	x_offset; 		// 9 10
	ushort	y_offset; 		// 11 12
	union {
		ushort	x, xres, width; // 13 14
	};
	union {
		ushort	y, yres, heigth; // 15 16
	};
	uchar 	bpp; 			// 17
	uchar	orientation; 	// 18
	// if color_length > 0 then pallete are here with lenght = (256 * color_depth / bpp) in bgr format
};
#pragma pack(pop)   // n = 2 , stack popped

BOOL isInvalidTGA(TGA* h) {
	//return 0;
	// next modification, translate ifs for switch to make more readable and ease to maintain and add more opitions to suported file format // not needed anymore, switch on loader.
	// it is only for initial security and later testes on unknown files.
	if (!(h->color_type == 0 || h->color_type == 1) ||
		(h->xres == 0 || h->yres == 0 || h->color_start != 0) ||
		!(h->bpp == 8 || h->bpp == 15 || h->bpp == 16 || h->bpp == 24 || h->bpp == 31 || h->bpp == 32) ||
		!(h->image_type == 1 || h->image_type == 2 || h->image_type == 3 || h->image_type == 9 || h->image_type == 10 || h->image_type == 11) ||
		!(h->color_length == 0 || h->color_length == 256) ||
		!(h->color_depth == 0 || h->color_depth == 16 || h->color_depth == 24) //&&
		// !(h->orientation == 0 || h->orientation == 1 || h->orientation == 8 ) // not required
		)
		return 1;//IMG_ERRO_UNSUPORTED_FORMAT;
	return 0;
}

BOOL isUnsuportedTGA(TGA* h) {
	//return 0;
	// second verirification (logic)
	if ((h->color_type == 1 &&
		(!(h->image_type == 1 || h->image_type == 9) || h->color_length < 1 || !(h->color_depth == 16 || h->color_depth == 24) || !(h->bpp == 8 || h->bpp == 16))) ||
		 (h->image_type == 3 && h->bpp != 8)
		)
		return 1;
	return 0;
}

TGA* read_TGA_h(FILE* f) {

	if (!f)
		return 0;
	TGA* h = new TGA;
	if (fread(h, 1, sizeof(TGA), f) != sizeof(TGA)) {
		delete h;
		return 0;
	}
	if (isInvalidTGA(h) || isUnsuportedTGA(h)) {
		delete h;
		return 0;
	}
	return h;
}

byte decodeTGA_RLE(byte* pData, byte bytes, uint dataSize, FILE* f) {
	ulong cnt = 0;
	ulong  data = 0;
	int	len = 0;
	byte tmp = 0;
	long l = 0;
	while (cnt * bytes < dataSize) {
		//tmp = fgetc(f);
		tmp = 0;
		l = fgetc(f);
		if (l < 0) {
			//addErrorList(IMG_ERRO_FILE_SMALLER, __LINE__);
			return 1;
		}
		tmp = (byte)l;
		if ((tmp & 0x80)) {
			len = tmp & 0x7F;
			//if (fread(&data, 1, bytes, f) != bytes)
			l = fread(&data, 1, bytes, f);
			if (l != bytes) {
				//addErrorList(IMG_ERRO_FILE_SMALLER, __LINE__);
				return 0;
			}
			while ((len >= 0) && (cnt * bytes < dataSize)) {
				memcpy(pData, &data, bytes);
				pData += bytes;
				len--;
				cnt++;
			}
		}
		else {
			len = tmp & 0x7F;
			while ((len >= 0) && (cnt * bytes < dataSize)) {
				//if (fread(pData, 1, bytes, f) != bytes)
				l = fread(pData, 1, bytes, f);
				if (l != bytes) {
					//addErrorList(IMG_ERRO_FILE_SMALLER, __LINE__);
					return 0;
				}
				pData += bytes;
				len--;
				cnt++;
			}
		}
	}
	return 0;
}

byte decodeTGA_RLEM(byte* pData, byte bytes, uint dataSize, byte* f, byte* f2) {
	ulong cnt = 0;
	ulong  data = 0;
	int	len = 0;
	byte tmp = 0;
	long l = 0;
	while (cnt * bytes < dataSize) {
		tmp = 0;
		l = *f;
		f++;
		if (l < 0) {
			return 1;
		}
		tmp = (byte)l;
		if ((tmp & 0x80)) {
			len = tmp & 0x7F;
			memcpy(&data, f, bytes);
			f += bytes;
			while ((len >= 0) && (cnt * bytes < dataSize) && (f < f2)) {
				memcpy(pData, &data, bytes);
				pData += bytes;
				len--;
				cnt++;
			}
		}
		else {
			len = tmp & 0x7F;
			while ((len >= 0) && (cnt * bytes < dataSize) && (f < f2)) {
				memcpy(pData, f, bytes);
				f += bytes;
				pData += bytes;
				len--;
				cnt++;
			}
		}
	}
	return 0;
}

img_basis* read_TGA_header(FILE* f) {
	if (!f)
		return 0;
	TGA* h = new TGA;
	if (fread(h, 1, sizeof(TGA), f) != sizeof(TGA)) {
		delete h;
		return 0;
	}
	if (isInvalidTGA(h) || isUnsuportedTGA(h)) {
		delete h;
		return 0;
	}
	img_basis* img = new img_basis;
	img->xres = h->xres;
	img->yres = h->yres;
	img->bpp = h->bpp;
	img->orientation = (h->orientation & 0x20) ? 1 : 0;
	img->orientation += (h->orientation & 0x10) ? 2 : 0;
	img->chanels = h->bpp / 8;
	img->zres = 1;
	img->palSize = h->pal_length * h->pal_depth / 8;
	return img;
}

img_basis* read_TGA(FILE* f) { // Good code removal
	TGA* h = 0;
	uint size = 0;
	img_basis* img = 0;
	byte* data = 0;
	ulong l = 0;
	long fp = 0;
	fp = ftell(f);
	h = read_TGA_h(f);
	if (!h) {
		printf("*** UNSUPORTED TARGA FILE ***\n\n");
		fseek(f, fp, SEEK_SET);
		return 0;
	}
	if (true) {
		printf("*** Loading TARGA FILE ***\n id_length   = %i\n color_type  = %i\n image_type  = %i\n "
			   "color_start = %i\n pal_length  = %i\n pal_depth   = %i\n "
			   "x_offset = %i\n y_offset = %i\n xres = %i\n yres = %i\n "
			   "bpp  = %i\n orientation = %i\n *** *** ***\n",
			   h->id_length, h->color_type, h->image_type,
			   h->color_start, h->pal_length, h->pal_depth,
			   h->x_offset, h->y_offset, h->xres, h->yres,
			   h->bpp, h->orientation);
	}
	img = new img_basis;
	if (!img) {
		fseek(f, fp, SEEK_SET);
		delete h;
		return 0;
	}
	img->xres = h->x;
	img->yres = h->y;
	if (h->bpp == 15)
		h->bpp = 16;
	if (h->bpp == 31)
		h->bpp = 32;
	img->bpp = h->bpp;
	img->chanels = h->bpp / 8;
	if (h->pal_length && h->color_depth && h->color_type)
		img->palSize = h->pal_length * (h->color_depth / 8);
	img->orientation = (h->orientation & 0x20) ? 1 : 0;
	img->orientation += (h->orientation & 0x10) ? 2 : 0;
	//img->orientation = h->orientation;
	if (h->id_length) {
		img->id = new byte[h->id_length + 1];
		if (!img->id) {
			delete h;
			delete img;
			return 0;
		}
		img->id[h->id_length] = 0;
		fread(img->id, 1, h->id_length, f);
	}
	if (h->pal_length || h->pal_depth) {
		if (h->pal_depth == 15) h->pal_depth = 16;
		img->palSize = h->pal_length * h->pal_depth / 8;
		img->pal = new byte[img->palSize];
		if (!img->pal) {
			delete h;
			delete img;
			fseek(f, fp, SEEK_SET);
			return 0;
		}
		fread(img->pal, 1, img->palSize, f);
	}
	img->dataSize = h->x * h->y * h->bpp / 8;
	img->pixels = new byte[(img->dataSize)];
	if (!img->pixels) {
		delete h;
		delete img;
		fseek(f, fp, SEEK_SET);
		return 0;
	}
	if (h->image_type >= 1 && h->image_type <= 3) // Raw
		l = fread(img->pixels, 1, img->dataSize, f);
	else if (h->image_type >= 9 && h->image_type <= 11) { // RLE
		size_t fileSize = (fSize(f)-ftell(f));
		byte* raw = new byte[fileSize + 32];
		if (!raw) {
			delete h;
			delete img;
			fseek(f, fp, SEEK_SET);
			return 0;
		}
		size_t fileSizeRead=0;
		fileSizeRead = fread(raw, 1, fileSize, f);
		printf("fileSize(%i) - fileSizeRead(%i) = %i\n", fileSize, fileSizeRead, uint(fileSize - fileSizeRead));
		decodeTGA_RLEM(img->pixels, h->bpp / 8, img->dataSize, raw, raw + fileSize);
		//decodeTGA_RLE(img->pixels, h->bpp / 8, img->dataSize, f);
		delete[]raw;
	}
	else {
		delete h;
		delete img;
		fseek(f, fp, SEEK_SET);
		return 0;
	}
	if (img->pal) {
		if (h->bpp == 8) {
			if (h->pal_depth == 16) {
				img->bpp = 16;
				img->dataSize = h->x * h->y * 2;
				data = new byte[img->dataSize];
				if (!data) {
					delete h;
					delete img;
					fseek(f, fp, SEEK_SET);
					return 0;
				}
				rgb_565* pal = (rgb_565*)img->pal;
				rgb_565* p = (rgb_565*)data;
				for (int i = 0; i < h->x * h->y; i++) {
					p[i] = pal[img->pixels[i]];
				}
				img->dataFormat = imDF::DF_BGRA_5551;
			}
			else {
				img->bpp = 24;
				img->dataSize = h->x * h->y * 3;
				data = new byte[img->dataSize];
				if (!data) {
					delete h;
					delete img;
					fseek(f, fp, SEEK_SET);
					return 0;
				}
				bgr_8u* pal = (bgr_8u*)img->pal;
				bgr_8u* p = (bgr_8u*)data;
				for (int i = 0; i < h->x * h->y; i++) {
					p[i] = pal[img->pixels[i]];
				}
				img->dataFormat = imDF::DF_BGR_8u;
			}
		}
		else if (h->bpp == 16) {
			img->bpp = 32;
			img->dataSize = h->x * h->y * 4;
			data = new byte[img->dataSize];
			if (!data) {
				delete h;
				delete img;
				fseek(f, fp, SEEK_SET);
				return 0;
			}
			if (h->pal_depth == 16) {
				bgra_8u* p = (bgra_8u*)data;
				bgr_565* pal = (bgr_565*)img->pal;
				for (int i = 0; i < h->x * h->y; i++) {
					p[i] = pal[img->pixels[i * 2 + 0]];
					p[i].a = img->pixels[i * 2 + 1];
				}
			}
			else {
				bgra_8u* p = (bgra_8u*)data;
				bgr_8u* pal = (bgr_8u*)img->pal;
				for (int i = 0; i < h->x * h->y; i++) {
					p[i] = pal[img->pixels[i * 2 + 0]];
					p[i].a = img->pixels[i * 2 + 1];
				}
			}
			img->dataFormat = imDF::DF_BGRA_8u;
		}
		delete img->pal;
		img->pal = 0;
		delete img->pixels;
		img->pixels = data;
	}
	else {
		if ((h->image_type == 2 || h->image_type == 10) && h->bpp == 16) { // RGB / RGBA		
			img->dataFormat = imDF ::DF_BGRA_5551;
			bgra_5551* p = (bgra_5551*)img->pixels;
			for (int i = 0; i < h->x * h->y; i++) {
				p->a = !p->a;
				p++;
			}

			img->bpp = 16;
			img->dataSize = h->x * h->y * 2;
		}
		else {
			switch (h->bpp) {
				case 8:
				{
					img->dataFormat = imDF :: DF_L_8u;
					img->bpp = 8;
					img->dataSize = h->x * h->y * 1;
					break;
				}
				case 16:
				{
					img->dataFormat = imDF ::DF_BGRA_5551;
					img->bpp = 16;
					img->dataSize = h->x * h->y * 2;
					break;
				}
				case 24:
				{
					img->dataFormat = imDF :: DF_BGR_8u;
					img->bpp = 24;
					img->dataSize = h->x * h->y * 3;
					break;
				}
				case 32:
				{
					img->dataFormat = imDF :: DF_BGRA_8u;
					img->bpp = 32;
					img->dataSize = h->x * h->y * 4;
					img->hasAlpha = 1;
					break;
				}
				default:
				{
					delete h;
					delete img;
					delete[] data;
					return 0;
					break;
				}
			}
		}
	}
	img->spp = img->bpp / 8;
	delete h;
	return img;
}








