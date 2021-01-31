#include "pch.h"
#include "NumDef.h"
#include "enums.h"
#include "sterr.h"
#include "definitions.h"
#include "structs.h"
//#include "Generated\_GEN_Struct.h"
//#include "stconv.h"
#include "img_basis.h"
#include "img_mips.h"
#include "img_face.h"
#include "img_array.h"
#include "Imagem_003.h"
#include "Loaders.h"


long fSize(FILE* f) {
	long t;
	int o;
	o = ftell(f);
	fseek(f, 0, SEEK_END);
	t = ftell(f);
	fseek(f, o, SEEK_SET);
	//char text[100];
	//sprintf(text,"%i %i",sizeof(llong), sizeof(long));
	//MessageBox(0,text,"sizeof llong",0);
	return(t);
}

imagem2::~imagem2() {
	destroy();
}

imagem2::imagem2() :
	//m_DX_dataType(0), m_DX_flag(0), m_GL_dataType(0), 
	m_glFlag(0),
	m_glCompression(imGLCompressedFormat::GL_COMPRESSED_NONE), m_glTarget(imGLTarget::GL_TEXTURE_NONE),
	m_glFormat(imGLFormat::GL_FORMAT_NONE), m_glType(imGLType::GL_NONE), m_glInternalFormat(imGLIFormat::GL_IFORMAT_NONE),
	m_xres(0), m_yres(0), m_zres(0), m_compression(0), m_type(0), m_format(0),
	m_dataType(imDT::DT_NONE), m_dataFormat(imDF::DF_NONE), m_bpp(0), m_spp(0), m_chanels(0),
	m_mips(0), m_isOk(0), m_flags(0) /* ,m_forceNonIndex(0), m_palSize(0), m_palType(0) */
{
	m_faces.push_back(new img_face);
	//m_array[0]->m_faces.push_back(new img_face()); // no need anymore
};

void imagem2::destroy() {
	uint size;
	uint i = 0;
	size = m_faces.size();
	for (i = 0; i < size; i++) {
		if (m_faces[i])
			delete m_faces[i];
		m_faces[i] = 0;
	}
	size = m_errorList.size();
	for (i = 0; i < size; i++) {
		if (m_errorList[i])
			delete m_errorList[i];
		m_errorList[i] = 0;
	}
	size = m_conversionList.size();
	for (i = 0; i < size; i++) {
		if (m_conversionList[i])
			delete m_conversionList[i];
		m_conversionList[i] = 0;
	}
	m_faces.clear();
	m_errorList.clear();
	m_conversionList.clear();

	m_faces.shrink_to_fit();
	m_errorList.shrink_to_fit();
	m_conversionList.shrink_to_fit();

	m_name.clear();

	//m_DX_dataType = 0;
	//m_DX_flag = 0;
	//m_GL_dataType = 0;
	m_glFlag = 0;
	m_glCompression = imGLCompressedFormat::GL_COMPRESSED_NONE;
	m_glTarget = imGLTarget::GL_TEXTURE_NONE;
	m_glFormat = imGLFormat::GL_FORMAT_NONE;
	m_glType = imGLType::GL_NONE;
	m_glInternalFormat = imGLIFormat::GL_IFORMAT_NONE;
	m_xres = 0;
	m_yres = 0;
	m_zres = 0;
	//m_palSize = 0;
	//m_palType = 0;
	m_compression = 0;
	m_type = 0;
	m_format = 0;
	m_dataType = imDT::DT_NONE;
	m_dataFormat = imDF::DF_NONE;
	m_bpp = 0;
	m_spp = 0;
	m_chanels = 0;
	m_mips = 0;
	m_isOk = 0;
	//m_forceNonIndex = 0;
	m_flags = 0;
}

