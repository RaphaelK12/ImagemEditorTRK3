#include "pch.h"
//#include "Generated\_GEN_Struct.h"
#include "Enums.h"
#include "definitions.h"
#include "structs.h"
#include "Imagem_003.h"
#include "Util.h"

IMAGEM_API uint convertDataFormat(imDF ff, imDF tf, byte* f, byte** t,
								  uint numPixels, uint& datasize, ushort& spp, ushort& bpp);

img_basis::~img_basis() {
	destroy();
};

img_basis::img_basis() :
	dataSize(0),
	xres(0),
	yres(0),
	zres(0),
	palSize(0),
	dataFormat (imDF::DF_NONE),
	glDataFormat ( imDF::DF_NONE),
	glInternalFormat (imGLIFormat::GL_IFORMAT_NONE),
	glFormat (imGLFormat::GL_FORMAT_NONE),
	glType (imGLType::GL_NONE),
	dataType(imDT::DT_NONE),
	orientation(0),
	compression(0),
	spp(0),
	bpp(0),
	chanels(0),
	hasAlpha(0),
	pal(0),
	pixels(0),
	id(0)
{

};

void img_basis::destroy() {
	if (pal)
		delete[]pal;
	if (pixels)
		delete[]pixels;
	if (id)
		delete[]id;
	pal = NULL;
	pixels = NULL;
	id = NULL;

	dataSize = 0;
	xres = 0;
	yres = 0;
	zres = 0;
	palSize = 0;
	dataFormat = imDF::DF_NONE;
	glDataFormat = imDF::DF_NONE;
	glInternalFormat = imGLIFormat::GL_IFORMAT_NONE;
	glFormat = imGLFormat::GL_FORMAT_NONE;
	glType = imGLType::GL_NONE;
	dataType = imDT::DT_NONE;
	orientation = 0;
	compression = 0;
	spp = 0;
	bpp = 0;
	chanels = 0;
	hasAlpha = 0;
}

img_basis::img_basis(const img_basis& c) :
	dataSize(0),
	xres(0),
	yres(0),
	zres(0),
	palSize(0),
	dataFormat(imDF::DF_NONE),
	glDataFormat(imDF::DF_NONE),
	glInternalFormat(imGLIFormat::GL_IFORMAT_NONE),
	glFormat(imGLFormat::GL_FORMAT_NONE),
	glType(imGLType::GL_NONE),
	dataType(imDT::DT_NONE),
	orientation(0),
	compression(0),
	spp(0),
	bpp(0),
	chanels(0),
	hasAlpha(0),
	pal(0),
	pixels(0),
	id(0) {
	if (!c.dataSize || c.dataFormat == imDF::DF_NONE || !c.xres || !c.yres || !c.spp || !c.pixels)
		return;
	dataSize = c.xres * c.yres * c.zres * spp;
	if (dataSize != c.dataSize)
		return;
	if (!(pixels = new byte[dataSize]))
		return;
	memcpy(pixels, c.pixels, dataSize);

	xres = c.xres;
	yres = c.yres;
	zres = c.zres;
	dataFormat = c.dataFormat;
	glDataFormat = c.glDataFormat;
	glInternalFormat = c.glInternalFormat;
	glFormat = c.glFormat;
	glType = c.glType;
	dataType = c.dataType;
	orientation = c.orientation;
	compression = c.compression;
	spp = c.spp;
	bpp = c.bpp;
	chanels = c.chanels;
	hasAlpha = c.hasAlpha;
}

