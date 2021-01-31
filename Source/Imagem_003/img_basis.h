#pragma once
#ifdef IMAGEM_003_EXPORTS
#define IMAGEM_API __declspec(dllexport)
#else
#define IMAGEM_API __declspec(dllimport)
#endif

struct IMAGEM_API img_basis{
	img_basis(void);
	~img_basis(void);

	img_basis(const img_basis& c);
	img_basis(const img_basis* c);

	img_basis& operator = (const img_basis& c);
	img_basis& operator = (const img_basis* c);

	void destroy(void);

	int convertToDataFormat(enum imDF toFormat); // convert this img to another format
	byte* makeDataFormat(enum imDF format, byte* _pixels); // util to make hbitmap and or to fill a pointer with pixels
	img_basis* makeFormat(enum imDF format); // make a new img with specified format

	img_basis* makeHalfRez(void); // make a new img with specified format

	void calculateInfoFromDataFormat(void);
	int isOPenGLCompatible(void);
	int convertoToOPenGLCompatible(void);

	int flipv(void);
	int fliph(void);
	int fliphv(void);
	int unflip(void);

	//rgba_32f sample_linear(double x, double y, int mode);
	//rgba_32f sample_nearest(double x, double y, int mode);

	int rotateSimple(int mode); // 1 90 right, 2 90 left, 3 180 (same as fliph + flipv)

	uint	 dataSize;
	ushort	 xres;
	ushort   yres;
	ushort   zres; // filler
	ushort   palSize; // probable 256 colors * 3 = 768 bytes

	ushort	 spp;
	ushort   bpp;

	enum imDF	   dataFormat;
	enum imDF	   glDataFormat;		// If used in OpenGL, GL need conversion to this format, no real conversion or no loss of data, only chanel order or up bits per chanel.
	enum imDT	   dataType;
		
	enum imGLIFormat glInternalFormat;
	enum imGLFormat glFormat;
	enum imGLType   glType;

	byte	 orientation;
	byte	 compression;
	byte     chanels;
	byte	 hasAlpha;

	byte*    pal;
	byte*    pixels;
	byte*    id;
};

//char a[sizeof img_basis];