// constructors from image data
imagem2::imagem2(const imagem2& im) :
	//m_DX_dataType(0), m_DX_flag(0), m_GL_dataType(0), 
	m_glFlag(0),
	m_glCompression(imGLCompressedFormat::GL_COMPRESSED_NONE), m_glTarget(imGLTarget::GL_TEXTURE_NONE),
	m_glFormat(imGLFormat::GL_FORMAT_NONE), m_glType(imGLType::GL_NONE), m_glInternalFormat(imGLIFormat::GL_IFORMAT_NONE),
	m_xres(0), m_yres(0), m_zres(0), m_compression(0), m_type(0), m_format(0),
	m_dataType(imDT::DT_NONE), m_dataFormat(imDF::DF_NONE), m_bpp(0), m_spp(0), m_chanels(0),
	m_mips(0), m_isOk(0), m_flags(0) /* ,m_forceNonIndex(0), m_palSize(0), m_palType(0) */
{
	uint size = 0;
	uint i = 0;
	for (i = 0; i < im.m_faces.size(); i++)
		if (im.m_faces[i])
			m_faces.push_back(new img_face(im.m_faces[i]));
	//for (i = 0; i < im.m_errorList.size(); i++)
	//	if (im.m_errorList[i])
	//		m_errorList.push_back(im.m_errorList[i]);
	//for (i = 0; i < im.m_conversionList.size(); i++)
	//	if (im.m_conversionList[i])
	//		m_conversionList.push_back(im.m_conversionList[i]);
	m_name = im.m_name;
	//m_DX_dataType = im.m_DX_dataType;
	//m_DX_flag = im.m_DX_flag;
	//m_GL_dataType = im.m_GL_dataType;
	m_glFlag = im.m_glFlag;
	m_glCompression = im.m_glCompression;
	m_glTarget = im.m_glTarget;
	m_glFormat = im.m_glFormat;
	m_glType = im.m_glType;
	m_glInternalFormat = im.m_glInternalFormat;
	m_xres = im.m_xres;
	m_yres = im.m_yres;
	m_zres = im.m_zres;
	//m_palSize = 				im.m_palSize;
	//m_palType = 				im.m_palType;
	m_compression = im.m_compression;
	m_type = im.m_type;
	m_format = im.m_format;
	m_dataType = im.m_dataType;
	m_dataFormat = im.m_dataFormat;
	m_bpp = im.m_bpp;
	m_spp = im.m_spp;
	m_chanels = im.m_chanels;
	m_mips = im.m_mips;
	m_isOk = im.m_isOk;
	//m_forceNonIndex = 			im.m_forceNonIndex;
	m_flags = im.m_flags;
};

imagem2::imagem2(const imagem2* im) :
	//m_DX_dataType(0), m_DX_flag(0), m_GL_dataType(0), 
	m_glFlag(0),
	m_glCompression(imGLCompressedFormat::GL_COMPRESSED_NONE), m_glTarget(imGLTarget::GL_TEXTURE_NONE),
	m_glFormat(imGLFormat::GL_FORMAT_NONE), m_glType(imGLType::GL_NONE), m_glInternalFormat(imGLIFormat::GL_IFORMAT_NONE),
	m_xres(0), m_yres(0), m_zres(0), m_compression(0), m_type(0), m_format(0),
	m_dataType(imDT::DT_NONE), m_dataFormat(imDF::DF_NONE), m_bpp(0), m_spp(0), m_chanels(0),
	m_mips(0), m_isOk(0), m_flags(0) /* ,m_forceNonIndex(0), m_palSize(0), m_palType(0) */
{
	uint size = 0;
	uint i = 0;
	for (i = 0; i < im->m_faces.size(); i++)
		if (im->m_faces[i])
			m_faces.push_back(new img_face(im->m_faces[i]));
	//for (i = 0; i < im->m_errorList.size(); i++)
	//	if (im->m_errorList[i])
	//		m_errorList.push_back(im->m_errorList[i]);
	//for (i = 0; i < im->m_conversionList->size(); i++)
	//	if (im->m_conversionList[i])
	//		m_conversionList.push_back(im->m_conversionList[i]);
	m_name = im->m_name;
	//m_DX_dataType = im->m_DX_dataType;
	//m_DX_flag = im->m_DX_flag;
	m_glType = im->m_glType;
	m_glFlag = im->m_glFlag;
	m_glCompression = im->m_glCompression;
	m_glTarget = im->m_glTarget;
	m_glFormat = im->m_glFormat;
	m_glType = im->m_glType;
	m_glInternalFormat = im->m_glInternalFormat;
	m_xres = im->m_xres;
	m_yres = im->m_yres;
	m_zres = im->m_zres;
	//m_palSize = 				im->m_palSize;
	//m_palType = 				im->m_palType;
	m_compression = im->m_compression;
	m_type = im->m_type;
	m_format = im->m_format;
	m_dataType = im->m_dataType;
	m_dataFormat = im->m_dataFormat;
	m_bpp = im->m_bpp;
	m_spp = im->m_spp;
	m_chanels = im->m_chanels;
	m_mips = im->m_mips;
	m_isOk = im->m_isOk;
	//m_forceNonIndex = 			im->m_forceNonIndex;
	m_flags = im->m_flags;
};