img_basis::img_basis(const img_basis* c) :
	dataSize(0),
	xres(0),
	yres(0),
	zres(0),
	palSize(0),
	dataFormat(imDF::DF_NONE),
	glDataFormat(imDF::DF_NONE),
	glInternalFormat(imGLIFormat::GL_IFORMAT_NONE),
	glFormat(imGLFormat::GL_FORMAT_NONE),
	glType(imGLType::GL_NONE),
	dataType(imDT::DT_NONE),
	orientation(0),
	compression(0),
	spp(0),
	bpp(0),
	chanels(0),
	hasAlpha(0),
	pal(0),
	pixels(0),
	id(0) 
{
	if (!c)
		return;
	if (!c->dataSize || c->dataFormat == imDF::DF_NONE || !c->xres || !c->yres || !c->zres || !c->spp || !c->pixels)
		return;
	dataSize = c->xres * c->yres * c->zres * spp;
	if (dataSize != c->dataSize)
		return;
	if (!(pixels = new byte[dataSize]))
		return;
	memcpy(pixels, c->pixels, dataSize);

	xres = c->xres;
	yres = c->yres;
	zres = c->zres;
	dataFormat = c->dataFormat;
	glDataFormat = c->glDataFormat;
	glInternalFormat = c->glInternalFormat;
	glFormat = c->glFormat;
	glType = c->glType;
	dataType = c->dataType;
	orientation = c->orientation;
	compression = c->compression;
	spp = c->spp;
	bpp = c->bpp;
	chanels = c->chanels;
	hasAlpha = c->hasAlpha;
}

img_basis& img_basis::operator = (const img_basis& c) {
	destroy();
	if (!c.dataSize || c.dataFormat== imDF::DF_NONE || !c.xres || !c.yres || !c.zres || !c.spp || !c.pixels)
		return *this;
	dataSize = c.xres * c.yres * c.zres * spp;
	if (dataSize != c.dataSize)
		return *this;
	if (!(pixels = new byte[dataSize]))
		return *this;
	memcpy(pixels, c.pixels, dataSize);

	xres = c.xres;
	yres = c.yres;
	zres = c.zres;
	dataFormat = c.dataFormat;
	glDataFormat = c.glDataFormat;
	glInternalFormat = c.glInternalFormat;
	glFormat = c.glFormat;
	glType = c.glType;
	dataType = c.dataType;
	orientation = c.orientation;
	compression = c.compression;
	spp = c.spp;
	bpp = c.bpp;
	chanels = c.chanels;
	hasAlpha = c.hasAlpha;
	return *this;
}

img_basis& img_basis::operator = (const img_basis* c) {
	destroy();
	if (!c->dataSize || c->dataFormat == imDF::DF_NONE || !c->xres || !c->yres || !c->zres || !c->spp || !c->pixels)
		return *this;
	dataSize = c->xres * c->yres * c->zres * spp;
	if (dataSize != c->dataSize)
		return *this;
	if (!(pixels = new byte[dataSize]))
		return *this;
	memcpy(pixels, c->pixels, dataSize);

	xres = c->xres;
	yres = c->yres;
	zres = c->zres;
	dataFormat = c->dataFormat;
	glDataFormat = c->glDataFormat;
	glInternalFormat = c->glInternalFormat;
	glFormat = c->glFormat;
	glType = c->glType;
	dataType = c->dataType;
	orientation = c->orientation;
	compression = c->compression;
	spp = c->spp;
	bpp = c->bpp;
	chanels = c->chanels;
	hasAlpha = c->hasAlpha;
	return *this;
}

int img_basis::convertToDataFormat(enum imDF toFormat) {
	byte* data = 0;
	if (dataFormat == toFormat)
		return true;

	if (convertDataFormat(dataFormat, toFormat, pixels, &data, xres * yres, dataSize, spp, bpp)) {
		delete[]pixels;
		this->pixels = data;
		dataFormat = toFormat;
		calculateInfoFromDataFormat();
		return true;
	}
	return false;
}

img_basis* img_basis::makeFormat(enum imDF format) {
	img_basis* img = new img_basis;
	if (!img)
		return 0;
	img->xres = xres;
	img->yres = yres;
	img->zres = zres;
	img->dataFormat = format;
	img->glDataFormat = glDataFormat;
	img->glInternalFormat = glInternalFormat;
	img->glFormat = glFormat;
	img->glType = glType;
	img->dataType = dataType;

	img->orientation = orientation;
	img->compression = compression;
	img->spp = spp;
	img->bpp = bpp;
	img->chanels = chanels;
	img->hasAlpha = hasAlpha;

	if (convertDataFormat(dataFormat, format, pixels, &img->pixels, img->xres * img->yres, img->dataSize, img->spp, img->bpp)) {
		img->calculateInfoFromDataFormat();
		return img;
	}
	delete img;
	return 0;
}

