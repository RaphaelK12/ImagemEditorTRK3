#pragma once

#include "NumDef.h"
#include "enums.h"
#include "structs.h"
#include "definitions.h"
#include "sterr.h"
#include "stconv.h"
#include "img_basis.h"
#include "img_mips.h"
#include "img_face.h"
#include "img_array.h"

//#include "resource.h"


//int a[sizeof img_data];

// suport for arrays of cubemaps mipmamed or arrays of 3d textures mipmaped
	// array of cubemap			m_array[imageNum].m_faces[face].m_mipmaps[miplevel].pixels;
	// array of 3dtexture		m_array[imageNum].m_faces[layer].m_mipmaps[miplevel].pixels;
	// simple texture mipmaped	m_array[0].m_faces[0].m_mipmaps[miplevel].pixels;
	// simple imagem			m_array[0].m_faces[0].m_mipmaps[0].pixels;
	// imagem2.m_array[n]->m_faces[side]->img_mips[level]->pixels;
	// if a simple image = imagem2.m_array[0]->m_faces[0]->img_mips[0]->pixels;
class IMAGEM_API imagem2/*: public img_data*/{
public:
	struct {
		string m_name;				// imagename/filename?
		vector<img_face*>	m_faces; // the textureArray
		vector<sterr*>		m_errorList; // errors
		vector<stconv*>		m_conversionList; // log
	};
	//uint 	 m_DX_dataType;		// DX compatible of data type
	//uint 	 m_DX_flag;			// user defined? or reserved opitions for future use
	//uint 	 m_GL_dataType;		// GL compatible of data type
	uint 	 m_glFlag;			// user defined? or reserved opitions for future use
	enum imGLCompressedFormat	m_glCompression;	// user defined? or reserved opitions for future use
	enum imGLTarget				m_glTarget;
	enum imGLFormat				m_glFormat;
	enum imGLType				m_glType;
	enum imGLIFormat				m_glInternalFormat;

	enum imDF	 m_dataFormat;		// DF_NONE = 0, DF_INDEX, DF_L_8u, DF_RGB_8u, DF_BGR_8u, DF_BGRA_8u, DF_RGBA_8u, la(gray transparent), rgb, rgba, argb, bgr, bgra, abgr,
	 imDT	 m_dataType;		// 0 none, DT_UBYTE, DT_SBYTE, DT_USHORT, DT_SSHORT, DT_UINT, DT_SINT, DT_UFLOAT, DT_SFLOAT, DT_BIT
	ushort	 m_xres;
	ushort   m_yres;
	ushort   m_zres;
	ushort   m_bpp;				// bits per pixel		: 8,16,24,32,48,64,96,128,192,256
	ushort   m_spp;				// size per pixel		: 1, 2,3, 4, 6, 8, 12, 16, 24, 32
	byte	 m_format;			// 0 none, r, ra, rgb, bgr, rgba, argb, bgra, abgr,
	byte	 m_type;			// 0 none, 1d, 2d, 3d, Cubemap, 1dArray, 2dArray, 3dArray, CubemapArray,
	byte 	 m_compression;		// 0 none, 1 tgarle1, 2 tgarle2, 3 bmprle1, 4bmprle2, dxt1,2,3,4,5, astc, etc, bc1,2,3,4,5,6,7; ...
	byte     m_chanels;			// number of chanel 1,2,3 or 4
	byte	 m_mips;			// 0 none, 1 to 16 = level
	byte	 m_isOk;			// 0 empty, 1 ok, 2 load error, 3 save error,
	//ushort   m_palSize;		// size in bytes of pallete, 0 if none, dependent of bpp of pallete
	//byte     m_palType;		// rgb, bgr, rgba, ...
	//byte     m_forceNonIndex;	// force te image to be non indexed
public:
	ulong    m_flags;

	// destructor
	~imagem2();
	void destroy();

	// default constructor, only zeros variables;
	imagem2();

	// constructors from file or filedata
	imagem2(const char *filename);
	imagem2(const string &filename);
	imagem2(FILE *file);

	// constructors from image data
	imagem2(const imagem2 &im);
	imagem2(const imagem2 *im);

	imagem2& operator =(const imagem2 &im);
	imagem2& operator =(const imagem2 *im);

	imagem2(const img_basis &im);
	imagem2(img_basis *const im);


	imagem2(ushort xres, ushort yres, ushort zres, imDF format);
	imagem2(ushort xres, ushort yres, ushort zres, imDF format, uint datasize, byte *data, byte compression);
	imagem2(ushort xres, ushort yres, ushort zres, imDF format, uint narray, uint nfaces);
	
	int loadFile(PCSTR filename);
	img_basis* loadImg(FILE* f, int type);


	void  addErrorList(const string &File, uint Line, uint Error, const string &Description);

	//void addImg(img_basis img, uint nface, uint nmips); // add a new img_basis to specified array[narray].face[nface].mips[nmips]

	// process
	imagem2* makeFormat(imDF format); // return a new imagem
	
	int   reFormat(imDF toFormat); // convert this image into another specific format

	int   rotate90(int direction); // 1 90, 2 -90, 3 180; simplified to do not make distortion and unecessary process.
	
	int   flip(int direction); // 1 flip horizontal, 2 vertical, 3 horizontal & vertical

	int   unflip();

	int   rotate(int angle);

	//void  generateMips(void);

	// loaders
};



//int a1[sizeof img_basis];
//int a2[sizeof img_array];
//int a3[sizeof img_face];
//int a4[sizeof imagem2];
//int a5[sizeof sterr];
//int a6[sizeof stconv];
//int a7[sizeof string];
//int a8[sizeof glTarget];
//int a9[sizeof imDF];