imagem2::imagem2(const img_basis& im) :
	//m_DX_dataType(0), m_DX_flag(0), m_GL_dataType(0), 
	m_glFlag(0),
	m_glCompression(imGLCompressedFormat::GL_COMPRESSED_NONE), m_glTarget(imGLTarget::GL_TEXTURE_NONE),
	m_glFormat(imGLFormat::GL_FORMAT_NONE), m_glType(imGLType::GL_NONE), m_glInternalFormat(imGLIFormat::GL_IFORMAT_NONE),
	m_xres(0), m_yres(0), m_zres(0), m_compression(0), m_type(0), m_format(0),
	m_dataType(imDT::DT_NONE), m_dataFormat(imDF::DF_NONE), m_bpp(0), m_spp(0), m_chanels(0),
	m_mips(0), m_isOk(0), m_flags(0) /* ,m_forceNonIndex(0), m_palSize(0), m_palType(0) */
{
	m_faces.push_back(new img_face());
	m_faces[0]->m_mipmaps.push_back(new img_basis(im));
	m_xres = im.xres;
	m_yres = im.yres;
	m_zres = im.zres;
	m_compression = im.compression;
	m_dataType = im.dataType;
	m_dataFormat = im.dataFormat;
	m_bpp = im.bpp;
	m_spp = im.spp;
	m_chanels = im.chanels;
};

imagem2::imagem2(img_basis* const im) :
	//m_DX_dataType(0), m_DX_flag(0), m_GL_dataType(0), 
	m_glFlag(0),
	m_glCompression(imGLCompressedFormat::GL_COMPRESSED_NONE), m_glTarget(imGLTarget::GL_TEXTURE_NONE),
	m_glFormat(imGLFormat::GL_FORMAT_NONE), m_glType(imGLType::GL_NONE), m_glInternalFormat(imGLIFormat::GL_IFORMAT_NONE),
	m_xres(0), m_yres(0), m_zres(0), m_compression(0), m_type(0), m_format(0),
	m_dataType(imDT::DT_NONE), m_dataFormat(imDF::DF_NONE), m_bpp(0), m_spp(0), m_chanels(0),
	m_mips(0), m_isOk(0), m_flags(0) /* ,m_forceNonIndex(0), m_palSize(0), m_palType(0) */
{
	m_faces.push_back(new img_face());
	m_faces[0]->m_mipmaps.push_back(new img_basis(im));

	m_xres = im->xres;
	m_yres = im->yres;
	m_zres = im->zres;
	m_compression = im->compression;
	m_dataType = im->dataType;
	m_dataFormat = im->dataFormat;
	m_bpp = im->bpp;
	m_spp = im->spp;
	m_chanels = im->chanels;
};

imagem2::imagem2(ushort xres, ushort yres, ushort zres, imDF format) :
	//m_DX_dataType(0), m_DX_flag(0), m_GL_dataType(0), 
	m_glFlag(0),
	m_glCompression(imGLCompressedFormat::GL_COMPRESSED_NONE), m_glTarget(imGLTarget::GL_TEXTURE_NONE),
	m_glFormat(imGLFormat::GL_FORMAT_NONE), m_glType(imGLType::GL_NONE), m_glInternalFormat(imGLIFormat::GL_IFORMAT_NONE),
	m_xres(0), m_yres(0), m_zres(0), m_compression(0), m_type(0), m_format(0),
	m_dataType(imDT::DT_NONE), m_dataFormat(imDF::DF_NONE), m_bpp(0), m_spp(0), m_chanels(0),
	m_mips(0), m_isOk(0), m_flags(0) /* ,m_forceNonIndex(0), m_palSize(0), m_palType(0) */
{};