byte* img_basis::makeDataFormat(enum imDF format, byte * _pixels) {
	byte* outPixels = 0;
	if (_pixels) 
		outPixels = _pixels;
	uint _datasize = dataSize;
	ushort _spp = spp;
	ushort _bpp = bpp;
	if (convertDataFormat(dataFormat, format, pixels, &outPixels, xres * yres, _datasize, _spp, _bpp))
		return outPixels;
	return 0;
}

void img_basis::calculateInfoFromDataFormat() {
	switch (dataFormat) {


#include "Generated\_GEN_InfoDataFormat.inl"

		default:
			break;
	}
}

int img_basis::isOPenGLCompatible() {
	calculateInfoFromDataFormat();
	if (dataFormat == glDataFormat) {
		if (dataFormat != imDF::DF_NONE && dataFormat != imDF::DF_INDEX) return 1;
	}
	return 0;
}

int img_basis::convertoToOPenGLCompatible() {
	calculateInfoFromDataFormat();
	if (dataFormat != glDataFormat) {
		convertToDataFormat(glDataFormat);
	}
	return isOPenGLCompatible();
};

int img_basis::flipv() {
	if (!pixels || !xres || !yres || !bpp || !spp || !dataSize)
		return 0;
	byte* pi = (byte*)pixels;
	byte* pf = (byte*)pixels + dataSize - xres * spp;
	byte* tmp = new byte[xres * spp];
	if (!tmp)
		return 0;
	for (int i = 0; (i < yres/2) && (pi < pf); i++) {
		memcpy(tmp, pf, xres * spp);
		memcpy(pf , pi, xres * spp);
		memcpy(pi, tmp, xres * spp);
		pi += xres * spp;
		pf -= xres * spp;
	}
	delete[] tmp;
	return 1;
}

int img_basis::fliph() {
	if (!pixels || !xres || !yres || !bpp || !spp || !dataSize)
		return 0;
	byte* pi = 0;
	byte* pf = 0;
	byte* tmp = new byte[spp];
	if (!tmp)
		return 0;
	for (int y = 0; y < yres; y++) {
		pi = (byte*)pixels + y * xres * spp;
		pf = pi + (xres - 1) * spp;
		for (int x = 0; (x < xres / 2) && (pi < pf); x++) {
			memcpy(tmp, pf, spp);
			memcpy(pf, pi,  spp);
			memcpy(pi, tmp, spp);
			pi += spp;
			pf -= spp;
		}
	}
	delete[] tmp;
	return 1;
}

int img_basis::fliphv() {
	if (!pixels || !xres || !yres || !bpp || !spp || !dataSize)
		return 0;
	byte* pi = (byte*)pixels;
	byte* pf = (byte*)pixels + dataSize - xres * spp;
	byte* tmp = new byte[spp];
	if (!tmp)
		return 0;
	for (int i = 0; (i < xres*yres) && (pi < pf); i++) {
		memcpy(tmp, pf, spp);
		memcpy(pf, pi, spp);
		memcpy(pi, tmp, spp);
		pi += spp;
		pf -= spp;
	}
	delete[] tmp;
	return 1;
}

int img_basis::unflip() {
	if (orientation == 3)
		fliphv();
	else if (orientation == 2)
		fliph();
	else if (orientation == 1)
		flipv();
	else 
		return 0;
	return 1;
}

int img_basis::rotateSimple(int mode) {
	return 0;
}

//rgba_32f img_basis::sample_nearest(double x, double y, int mode) {
//	return rgba_32f();
//};
//rgba_32f img_basis::sample_linear(double x, double y, int mode) {
//	switch (mode) {
//		case 1: // wrap
//		{
//			x = wrap(x, 0.0, 1.0);
//			y = wrap(x, 0.0, 1.0);
//		}
//		case 2: // clamp to border
//		{
//			x = clamp(x, 0.0, 1.0);
//			y = clamp(y, 0.0, 1.0);
//		}
//		default:
//			break;
//	}
//	return rgba_32f();
//}

img_basis* img_basis::makeHalfRez(void) {
	return 0;
};

