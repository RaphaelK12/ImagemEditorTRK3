#include "pch.h"
#include "Util.h"
#include "Loaders.h"
#include "Enums.h"
#include <stdio.h>
#include <setjmp.h>
#include "../../../../jpeg-9d/jpeglib.h"
#include "../../../../lpng1637/png.h"
#include "../../../../zlib/zlib.h"



// JPEG
struct my_error_mgr { // JPEG error manager, needed in any error in jpeg read
	struct jpeg_error_mgr pub;	/* "public" fields */
	jmp_buf setjmp_buffer;	/* for return to caller */
};

// JPEG error function to avoid JPEG lib call exit() and shut down te entire program
void my_error_exit(j_common_ptr cinfo) {
	my_error_mgr* myerr = (my_error_mgr*)cinfo->err;
	(*cinfo->err->output_message) (cinfo);
	longjmp(myerr->setjmp_buffer, 1);
}

// read JPEG image info using img_basis to get only header info
img_basis* read_JPEG_header(FILE* f) {
	if (!f)
		return 0;
	img_basis* img = new img_basis;
	if (!img)
		return 0;
	struct jpeg_decompress_struct cinfo;
	struct my_error_mgr jerr;
	cinfo.err = jpeg_std_error(&jerr.pub);
	jerr.pub.error_exit = my_error_exit;
	if (setjmp(jerr.setjmp_buffer)) {
		jpeg_destroy_decompress(&cinfo);
		delete img;
		return 0;
	}
	jpeg_create_decompress(&cinfo);
	jpeg_stdio_src(&cinfo, f);
	(void)jpeg_read_header(&cinfo, TRUE);
	img->dataSize = cinfo.output_width * cinfo.output_height * cinfo.output_components;
	img->chanels = cinfo.output_components;
	img->xres = cinfo.output_width;
	img->yres = cinfo.output_height;
	img->zres = 1;
	img->bpp = cinfo.output_components * 8;
	jpeg_destroy_decompress(&cinfo);
	return img;
}

// read JPEG image info and pixel data
img_basis* read_JPEG(FILE* f) {
	long fp = ftell(f);
	if (!f)
		return 0;
	img_basis* img = new img_basis;
	if (!img) {
		return 0;
	}
	byte* data = 0;
	struct jpeg_decompress_struct cinfo;
	struct my_error_mgr jerr;
	int row_stride;		/* physical row width in output buffer */
	cinfo.err = jpeg_std_error(&jerr.pub);
	jerr.pub.error_exit = my_error_exit;
	if (setjmp(jerr.setjmp_buffer)) {
		fseek(f, fp, SEEK_SET);
		jpeg_destroy_decompress(&cinfo);
		delete img;
		if (data)
			delete[] data;
		return 0;
	}
	jpeg_create_decompress(&cinfo);
	jpeg_stdio_src(&cinfo, f);
	(void)jpeg_read_header(&cinfo, TRUE);
	(void)jpeg_start_decompress(&cinfo);
	row_stride = cinfo.output_width * cinfo.output_components;
	img->dataSize = cinfo.output_width * cinfo.output_height * cinfo.output_components;
	img->pixels = new byte[img->dataSize/*+ cinfo.output_height*4*/];
	if (!img->pixels) {
		fseek(f, fp, SEEK_SET);
		jpeg_destroy_decompress(&cinfo);
		delete img;
		return 0;
	}
	img->chanels = cinfo.output_components;
	img->xres = cinfo.output_width;
	img->yres = cinfo.output_height;
	img->zres = 1;
	img->bpp = cinfo.output_components * 8;

	byte* p = img->pixels;
	while (cinfo.output_scanline < cinfo.output_height) {
		(void)jpeg_read_scanlines(&cinfo, &p, 1);
		p += row_stride;
	}
	(void)jpeg_finish_decompress(&cinfo);
	jpeg_destroy_decompress(&cinfo);
	if (img->chanels == 4 || img->chanels == 2) {
		img->hasAlpha = 1;
	}
	switch (img->chanels) {
		case 1:
			img->dataFormat = imDF::DF_L_8u;
			break;
		case 2:
			img->dataFormat = imDF::DF_LA_8u;
			break;
		case 3:
			img->dataFormat = imDF::DF_RGB_8u;
			break;
		case 4:
			img->dataFormat = imDF::DF_RGBA_8u;
			break;
		default:
			delete img;
			return 0;
	}
	img->dataSize = img->xres * img->yres * img->chanels;

#if 0
	if (img->chanels == 3) {
		data = new byte[img->xres * img->yres * 4];
		if (!data) {
			delete img;
			return 0;
		}
		for (int i = 0; i < img->xres * img->yres; i++) {
			data[i * 4 + 0] = img->pixels[i * 3 + 2];
			data[i * 4 + 1] = img->pixels[i * 3 + 1];
			data[i * 4 + 2] = img->pixels[i * 3 + 0];
			data[i * 4 + 3] = 255;
		}
		delete img->pixels;
		img->pixels = data;
		img->bpp = 32;
		img->chanels = 4;
		img->dataSize = img->xres * img->yres * 4;
	}
	else if (img->chanels == 1) {
		data = new byte[img->xres * img->yres * 4];
		if (!data) {
			delete img;
			return 0;
		}
		for (int i = 0; i < img->xres * img->yres; i++) {
			data[i * 4 + 0] = img->pixels[i];
			data[i * 4 + 1] = img->pixels[i];
			data[i * 4 + 2] = img->pixels[i];
			data[i * 4 + 3] = 255;
		}
		delete img->pixels;
		img->pixels = data;
		img->bpp = 32;
		img->chanels = 4;
		img->dataSize = img->xres * img->yres * 4;
	}
#endif // 0
	img->orientation = 1;
	return img;
}