imagem2::imagem2(ushort xres, ushort yres, ushort zres, imDF format, uint datasize, byte* data, byte compression) :
	//m_DX_dataType(0), m_DX_flag(0), m_GL_dataType(0), 
	m_glFlag(0),
	m_glCompression(imGLCompressedFormat::GL_COMPRESSED_NONE), m_glTarget(imGLTarget::GL_TEXTURE_NONE),
	m_glFormat(imGLFormat::GL_FORMAT_NONE), m_glType(imGLType::GL_NONE), m_glInternalFormat(imGLIFormat::GL_IFORMAT_NONE),
	m_xres(0), m_yres(0), m_zres(0), m_compression(0), m_type(0), m_format(0),
	m_dataType(imDT::DT_NONE), m_dataFormat(imDF::DF_NONE), m_bpp(0), m_spp(0), m_chanels(0),
	m_mips(0), m_isOk(0), m_flags(0) /* ,m_forceNonIndex(0), m_palSize(0), m_palType(0) */
{};

imagem2::imagem2(ushort xres, ushort yres, ushort zres, imDF format, uint narray, uint nfaces) :
	//m_DX_dataType(0), m_DX_flag(0), m_GL_dataType(0), 
	m_glFlag(0),
	m_glCompression(imGLCompressedFormat::GL_COMPRESSED_NONE), m_glTarget(imGLTarget::GL_TEXTURE_NONE),
	m_glFormat(imGLFormat::GL_FORMAT_NONE), m_glType(imGLType::GL_NONE), m_glInternalFormat(imGLIFormat::GL_IFORMAT_NONE),
	m_xres(0), m_yres(0), m_zres(0), m_compression(0), m_type(0), m_format(0),
	m_dataType(imDT::DT_NONE), m_dataFormat(imDF::DF_NONE), m_bpp(0), m_spp(0), m_chanels(0),
	m_mips(0), m_isOk(0), m_flags(0) /* ,m_forceNonIndex(0), m_palSize(0), m_palType(0) */
{};

// constructors from file or filedata
imagem2::imagem2(const char* filename) :
	//m_DX_dataType(0), m_DX_flag(0), m_GL_dataType(0), 
	m_glFlag(0),
	m_glCompression(imGLCompressedFormat::GL_COMPRESSED_NONE), m_glTarget(imGLTarget::GL_TEXTURE_NONE),
	m_glFormat(imGLFormat::GL_FORMAT_NONE), m_glType(imGLType::GL_NONE), m_glInternalFormat(imGLIFormat::GL_IFORMAT_NONE),
	m_xres(0), m_yres(0), m_zres(0), m_compression(0), m_type(0), m_format(0),
	m_dataType(imDT::DT_NONE), m_dataFormat(imDF::DF_NONE), m_bpp(0), m_spp(0), m_chanels(0),
	m_mips(0), m_isOk(0), m_flags(0) /* ,m_forceNonIndex(0), m_palSize(0), m_palType(0) */
{
	loadFile(filename);
};

imagem2::imagem2(const string& filename) :
	//m_DX_dataType(0), m_DX_flag(0), m_GL_dataType(0), 
	m_glFlag(0),
	m_glCompression(imGLCompressedFormat::GL_COMPRESSED_NONE), m_glTarget(imGLTarget::GL_TEXTURE_NONE),
	m_glFormat(imGLFormat::GL_FORMAT_NONE), m_glType(imGLType::GL_NONE), m_glInternalFormat(imGLIFormat::GL_IFORMAT_NONE),
	m_xres(0), m_yres(0), m_zres(0), m_compression(0), m_type(0), m_format(0),
	m_dataType(imDT::DT_NONE), m_dataFormat(imDF::DF_NONE), m_bpp(0), m_spp(0), m_chanels(0),
	m_mips(0), m_isOk(0), m_flags(0) /* ,m_forceNonIndex(0), m_palSize(0), m_palType(0) */
{
	loadFile(filename.c_str());
};

imagem2::imagem2(FILE* f) :
	//m_DX_dataType(0), m_DX_flag(0), m_GL_dataType(0), 
	m_glFlag(0),
	m_glCompression(imGLCompressedFormat::GL_COMPRESSED_NONE), m_glTarget(imGLTarget::GL_TEXTURE_NONE),
	m_glFormat(imGLFormat::GL_FORMAT_NONE), m_glType(imGLType::GL_NONE), m_glInternalFormat(imGLIFormat::GL_IFORMAT_NONE),
	m_xres(0), m_yres(0), m_zres(0), m_compression(0), m_type(0), m_format(0),
	m_dataType(imDT::DT_NONE), m_dataFormat(imDF::DF_NONE), m_bpp(0), m_spp(0), m_chanels(0),
	m_mips(0), m_isOk(0), m_flags(0) /* ,m_forceNonIndex(0), m_palSize(0), m_palType(0) */
{
	img_basis * img = loadImg(f, 0);
	fclose(f);
	if (!img) {
#ifdef _PT_BR
		printf("***********************\n*** Arquivo Não Suportado ***\n\n\n");
#else
		printf("***********************\n*** Unsuported File ***\n\n\n");
#endif // _PT_BR
		return ;
	}
	//img->unflip();
	m_faces.push_back(new img_face(img));
	m_spp = img->spp;
	m_bpp = img->bpp;
	m_chanels = img->chanels;
	m_dataFormat = img->dataFormat;
	m_dataType = img->dataType;
	m_xres = img->xres;
	m_yres = img->yres;
	m_isOk = true;
};

// Loader
int imagem2::loadFile(PCSTR filename) {
	destroy();
	if (!filename)
		return 0;
	FILE* f = fopen(filename, "rb");
	if (!f)
		return 0;
	img_basis* img = 0;
	int get = 0;
	std::string s(filename);
	for (int i = 3; i < 6; i++) {
		if (s.c_str()[s.size() - i] == '.')
			if ((s.c_str()[(s.size() - i) + 1] == 't' || s.c_str()[(s.size() - i) + 1] == 'T') &&
				(s.c_str()[(s.size() - i) + 2] == 'g' || s.c_str()[(s.size() - i) + 2] == 'G') &&
				(s.c_str()[(s.size() - i) + 3] == 'a' || s.c_str()[(s.size() - i) + 3] == 'A'))
				get = 2;
			else if ((s.c_str()[(s.size() - i) + 1] == 'j' || s.c_str()[(s.size() - i) + 1] == 'J') &&
					 (s.c_str()[(s.size() - i) + 2] == 'p' || s.c_str()[(s.size() - i) + 2] == 'P'))
				get = 3;
			else if ((s.c_str()[(s.size() - i) + 1] == 'p' || s.c_str()[(s.size() - i) + 1] == 'P') &&
					 (s.c_str()[(s.size() - i) + 2] == 'n' || s.c_str()[(s.size() - i) + 2] == 'N') &&
					 (s.c_str()[(s.size() - i) + 3] == 'g' || s.c_str()[(s.size() - i) + 3] == 'G'))
				get = 4;
			else if ((s.c_str()[(s.size() - i) + 1] == 'p' || s.c_str()[(s.size() - i) + 1] == 'P') &&
					 (s.c_str()[(s.size() - i) + 2] == 'c' || s.c_str()[(s.size() - i) + 2] == 'C') &&
					 (s.c_str()[(s.size() - i) + 3] == 'x' || s.c_str()[(s.size() - i) + 3] == 'X'))
				get = 5;
			else if ((s.c_str()[(s.size() - i) + 1] == 'p' || s.c_str()[(s.size() - i) + 1] == 'P') && (
					 (s.c_str()[(s.size() - i) + 2] == 'n' || s.c_str()[(s.size() - i) + 2] == 'N') ||
					 (s.c_str()[(s.size() - i) + 2] == 'p' || s.c_str()[(s.size() - i) + 2] == 'P') ||
					 (s.c_str()[(s.size() - i) + 2] == 'b' || s.c_str()[(s.size() - i) + 2] == 'B') ||
					 (s.c_str()[(s.size() - i) + 2] == 'g' || s.c_str()[(s.size() - i) + 2] == 'G') ||
					 (s.c_str()[(s.size() - i) + 2] == 'm' || s.c_str()[(s.size() - i) + 2] == 'M') ) &&
					 (s.c_str()[(s.size() - i) + 3] == 'm' || s.c_str()[(s.size() - i) + 3] == 'M'))
				get = 6;
	}
	img = loadImg(f, get);
	fclose(f);
	if (!img) {
#ifdef _PT_BR
		printf("***********************\n*** Arquivo Não Suportado ***\n\n\n");
#else
		printf("***********************\n*** Unsuported File ***\n\n\n");
#endif // _PT_BR
	return 0;
	}
	//img->unflip();
	m_faces.push_back(new img_face(img));
	m_spp = img->spp;
	m_bpp = img->bpp;
	m_chanels = img->chanels;
	m_dataFormat = img->dataFormat;
	m_dataType = img->dataType;
	m_xres = img->xres;
	m_yres = img->yres;
	m_isOk = true;
	return 1;
};

img_basis* imagem2::loadImg(FILE* f, int type) {
	if (!f)
		return 0;
	long p = ftell(f);
	img_basis* img = 0;
	if (type == 2)
		img = read_TGA(f);
	else if (type == 3)
		img = read_JPEG(f);
	else if (type == 4)
		img = read_PNG(f);
	else if (type == 5)
		img = read_PCX(f);
	else if (type == 6)
		img = read_PNM(f);
	if (!img) {
		fseek(f, p, SEEK_SET);
		img = read_TGA(f);
		printf("read_TGA2 ftell(f) = %i\n", ftell(f));
		if (!img) {
			fseek(f, p, SEEK_SET);
			img = read_PNM(f);
			printf("read_PNM ftell(f) = %i\n", ftell(f));
		}
		if (!img) {
			fseek(f, p, SEEK_SET);
			img = read_PNG(f);
			printf("read_PNG ftell(f) = %i\n", ftell(f));
		}
		if (!img) {
			fseek(f, p, SEEK_SET);
			img = read_JPEG(f);
			printf("read_JPEG ftell(f) = %i\n", ftell(f));
		}
		if (!img) {
			fseek(f, p, SEEK_SET);
			img = read_PCX(f);
			printf("read_PCX ftell(f) = %i\n", ftell(f));
		}
		if (!img) {
			fseek(f, p, SEEK_SET);
		}
	}

	return img;
}




imagem2& imagem2::operator =(const imagem2& im) {
	return *this;
};

imagem2& imagem2::operator =(const imagem2* im) {
	return *this;
};


// process

// 1 90, 2 -90, 3 180; simplified to do not make distortion and unecessary process.
int imagem2::rotate90(int direction) {
	return 0;
};
// 1 flip horizontal, 2 vertical, 3 horizontal & vertical
int imagem2::flip(int direction) {
	if (m_faces.size() > 0 &&
		m_faces[0] &&
		m_faces[0]->m_mipmaps.size() > 0 &&
		m_faces[0]->m_mipmaps[0])
		for (uint f = 0; f < m_faces.size(); f++) {
			if (m_faces[f]) {
				for (uint m = 0; m < m_faces[f]->m_mipmaps.size(); m++) {
					if (m_faces[f]->m_mipmaps[m]) {
						switch (direction) {
							case 1:
							{
								m_faces[f]->m_mipmaps[m]->flipv();
								return 1;
							}
							case 2:
							{
								m_faces[f]->m_mipmaps[m]->fliph();
								return 1;
							}
							case 3:
							{
								m_faces[f]->m_mipmaps[m]->fliphv();
								return 1;
							}
							default:
								break;
						}
					}
				}
			}
		}
	return 0;
};

int imagem2::unflip() {
	for (int f = 0; f < (int)m_faces.size(); f++)
		if (m_faces[f])
			for (int m = 0; m < (int)m_faces[f]->m_mipmaps.size(); m++)
				if (m_faces[f]->m_mipmaps[m])
					m_faces[f]->m_mipmaps[m]->unflip();
	return 1;
};

imagem2* imagem2::makeFormat(imDF format) {
	return 0;
}; // return a pointer to pixel data

int   imagem2::reFormat(imDF toFormat) {
	for (int f = 0; f < (int)m_faces.size(); f++)
		if (m_faces[f])
			for (int m = 0; m < (int)m_faces[f]->m_mipmaps.size(); m++)
				if (m_faces[f]->m_mipmaps[m])
					m_faces[f]->m_mipmaps[m]->convertToDataFormat(toFormat);

	return 1;
}; // convert this image into another specifc format

int imagem2::rotate(int angle) {
	return 0;
};

void imagem2::addErrorList(const string& File, uint Line, uint Error, const string& Description) {};


















