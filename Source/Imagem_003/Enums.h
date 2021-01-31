#pragma once

// enums
 enum  imDF :uint
 {

	DF_NONE = 0,
	DF_INDEX, // not used
	DF_L_8u,
	DF_L_8s,
	DF_L_16u,
	DF_L_16s,
	DF_L_16f,
	DF_L_32u,
	DF_L_32s,
	DF_L_32f,
	DF_L_64f,
	DF_LA_8u,
	DF_LA_8s,
	DF_LA_16u,
	DF_LA_16s,
	DF_LA_16f,
	DF_LA_32u,
	DF_LA_32s,
	DF_LA_32f,
	DF_LA_64f,
	DF_RGB_8u,
	DF_BGR_8u,
	DF_RGB_8s,
	DF_BGR_8s,
	DF_RGB_16u,
	DF_BGR_16u,
	DF_RGB_16s,
	DF_BGR_16s,
	DF_RGB_16f,
	DF_BGR_16f,
	DF_RGB_32u,
	DF_BGR_32u,
	DF_RGB_32s,
	DF_BGR_32s,
	DF_RGB_32f,
	DF_BGR_32f,
	DF_RGB_64f,
	DF_BGR_64f,
	DF_RGBA_8u,
	DF_ARGB_8u,
	DF_BGRA_8u,
	DF_ABGR_8u,
	DF_RGBA_8s,
	DF_ARGB_8s,
	DF_BGRA_8s,
	DF_ABGR_8s,
	DF_RGBA_16u,
	DF_BGRA_16u,
	DF_ARGB_16u,
	DF_ABGR_16u,
	DF_RGBA_16s,
	DF_BGRA_16s,
	DF_ARGB_16s,
	DF_ABGR_16s,
	DF_RGBA_16f,
	DF_BGRA_16f,
	DF_ARGB_16f,
	DF_ABGR_16f,
	DF_RGBA_32u,
	DF_BGRA_32u,
	DF_ARGB_32u,
	DF_ABGR_32u,
	DF_RGBA_32s,
	DF_BGRA_32s,
	DF_ARGB_32s,
	DF_ABGR_32s,
	DF_RGBA_32f,
	DF_BGRA_32f,
	DF_ARGB_32f,
	DF_ABGR_32f,
	DF_RGBA_64f,
	DF_BGRA_64f,
	DF_ARGB_64f,
	DF_ABGR_64f,
	// bitfields
	DF_RGB_332,
	DF_BGR_233,
	DF_RGB_422,
	DF_BGR_224,
	DF_RGB_565,
	DF_BGR_565,
	DF_RGBA_5551,
	DF_ARGB_1555,
	DF_BGRA_5551,
	DF_ABGR_1555,
	DF_LA_4,
	DF_RGBA_4,
	DF_ARGB_4,
	DF_BGRA_4,
	DF_ABGR_4,
	// complex
	DF_DS_24_8,
	DF_RGBE_9995f,
	DF_ERGB_5999f,
	DF_RGBA_10_10_10_2,
	DF_ABGR_2_10_10_10,
	DF_RGB_11_11_10f,
	DF_BGR_10_11_11f
};

enum  imDT :uint {
	DT_NONE = 0,
	DT_UBYTE,	// unsigned char
	DT_SBYTE,	// signed char
	DT_USHORT,	// unsigned short
	DT_SSHORT,	// signed short
	DT_UINT,	// unsigned int
	DT_SINT,	// signed int
	DT_UINT64,	// unsigned long long int
	DT_SINT64,	// signed long long int
	DT_FLOAT,	// unsigned float 0.0/1.0
	DT_DOUBLE,	// unsigned double 0.0/1.0
	//DT_SFLOAT,	// signed float -1.0/1.0
	//DT_SDOUBLE,	// signed double -1.0/1.0
	// the DT_FLOAT, DT_DOUBLE, DT_SFLOAT, DT_SDOUBLE, is not necessary in range from -1 to 1, or 0 to 1, it is only to info.
	//ex: is possible the DT_FLOAT to contain numbers from -1000 to 1000 or whatever other range. if you need the data to be clamped
	// use the function clamp(min, max) to clamp in a specifc value or saturate() to clamp in 0 to 1;
	// exotic / complex
	DT_BITFIELD	// structures( special case) ex: DF_RGB_332 rgba_5551 rgb_565 rgba_4 rg_24_8 rgba_10_10_10_2
};

enum  imType :uint {
	TNONE = 0,
	T2D,
	T3D,
	TARRAY,
	TCUBE
};

enum  imError :uint {
	IMG_ERRO_NONE = 2,
	IMG_ERRO_FILE_OPEN,
	IMG_ERRO_FILE_SMALLER,
	IMG_ERRO_FILE_SEMI_LOADED,
	IMG_ERRO_UNRECOGNIZED_FORMAT,
	IMG_ERRO_UNSUPORTED_FORMAT,
	IMG_ERRO_UNSUPORTED_FORMAT2,
	IMG_ERRO_ALLOC,
	IMG_ERRO_UNINITIALIZED_IMAGEM,
	IMG_ERRO_INCONSISTENT
};

enum  imTGAtype  {
	TGA_RAW_PAL=1,
	TGA_RAW_RGB,
	TGA_RAW_GREY,
	TGA_RLE_PAL=9,
	TGA_RLE_RGB,
	TGA_RLE_GREY
};

enum  imGLIFormat :uint {
	// Base Internal Format	RGBA,  Depthand Stencil Values	Internal Components
	GL_IFORMAT_NONE					= 0,
	GL_IFORMAT_DEPTH_COMPONENT		= 0x1902,		// Depth								D
	GL_IFORMAT_D24_S8				= 0x84F9,		// Depth, Stencil						D, S
	GL_IFORMAT_RED					= 0x1903,		// Red									R
	GL_IFORMAT_RG					= 0x8227,		// Red, Green							R, G
	GL_IFORMAT_RGB					= 0x1907,		// Red, Green, Blue						R, G, B
	GL_IFORMAT_RGBA					= 0x1908		// Red, Green, Blue, Alpha				R, G, B, A
};

enum  imGLFormat :uint {
	// Base Internal Format	RGBA,  Depthand Stencil Values	Internal Components
	GL_FORMAT_NONE						= 0,
	GL_FORMAT_RED						= 0x1903,		// Red									R
	GL_FORMAT_RG						= 0x8227,		// Red, Green							R, G
	GL_FORMAT_RGB						= 0x1907,		// Red, Green, Blue						R, G, B
	GL_FORMAT_RGBA						= 0x1908,		// Red, Green, Blue, Alpha				R, G, B, A
	GL_FORMAT_BGR						= 0x80E0,
	GL_FORMAT_BGRA						= 0x80E1,
	GL_FORMAT_RED_INTEGER				= 0x8D94,
	GL_FORMAT_GREEN_INTEGER			= 0x8D95,
	GL_FORMAT_BLUE_INTEGER				= 0x8D96,
	GL_FORMAT_ALPHA_INTEGER			= 0x8D97,
	GL_FORMAT_RGB_INTEGER				= 0x8D98,
	GL_FORMAT_RGBA_INTEGER				= 0x8D99,
	GL_FORMAT_BGR_INTEGER				= 0x8D9A,
	GL_FORMAT_BGRA_INTEGER				= 0x8D9B,
	GL_FORMAT_RG_INTEGER				= 0x8228,
	GL_FORMAT_STENCIL_INDEX			= 0x1901,
	GL_FORMAT_DEPTH_COMPONENT			= 0x1902,		// Depth								D
	GL_FORMAT_DS						= 0x84F9		// Depth, Stencil						D, S
};

enum  imGLType :uint {
	//Specifies the data type of the pixel data. The following symbolic values are accepted: 
	GL_NONE								= 0,
	GL_BYTE								= 0x1400,
	GL_UNSIGNED_BYTE					= 0x1401,
	GL_SHORT							= 0x1402,
	GL_UNSIGNED_SHORT					= 0x1403,
	GL_INT								= 0x1404,
	GL_UNSIGNED_INT						= 0x1405,
	GL_FLOAT							= 0x1406,
	GL_HALF_FLOAT						= 0x140B,
	GL_DOUBLE							= 0x140A,
	GL_UNSIGNED_INT_24_8				= 0x84FA,
	GL_FLOAT_32_UNSIGNED_INT_24_8_REV	= 0x8DAD,
	GL_UNSIGNED_BYTE_3_3_2				= 0x8032,
	GL_UNSIGNED_BYTE_2_3_3_REV			= 0x8362,
	GL_UNSIGNED_SHORT_5_6_5				= 0x8363,
	GL_UNSIGNED_SHORT_5_6_5_REV			= 0x8364,
	GL_UNSIGNED_SHORT_5_5_5_1			= 0x8034,
	GL_UNSIGNED_SHORT_1_5_5_5_REV		= 0x8366,
	GL_UNSIGNED_SHORT_4_4_4_4			= 0x8033,
	GL_UNSIGNED_SHORT_4_4_4_4_REV		= 0x8365,
	GL_UNSIGNED_INT_8_8_8_8				= 0x8035,
	GL_UNSIGNED_INT_8_8_8_8_REV			= 0x8367,
	GL_UNSIGNED_INT_10_10_10_2			= 0x8036,
	GL_UNSIGNED_INT_2_10_10_10_REV		= 0x8368,
	GL_INT_2_10_10_10_REV				= 0x8D9F,
	GL_UNSIGNED_INT_5_9_9_9_REV			= 0x8C3E,
	GL_UNSIGNED_INT_10F_11F_11F_REV		= 0x8C3B,
	GL_422_EXT							= 0x80CC,
	GL_422_REV_EXT						= 0x80CD,
	GL_422_AVERAGE_EXT					= 0x80CE,
	GL_422_REV_AVERAGE_EXT				= 0x80CF,
};

enum  imGLTarget :uint {
	GL_TEXTURE_NONE								= 0,
	GL_TEXTURE_2D						= 0x0DE1,
	GL_PROXY_TEXTURE_2D					= 0x8064,
	GL_TEXTURE_1D_ARRAY					= 0x8C18,
	GL_PROXY_TEXTURE_1D_ARRAY			= 0x8C19,
	GL_TEXTURE_RECTANGLE				= 0x84F5,
	GL_PROXY_TEXTURE_RECTANGLE			= 0x84F7,
	GL_TEXTURE_CUBE_MAP_POSITIVE_X		= 0x8515,
	GL_TEXTURE_CUBE_MAP_NEGATIVE_X		= 0x8516,
	GL_TEXTURE_CUBE_MAP_POSITIVE_Y		= 0x8517,
	GL_TEXTURE_CUBE_MAP_NEGATIVE_Y		= 0x8518,
	GL_TEXTURE_CUBE_MAP_POSITIVE_Z		= 0x8519,
	GL_TEXTURE_CUBE_MAP_NEGATIVE_Z		= 0x851A,
	GL_PROXY_TEXTURE_CUBE_MAP			= 0x851B
	//GL_TEXTURE_1D                     = 0x0DE0,
	//GL_PROXY_TEXTURE_1D               = 0x8063,
	//GL_TEXTURE_2D_ARRAY               = 0x8C1A,
	//GL_PROXY_TEXTURE_2D_ARRAY         = 0x8C1B,
	//GL_TEXTURE_BINDING_1D_ARRAY       = 0x8C1C,
	//GL_TEXTURE_BINDING_2D_ARRAY       = 0x8C1D,
	//GL_TEXTURE_BINDING_RECTANGLE      = 0x84F6,
};

enum  imGLCompressedFormat :uint {
	//Compressed Internal Format	Base Internal Format	Type
	GL_COMPRESSED_NONE = 0,
	GL_COMPRESSED_RGB = 0x84ED,	//	GL_RGB	Generic
	GL_COMPRESSED_RGBA = 0x84EE,	//	GL_RGBA	Generic
	GL_COMPRESSED_SRGB = 0x8C48,	//	GL_RGB	Generic
	GL_COMPRESSED_SRGB_ALPHA = 0x8C49,	//	GL_RGBA	Generic
	GL_COMPRESSED_RED = 0x8225,	//	GL_RED	Generic
	GL_COMPRESSED_RG = 0x8226,	//	GL_RG	Generic
	GL_COMPRESSED_RED_RGTC1 = 0x8DBB,	//	GL_RED	Specific
	GL_COMPRESSED_SIGNED_RED_RGTC1 = 0x8DBC,	//	GL_RED	Specific
	GL_COMPRESSED_RG_RGTC2 = 0x8DBD,	//	GL_RG	Specific
	GL_COMPRESSED_SIGNED_RG_RGTC2 = 0x8DBE,	//	GL_RG	Specific
	GL_COMPRESSED_RGBA_BPTC_UNORM = 0x8E8C,	//	GL_RGBA	Specific
	GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM = 0x8E8D,	//	GL_RGBA	Specific
	GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT = 0x8E8E,	//	GL_RGB	Specific
	GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT = 0x8E8F, 	//	GL_RGB	Specific

	GL_COMPRESSED_RGB_S3TC_DXT1_EXT = 0x83F0,
	GL_COMPRESSED_RGBA_S3TC_DXT1_EXT = 0x83F1,
	GL_COMPRESSED_RGBA_S3TC_DXT3_EXT = 0x83F2,
	GL_COMPRESSED_RGBA_S3TC_DXT5_EXT = 0x83F3,
	//GL_COMPRESSED_SLUMINANCE_EXT			= 0x8C4A,
	//GL_COMPRESSED_SLUMINANCE_ALPHA_EXT	= 0x8C4B,
	GL_COMPRESSED_SRGB_S3TC_DXT1_EXT = 0x8C4C,
	GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT = 0x8C4D,
	GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT = 0x8C4E,
	GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT = 0x8C4F

	//GL_COMPRESSED_ALPHA								= 0x84E9,
	//GL_COMPRESSED_LUMINANCE							= 0x84EA,
	//GL_COMPRESSED_LUMINANCE_ALPHA						= 0x84EB,
	//GL_COMPRESSED_INTENSITY							= 0x84EC,
	//GL_COMPRESSED_SLUMINANCE							= 0x8C4A,
	//GL_COMPRESSED_SLUMINANCE_ALPHA					= 0x8C4B,
	//GL_COMPRESSED_RGB8_ETC2							= 0x9274,
	//GL_COMPRESSED_SRGB8_ETC2							= 0x9275,
	//GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2		= 0x9276,
	//GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2		= 0x9277,
	//GL_COMPRESSED_RGBA8_ETC2_EAC						= 0x9278,
	//GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC				= 0x9279,
	//GL_COMPRESSED_R11_EAC								= 0x9270,
	//GL_COMPRESSED_SIGNED_R11_EAC						= 0x9271,
	//GL_COMPRESSED_RG11_EAC							= 0x9272,
	//GL_COMPRESSED_SIGNED_RG11_EAC						= 0x9273
};

/*
void glTexImage2D(GLenum target,	// GL_TEXTURE_2D, GL_PROXY_TEXTURE_2D, GL_TEXTURE_1D_ARRAY, GL_PROXY_TEXTURE_1D_ARRAY, GL_TEXTURE_RECTANGLE, GL_PROXY_TEXTURE_RECTANGLE, GL_TEXTURE_CUBE_MAP_POSITIVE_X, GL_TEXTURE_CUBE_MAP_NEGATIVE_X, GL_TEXTURE_CUBE_MAP_POSITIVE_Y, GL_TEXTURE_CUBE_MAP_NEGATIVE_Y, GL_TEXTURE_CUBE_MAP_POSITIVE_Z, GL_TEXTURE_CUBE_MAP_NEGATIVE_Z, or GL_PROXY_TEXTURE_CUBE_MAP.
				  GLint level,		// Specifies the level-of-detail number. Level 0 is the base image level. Level n is the nth mipmap reduction image. If target is GL_TEXTURE_RECTANGLE or GL_PROXY_TEXTURE_RECTANGLE, level must be 0.
				  GLint internalformat,	// 
				  GLsizei width,
				  GLsizei height,
				  GLint border,
				  GLenum format,
				  GLenum type,
				  const void* data);
*/





enum  imGLSizedInternalFormat :uint {
//	GL_RGBA16_SNORM						= 0x8F9B,
//	GL_RGB16							= 0x8054,
//	GL_SRGB								= 0x8C40,
//	GL_SRGB_ALPHA						= 0x8C42,
	GL_R8								= 0x8229,	//	GL_RED	8
	GL_R16								= 0x822A,	//	GL_RED	16
	GL_RG8								= 0x822B,	//	GL_RG	8		8
	GL_RG16								= 0x822C,	//	GL_RG	16		16
	GL_R16F								= 0x822D,	//	GL_RED	f16
	GL_R32F								= 0x822E,	//	GL_RED	f32
	GL_RG16F							= 0x822F,	//	GL_RG	f16		f16
	GL_RG32F							= 0x8230,	//	GL_RG	f32		f32
	GL_R8I								= 0x8231,	//	GL_RED	i8
	GL_R8UI								= 0x8232,	//	GL_RED	ui8
	GL_R16I								= 0x8233,	//	GL_RED	i16
	GL_R16UI							= 0x8234,	//	GL_RED	ui16
	GL_R32I								= 0x8235,	//	GL_RED	i32
	GL_R32UI							= 0x8236,	//	GL_RED	ui32
	GL_RG8I								= 0x8237,	//	GL_RG	i8		i8
	GL_RG8UI							= 0x8238,	//	GL_RG	ui8		ui8
	GL_RG16I							= 0x8239,	//	GL_RG	i16		i16
	GL_RG16UI							= 0x823A,	//	GL_RG	ui16	ui16
	GL_RG32I							= 0x823B,	//	GL_RG	i32		i32
	GL_RG32UI							= 0x823C,	//	GL_RG	ui32	ui32
	GL_R8_SNORM							= 0x8F94,	//	GL_RED	s8
	GL_RG8_SNORM						= 0x8F95,	//	GL_RG	s8		s8
	GL_RGB8_SNORM						= 0x8F96,	//	GL_RGB	s8		s8		s8
	GL_RGBA8_SNORM						= 0x8F97,	//	GL_RGBA	s8		s8		s8		s8
	GL_R16_SNORM						= 0x8F98,	//	GL_RED	s16
	GL_RG16_SNORM						= 0x8F99,	//	GL_RG	s16		s16
	GL_RGB16_SNORM						= 0x8F9A,	//	GL_RGB	16		16		16
	GL_R3_G3_B2							= 0x2A10,	//	GL_RGB	3		3		2
	GL_RGB4								= 0x804F,	//	GL_RGB	4		4		4
	GL_RGB5								= 0x8050,	//	GL_RGB	5		5		5
	GL_RGB8								= 0x8051,	//	GL_RGB	8		8		8
	GL_RGB10							= 0x8052,	//	GL_RGB	10		10		10
	GL_RGB12							= 0x8053,	//	GL_RGB	12		12		12
	GL_RGBA2							= 0x8055,	//	GL_RGB	2		2		2		2
	GL_RGBA4							= 0x8056,	//	GL_RGB	4		4		4		4
	GL_RGB5_A1							= 0x8057,	//	GL_RGBA	5		5		5		1
	GL_RGBA8							= 0x8058,	//	GL_RGBA	8		8		8		8
	GL_RGB10_A2							= 0x8059,	//	GL_RGBA	10		10		10		2
	GL_RGBA12							= 0x805A,	//	GL_RGBA	12		12		12		12
	GL_RGBA16							= 0x805B,	//	GL_RGBA	16		16		16		16
	GL_RGB10_A2UI						= 0x906F,	//	GL_RGBA	ui10	ui10	ui10	ui2
	GL_SRGB8							= 0x8C41,	//	GL_RGB	8		8		8
	GL_SRGB8_ALPHA8						= 0x8C43,	//	GL_RGBA	8		8		8		8
	GL_RGBA32F							= 0x8814,	//	GL_RGBA	f32		f32		f32		f32
	GL_RGB32F							= 0x8815,	//	GL_RGB	f32		f32		f32
	GL_RGBA16F							= 0x881A,	//	GL_RGBA	f16		f16		f16		f16
	GL_RGB16F							= 0x881B,	//	GL_RGB	f16		f16		f16
	GL_R11F_G11F_B10F					= 0x8C3A,	//	GL_RGB	f11		f11		f10
	GL_RGB9_E5							= 0x8C3D,	//	GL_RGB	9		9		9	 	5
	GL_RGBA32UI							= 0x8D70,	//	GL_RGBA	ui32	ui32	ui32	ui32
	GL_RGB32UI							= 0x8D71,	//	GL_RGB	ui32	ui32	ui32
	GL_RGBA16UI							= 0x8D76,	//	GL_RGBA	ui16	ui16	ui16	ui16
	GL_RGB16UI							= 0x8D77,	//	GL_RGB	ui16	ui16	ui16
	GL_RGBA8UI							= 0x8D7C,	//	GL_RGBA	ui8		ui8		ui8		ui8
	GL_RGB8UI							= 0x8D7D,	//	GL_RGB	ui8		ui8		ui8
	GL_RGBA32I							= 0x8D82,	//	GL_RGBA	i32		i32		i32		i32
	GL_RGB32I							= 0x8D83,	//	GL_RGB	i32		i32		i32
	GL_RGBA16I							= 0x8D88,	//	GL_RGBA	i16		i16		i16		i16
	GL_RGB16I							= 0x8D89,	//	GL_RGB	i16		i16		i16
	GL_RGBA8I							= 0x8D8E,	//	GL_RGBA	i8		i8		i8		i8
	GL_RGB8I							= 0x8D8F,	//	GL_RGB	i8		i8		i8

	//Sized Internal Format	Base Internal Format	Depth	Stencil
	GL_DEPTH_COMPONENT16				= 0x81A5,	// GL_DEPTH_COMPONENT	 16
	GL_DEPTH_COMPONENT24				= 0x81A6,	// GL_DEPTH_COMPONENT	 24
	GL_DEPTH_COMPONENT32				= 0x81A7,	// GL_DEPTH_COMPONENT	 32
	GL_DEPTH24_STENCIL8					= 0x88F0,	// GL_DEPTH_STENCIL		 24 	8
	GL_DEPTH_COMPONENT32F				= 0x8CAC,	// GL_DEPTH_COMPONENT	 f32
	GL_DEPTH32F_STENCIL8				= 0x8CAD,	// GL_DEPTH_STENCIL		 f32	8
	GL_STENCIL_INDEX8					= 0x8D48	// GL_STENCIL_INDEX		 8
	//GL_UNSIGNED_INT_24_8        		= 0x84FA,
	//GL_STENCIL_INDEX1           		= 0x8D46,
	//GL_STENCIL_INDEX4           		= 0x8D47,
	//GL_STENCIL_INDEX16          		= 0x8D49,

};


// DataType 
//#define GL_BYTE                           0x1400
//#define GL_UNSIGNED_BYTE                  0x1401
//#define GL_SHORT                          0x1402
//#define GL_UNSIGNED_SHORT                 0x1403
//#define GL_INT                            0x1404
//#define GL_UNSIGNED_INT                   0x1405
//#define GL_FLOAT                          0x1406
//#define GL_2_BYTES                        0x1407
//#define GL_3_BYTES                        0x1408
//#define GL_4_BYTES                        0x1409
//#define GL_DOUBLE                         0x140A
//
//
//
//enum glInternalFormat{
//	GL_NONE = 0,	/// Returned by <see cref="gl.GetInternalformativ">gl.GetInternalformat*</see>, if the specified <b>internalformat</b> is not supported.
//	//#region Base internal formats
//	GL_DEPTH_COMPONENT = 0x1902,	/// Base internal format. Depth buffer.
//	GL_DEPTH_STENCIL = 0x84F9,	/// Base internal format. Combined depth and stencil buffer.
//	GL_STENCIL_INDEX = 0x1901,	/// Base internal format. Stencil buffer.
//	GL_RED = 0x1903,	/// Base internal format. 1 color channel buffer (e.g. Alpha).
//	GL_RG = 0x8227,	/// Base internal format. 2 color channels buffer (e.g. Gray+Alpha).
//	GL_RGB = 0x1907,	/// Base internal format. 3 color channels buffer.
//	GL_RGBA = 0x1908,	/// Base internal format. 4 color channels buffer.
//	GL_SRGB = 0x8C40,	/// Base internal format. 3 color channels buffer. (sRGB)
//	GL_SRGB_ALPHA = 0x8C42,	/// Base internal format. 4 color channels buffer. (sRGB)
//	//#region Sized internal formats
//	GL_DEPTH_COMPONENT16 = 0x81A5,	/// Sized internal format. Depth buffer. (16-bit)
//	GL_DEPTH_COMPONENT24 = 0x81A6,	/// Sized internal format. Depth buffer. (24-bit)
//	GL_DEPTH_COMPONENT32 = 0x81A7,	/// Sized internal format. Depth buffer. (32-bit)
//	GL_DEPTH_COMPONENT32F = 0x8CAC,	/// Sized internal format. Depth buffer. (32-bit; float)
//	GL_DEPTH24_STENCIL8 = 0x88F0,	/// Sized internal format. Combined depth and stencil buffer. (24-bit + 8-bit)
//	GL_DEPTH32F_STENCIL8 = 0x8CAD,	/// Sized internal format. Combined depth and stencil buffer. (32-bit; float + 8-bit)
//	GL_STENCIL_INDEX1 = 0x8D46,	/// Sized internal format. Stencil buffer. (1-bit)
//	GL_STENCIL_INDEX4 = 0x8D47,	/// Sized internal format. Stencil buffer. (4-bit)
//	GL_STENCIL_INDEX8 = 0x8D48,	/// Sized internal format. Stencil buffer. (8-bit)
//	GL_STENCIL_INDEX16 = 0x8D49,	/// Sized internal format. Stencil buffer. (16-bit)
//	GL_R8 = 0x8229,	/// Sized internal format. 1 color channel buffer. (8-bit)
//	GL_R8_SNORM = 0x8F94,	/// Sized internal format. 1 color channel buffer. (8-bit; signed normalized)
//	GL_R16 = 0x822A,	/// Sized internal format. 1 color channel buffer. (16-bit)
//	GL_R16_SNORM = 0x8F98,	/// Sized internal format. 1 color channel buffer. (16-bit; signed normalized)
//	GL_RG8 = 0x822B,	/// Sized internal format. 2 color channels buffer. (2 * 8-bit)
//	GL_RG8_SNORM = 0x8F95,	/// Sized internal format. 2 color channels buffer. (2 * 8-bit; signed normalized)
//	GL_RG16 = 0x822C,	/// Sized internal format. 2 color channels buffer. (2 * 16-bit)
//	GL_RG16_SNORM = 0x8F99,	/// Sized internal format. 2 color channels buffer. (2 * 16-bit; signed normalized)
//	GL_R3_G3_B2 = 0x2A10,	/// Sized internal format. 3 color channels buffer. (3-bit + 3-bit + 2-bit)
//	GL_RGB4 = 0x804F,	/// Sized internal format. 3 color channels buffer. (3 * 4-bit)
//	GL_RGB5 = 0x8050,	/// Sized internal format. 3 color channels buffer. (3 * 5-bit)
//	GL_RGB565 = 0x8D62,	/// Sized internal format. 3 color channels buffer. (5-bit + 6-bit + 5-bit)
//	GL_RGB8 = 0x8051,	/// Sized internal format. 3 color channels buffer. (3 * 8-bit)
//	GL_RGB8_SNORM = 0x8F96,	/// Sized internal format. 3 color channels buffer. (3 * 8-bit; signed normalized)
//	GL_RGB10 = 0x8052,	/// Sized internal format. 3 color channels buffer. (3 * 10-bit)
//	GL_RGB12 = 0x8053,	/// Sized internal format. 3 color channels buffer. (3 * 12-bit)
//	GL_RGB16 = 0x8054,	/// Sized internal format. 3 color channels buffer. (3 * 16-bit)
//	GL_RGB16_SNORM = 0x8F9A,	/// Sized internal format. 3 color channels buffer. (3 * 16-bit; signed normalized)
//	GL_RGBA2 = 0x8055,	/// Sized internal format. 4 color channels buffer. (4 * 2-bit)
//	GL_RGBA4 = 0x8056,	/// Sized internal format. 4 color channels buffer. (4 * 4-bit)
//	GL_RGB5_A1 = 0x8057,	/// Sized internal format. 4 color channels buffer. (3 * 4-bit + 1-bit)
//	GL_RGBA8 = 0x8058,	/// Sized internal format. 4 color channels buffer. (4 * 8-bit)
//	GL_RGBA8_SNORM = 0x8F97,	/// Sized internal format. 4 color channels buffer. (4 * 8-bit; signed normalized)
//	GL_RGB10_A2 = 0x8059,	/// Sized internal format. 4 color channels buffer. (3 * 10-bit + 2-bit)
//	GL_RGB10_A2UI = 0x906F,	/// Sized internal format. 4 color channels buffer. (3 * 10-bit + 2-bit; unsigned integer)
//	GL_RGBA12 = 0x805A,	/// Sized internal format. 4 color channels buffer. (4 * 12-bit)
//	GL_RGBA16 = 0x805B,	/// Sized internal format. 4 color channels buffer. (4 * 16-bit)
//	GL_RGBA16_SNORM = 0x8F9B,	/// Sized internal format. 4 color channels buffer. (4 * 16-bit; signed normalized)
//	GL_SRGB8 = 0x8C41,	/// Sized internal format. 3 color channels buffer. (3 * 8-bit) (sRGB)
//	GL_SRGB8_ALPHA8 = 0x8C43,	/// Sized internal format. 4 color channels buffer. (4 * 8-bit) (sRGB)
//	GL_R16F = 0x822D,	/// Sized internal format. 1 color channel buffer. (16-bit; float)
//	GL_RG16F = 0x822F,	/// Sized internal format. 2 color channels buffer. (2 * 16-bit; float)
//	GL_RGB16F = 0x881B,	/// Sized internal format. 3 color channels buffer. (3 * 16-bit; float)
//	GL_RGBA16F = 0x881A,	/// Sized internal format. 4 color channels buffer. (4 * 16-bit; float)
//	GL_R32F = 0x822E,	/// Sized internal format. 1 color channel buffer. (32-bit; float)
//	GL_RG32F = 0x8230,	/// Sized internal format. 2 color channels buffer. (2 * 32-bit; float)
//	GL_RGB32F = 0x8815,	/// Sized internal format. 3 color channels buffer. (3 * 32-bit; float)
//	GL_RGBA32F = 0x8814,	/// Sized internal format. 4 color channels buffer. (4 * 32-bit; float)
//	GL_R11F_G11F_B10F = 0x8C3A,	/// Sized internal format. 3 color channels buffer. (11-bit + 11-bit + 10-bit; float)
//	GL_RGB9_E5 = 0x8C3D,	/// Sized internal format. 3 color channels buffer. (3 * 9-bit + 5-bit shared exponent)
//	GL_R8I = 0x8231,	/// Sized internal format. 1 color channel buffer. (8-bit; integer)
//	GL_R8UI = 0x8232,	/// Sized internal format. 1 color channel buffer. (8-bit; unsigned integer)
//	GL_R16I = 0x8233,	/// Sized internal format. 1 color channel buffer. (16-bit; integer)
//	GL_R16UI = 0x8234,	/// Sized internal format. 1 color channel buffer. (16-bit; unsigned integer)
//	GL_R32I = 0x8235,	/// Sized internal format. 1 color channel buffer. (32-bit; integer)	
//	GL_R32UI = 0x8236,	/// Sized internal format. 1 color channel buffer. (32-bit; unsigned integer)
//	GL_RG8I = 0x8237,	/// Sized internal format. 2 color channels buffer. (2 * 8-bit; integer)
//	GL_RG8UI = 0x8238,	/// Sized internal format. 2 color channels buffer. (2 * 8-bit; unsigned integer)
//	GL_RG16I = 0x8239,	/// Sized internal format. 2 color channels buffer. (2 * 16-bit; integer)
//	GL_RG16UI = 0x823A,	/// Sized internal format. 2 color channels buffer. (2 * 16-bit; unsigned integer)
//	GL_RG32I = 0x823B,	/// Sized internal format. 2 color channels buffer. (2 * 32-bit; integer)
//	GL_RG32UI = 0x823C,	/// Sized internal format. 2 color channels buffer. (2 * 32-bit; unsigned integer)
//	GL_RGB8I = 0x8D8F,	/// Sized internal format. 3 color channels buffer. (3 * 8-bit; integer)
//	GL_RGB8UI = 0x8D7D,	/// Sized internal format. 3 color channels buffer. (3 * 8-bit; unsigned integer)
//	GL_RGB16I = 0x8D89,	/// Sized internal format. 3 color channels buffer. (3 * 16-bit; integer)
//	GL_RGB16UI = 0x8D77,	/// Sized internal format. 3 color channels buffer. (3 * 16-bit; unsigned integer)
//	GL_RGB32I = 0x8D83,	/// Sized internal format. 3 color channels buffer. (3 * 32-bit; integer)
//	GL_RGB32UI = 0x8D71,	/// Sized internal format. 3 color channels buffer. (3 * 32-bit; unsigned integer)
//	GL_RGBA8I = 0x8D8E,	/// Sized internal format. 4 color channels buffer. (4 * 8-bit; integer)
//	GL_RGBA8UI = 0x8D7C,	/// Sized internal format. 4 color channels buffer. (4 * 8-bit; unsigned integer)
//	GL_RGBA16I = 0x8D88,	/// Sized internal format. 4 color channels buffer. (4 * 16-bit; integer)
//	GL_RGBA16UI = 0x8D76,	/// Sized internal format. 4 color channels buffer. (4 * 16-bit; unsigned integer)
//	GL_RGBA32I = 0x8D82,	/// Sized internal format. 4 color channels buffer. (4 * 32-bit; integer)
//	GL_RGBA32UI = 0x8D70,	/// Sized internal format. 4 color channels buffer. (4 * 32-bit; unsigned integer)
//	//#region Generic compressed internal formats
//	GL_COMPRESSED_RED = 0x8225,	/// Generic compressed internal format. 1 color channel buffer (e.g. Alpha).
//	GL_COMPRESSED_RG = 0x8226,	/// Generic compressed internal format. 2 color channels buffer (e.g. Gray+Alpha).
//	GL_COMPRESSED_RGB = 0x84ED,	/// Generic compressed internal format. 3 color channels buffer.
//	GL_COMPRESSED_RGBA = 0x84EE,	/// Generic compressed internal format. 4 color channels buffer.
//	GL_COMPRESSED_SRGB = 0x8C48,	/// Generic compressed internal format. 3 color channels buffer. (sRGB)
//	GL_COMPRESSED_SRGB_ALPHA = 0x8C49,	/// Generic compressed internal format. 4 color channels buffer. (sRGB)
//	//#region Specific compressed internal formats
//	GL_COMPRESSED_RED_RGTC1 = 0x8DBB,	/// Specific compressed internal format. 1 color channel buffer.
//	GL_COMPRESSED_SIGNED_RED_RGTC1 = 0x8DBC,	/// Specific compressed internal format. 1 color channel buffer. (signed normalized)
//	GL_COMPRESSED_RG_RGTC2 = 0x8DBD,	/// Specific compressed internal format. 2 color channels buffer.
//	GL_COMPRESSED_SIGNED_RG_RGTC2 = 0x8DBE,	/// Specific compressed internal format. 2 color channels buffer. (signed normalized)
//	GL_COMPRESSED_RGBA_BPTC_UNORM = 0x8E8C,	/// Specific compressed internal format. 3 color channels buffer.
//	GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM = 0x8E8D,	/// Specific compressed internal format. 3 color channels buffer. (signed normalized)
//	GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT = 0x8E8E,	/// Specific compressed internal format. 3 color channels buffer. (signed float)
//	GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT = 0x8E8F,	/// Specific compressed internal format. 3 color channels buffer. (unsigned float)
//	GL_COMPRESSED_RGB8_ETC2 = 0x9274,	/// Specific compressed internal format. 3 color channels buffer.
//	GL_COMPRESSED_SRGB8_ETC2 = 0x9275,	/// Specific compressed internal format. 3 color channels buffer. (sRGB)
//	GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9276,	/// Specific compressed internal format. 4 color channels buffer (1-bit Alpha).
//	GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9277,	/// Specific compressed internal format. 4 color channels buffer (1-bit Alpha). (sRGB)
//	GL_COMPRESSED_RGBA8_ETC2_EAC = 0x9278,	/// Specific compressed internal format. 4 color channels buffer.
//	GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC = 0x9279,	/// Specific compressed internal format. 4 color channels buffer. (sRGB)
//	GL_COMPRESSED_R11_EAC = 0x9270,	/// Specific compressed internal format. 1 color channel buffer.
//	GL_COMPRESSED_SIGNED_R11_EAC = 0x9271,	/// Specific compressed internal format. 1 color channel buffer. (signed normalized)
//	GL_COMPRESSED_RG11_EAC = 0x9272,	/// Specific compressed internal format. 2 color channels buffer.
//	GL_COMPRESSED_SIGNED_RG11_EAC = 0x9273,	/// Specific compressed internal format. 2 color channels buffer. (signed normalized)
//};
//
//enum glPixelDataType{
//	GL_NONE = 0,	/// -
//	GL_UNSIGNED_BYTE = 0x1401,	/// 8-bit unsigned integer.
//	GL_BYTE = 0x1400,	/// 8-bit signed integer.
//	GL_UNSIGNED_SHORT = 0x1403,	/// 16-bit unsigned integer.
//	GL_SHORT = 0x1402,	/// 16-bit signed integer.
//	GL_UNSIGNED_INT = 0x1405,	/// 32-bit unsigned integer.
//	GL_INT = 0x1404,	/// 32-bit signed integer.
//	///// <summary>
//	///// 64-bit unsigned integer.
//	///// </summary>
//	//[Obsolete("OpenGL extension: GL_ARB_gpu_shader_int64")]
//	//UNSIGNED_INT64_ARB = 0x140F,
//
//	///// <summary>
//	///// 64-bit signed integer.
//	///// </summary>
//	//[Obsolete("OpenGL extension: GL_ARB_gpu_shader_int64")]
//	//INT64_ARB = 0x140E,
//	GL_HALF_FLOAT = 0x140B,	/// 16-bit signed float.
//	GL_FLOAT = 0x1406,	/// 32-bit signed float.
//	GL_UNSIGNED_BYTE_3_3_2 = 0x8032,	/// 3-bit + 3-bit + 2-bit as 8-bit unsigned integer.
//	GL_UNSIGNED_BYTE_2_3_3_REV = 0x8362,	/// 3-bit + 3-bit + 2-bit as 8-bit unsigned integer in reversed order.
//	GL_UNSIGNED_SHORT_5_6_5 = 0x8363,	/// 5-bit + 6-bit + 5-bit as 16-bit unsigned integer.
//	GL_UNSIGNED_SHORT_5_6_5_REV = 0x8364,	/// 5-bit + 6-bit + 5-bit as 16-bit unsigned integer in reversed order.
//	GL_UNSIGNED_SHORT_4_4_4_4 = 0x8033,	/// 4 * 4-bit as 16-bit unsigned integer.
//	GL_UNSIGNED_SHORT_4_4_4_4_REV = 0x8365,	/// 4 * 4-bit as 16-bit unsigned integer in reversed order.
//	GL_UNSIGNED_SHORT_5_5_5_1 = 0x8034,	/// 3 * 5-bit + 1-bit as 16-bit unsigned integer.
//	GL_UNSIGNED_SHORT_1_5_5_5_REV = 0x8366,	/// 3 * 5-bit + 1-bit as 16-bit unsigned integer in reversed order.
//	GL_UNSIGNED_INT_8_8_8_8 = 0x8035,	/// 4 * 8-bit as 32-bit unsigned integer.
//	GL_UNSIGNED_INT_8_8_8_8_REV = 0x8367,	/// 4 * 8-bit as 32-bit unsigned integer in reversed order.
//	GL_UNSIGNED_INT_10_10_10_2 = 0x8036,	/// 3 * 10-bit + 2-bit as 32-bit unsigned integer.
//	GL_UNSIGNED_INT_2_10_10_10_REV = 0x8368,	/// 3 * 10-bit + 2-bit as 32-bit unsigned integer in reversed order.
//	GL_UNSIGNED_INT_24_8 = 0x84FA,	/// 24-bit + 8-bit as 32-bit unsigned integer. (Combined depth and stencil value)
//	GL_UNSIGNED_INT_10F_11F_11F_REV = 0x8C3B,	/// 11-bit + 11-bit + 10-bit floats as 32-bit unsigned integer in reversed order.
//	GL_UNSIGNED_INT_5_9_9_9_REV = 0x8C3E,	/// 3 * 9-bit + 5-bit as 32-bit unsigned integer in reversed order.
//	GL_FLOAT_32_UNSIGNED_INT_24_8_REV = 0x8DAD,	/// 32-bit float + 24-bit + 8-bit as 64-bit. (Combined depth (32F) and stencil (8) value)
//};
//
//enum glTextureTarget{
//	GL_NONE = 0,	/// Nothing bound.
//	GL_TEXTURE_1D = 0x0DE0,	/// 1D texture object.
//	GL_TEXTURE_1D_ARRAY = 0x8C18,	/// 1D texture array object.
//	GL_TEXTURE_2D = 0x0DE1,	/// 2D texture object.
//	GL_TEXTURE_2D_ARRAY = 0x8C1A,	/// 2D texture array object.
//	GL_TEXTURE_2D_MULTISAMPLE = 0x9100,	/// 2D multisample texture object.
//	GL_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9102,	/// 2D multisample texture array object.
//	GL_TEXTURE_3D = 0x806F,	/// 3D texture object.
//	GL_TEXTURE_BUFFER = 0x8C2A,	/// Buffer texture object.	/// Allowed only as argument in <see cref="gl.BindTexture"/>, <see cref="gl.GetInternalformativ"/> and <see cref="gl.GetInternalformati64v"/>.
//	GL_TEXTURE_CUBE_MAP = 0x8513,	/// Cube map texture object.
//	GL_TEXTURE_CUBE_MAP_ARRAY = 0x9009,	/// Cube map array texture object.
//	GL_TEXTURE_RECTANGLE = 0x84F5,	/// 2D rectangle texture object.
//	GL_RENDERBUFFER = 0x8D41,	/// Render buffer object.	/// Allowed only as argument in <see cref="gl.GetInternalformativ"/> and <see cref="gl.GetInternalformati64v"/>.
//};
//
//enum glTexture2DTarget{
//	GL_TEXTURE_2D = 0x0DE1,	/// 2D texture object.
//	GL_TEXTURE_RECTANGLE = 0x84F5,	/// 2D rectangle texture object.
//	GL_TEXTURE_CUBE_MAP_POSITIVE_X = 0x8515,	/// Face of a cube map texture object.
//	GL_TEXTURE_CUBE_MAP_NEGATIVE_X = 0x8516,	/// Face of a cube map texture object.
//	GL_TEXTURE_CUBE_MAP_POSITIVE_Y = 0x8517,	/// Face of a cube map texture object.
//	GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = 0x8518,	/// Face of a cube map texture object.
//	GL_TEXTURE_CUBE_MAP_POSITIVE_Z = 0x8519,	/// Face of a cube map texture object.
//	GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = 0x851A,	/// Face of a cube map texture object.
//	GL_TEXTURE_1D_ARRAY = 0x8C18,	/// 1D texture array object.
//	GL_TEXTURE_2D_MULTISAMPLE = 0x9100,	/// 2D multisample texture object.	/// Allowed only as argument in <see cref="gl.FramebufferTexture2D"/>.
//};
//
//enum glTexture2DProxyTarget{
//	GL_TEXTURE_2D = 0x0DE1,	/// 2D texture object.
//	GL_PROXY_TEXTURE_2D = 0x8064,	/// Virtual texture object, used to check, if a real texture object of that kind and specification could be created.
//	GL_TEXTURE_RECTANGLE = 0x84F5,	/// 2D rectangle texture object.
//	GL_PROXY_TEXTURE_RECTANGLE = 0x84F7,	/// Virtual texture object, used to check, if a real texture object of that kind and specification could be created.
//	GL_TEXTURE_CUBE_MAP = 0x8513,	/// Cube map texture object.	/// Allowed only as argument in <see cref="gl.TexStorage2D"/>.
//	GL_TEXTURE_CUBE_MAP_POSITIVE_X = 0x8515,	/// Face of a cube map texture object.
//	GL_TEXTURE_CUBE_MAP_NEGATIVE_X = 0x8516,	/// Face of a cube map texture object.
//	GL_TEXTURE_CUBE_MAP_POSITIVE_Y = 0x8517,	/// Face of a cube map texture object.
//	GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = 0x8518,	/// Face of a cube map texture object.
//	GL_TEXTURE_CUBE_MAP_POSITIVE_Z = 0x8519,	/// Face of a cube map texture object.
//	GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = 0x851A,	/// Face of a cube map texture object.
//	GL_PROXY_TEXTURE_CUBE_MAP = 0x851B,	/// Virtual texture object, used to check, if a real texture object of that kind and specification could be created.
//	GL_TEXTURE_1D_ARRAY = 0x8C18,	/// 1D texture array object.
//	GL_PROXY_TEXTURE_1D_ARRAY = 0x8C19,	/// Virtual texture object, used to check, if a real texture object of that kind and specification could be created.
//	GL_TEXTURE_2D_MULTISAMPLE = 0x9100,	/// 2D multisample texture object.
//	GL_PROXY_TEXTURE_2D_MULTISAMPLE = 0x9101,	/// Virtual texture object, used to check, if a real texture object of that kind and specification could be created.
//};
//
//enum glPixelFormat{
//	GL_NONE = 0,	/// -
//	GL_STENCIL_INDEX = 0x1901,	/// Stencil value.
//	GL_DEPTH_COMPONENT = 0x1902,	/// Depth value.
//	GL_DEPTH_STENCIL = 0x84F9,	/// Stencil and depth value combined.
//	GL_RED = 0x1903,	/// Red color value.
//	GL_GREEN = 0x1904,	/// Green color value.
//	GL_BLUE = 0x1905,	/// Blue color value.
//	GL_RG = 0x8227,	/// Red and green color value.
//	GL_RGB = 0x1907,	/// Red, green and blue color value.
//	GL_RGBA = 0x1908,	/// RGBA color value.
//	GL_BGR = 0x80E0,	/// Red, green and blue color value in reversed order.
//	GL_BGRA = 0x80E1,	/// RGBA color value in reversed order.
//	GL_RED_INTEGER = 0x8D94,	/// Red color value as integer.
//	GL_GREEN_INTEGER = 0x8D95,	/// Green color value as integer.
//	GL_BLUE_INTEGER = 0x8D96,	/// Blue color value as integer.
//	GL_RG_INTEGER = 0x8228,	/// Red and green color value as integer.
//	GL_RGB_INTEGER = 0x8D98,	/// Red, green and blue color value as integer.
//	GL_RGBA_INTEGER = 0x8D99,	/// RGBA color value as integer.
//	GL_BGR_INTEGER = 0x8D9A,	/// Red, green and blue color value as integer in reversed order.
//	GL_BGRA_INTEGER = 0x8D9B,	/// RGBA color value as integer in reversed order.
//};
//
//enum glComponentType{
//	GL_NONE = 0,	/// Component not present or not supported.
//	GL_INT = 0x1404,	/// Component is signed integer.
//	GL_UNSIGNED_INT = 0x1405,	/// Component is unsigned integer.
//	GL_FLOAT = 0x1406,	/// Component is floating-point.
//	GL_UNSIGNED_NORMALIZED = 0x8C17,	/// Component is unsigned normalized.
//	GL_SIGNED_NORMALIZED = 0x8F9C,	/// Component is signed normalized.
//};

//enum glIFormat{
//	//internalformat may also be one of the sized internal formats shown in Table 2, below
//	//Specifies the number of color components in the texture. Must be one of base internal formats given in Table 1, one of the sized internal formats given in Table 2, or one of the compressed internal formats given in Table 3, below.
//	//Table 1. Base Internal Formats
//	//---------------------------+----------------------------------+------------------------------------
//	//Base Internal Format		 |	 RGBA, Depth and Stencil Values	|	Internal Components				 |
//	// --------------------------+----------------------------------+------------------------------------+
//	GL_DEPTH_COMPONENT,	//		 |	 Depth							|	D								 |
//	GL_DEPTH_STENCIL,	//		 |	 Depth,							|	Stencil	D, S					 |
//	GL_RED,				//		 |	 Red							|	R								 |
//	GL_RG,				//		 |	 Red,							|	Green	R, G					 |
//	GL_RGB,				//		 |	 Red,							|	Green, Blue	R, G, B				 |
//	GL_RGBA,			//		 |	 Red,							|	Green, Blue, Alpha	R, G, B, A	 |
//	//---------------------------+----------------------------------+------------------------------------
//
//
//	//Table 2. Sized Internal Formats
//	//--------------------------+---------------------------+---------------+---------------+---------------+---------------+-------------------+
//	//Sized Internal Format		|	Base Internal Format	|	Red Bits	|	Green Bits	|	Blue Bits	|	Alpha Bits	|	Shared Bits		|
//	//--------------------------+---------------------------+---------------+---------------+---------------+---------------+-------------------+
//	GL_R8,					//	|	GL_RED					|	8			|	 			|	 			|	 			|					|
//	GL_R8_SNORM,			//	|	GL_RED					|	s8			|	 			|	 			|	 			|					|
//	GL_R16,					//	|	GL_RED					|	16			|	 			|	 			|	 			|					|
//	GL_R16_SNORM,			//	|	GL_RED					|	s16			|	 			|	 			|	 			|					|
//	GL_RG8,					//	|	GL_RG					|	8			|	8			|	 			|	 			|					|
//	GL_RG8_SNORM,			//	|	GL_RG					|	s8			|	s8			|	 			|	 			|					|
//	GL_RG16,				//	|	GL_RG					|	16			|	16			|	 			|	 			|					|
//	GL_RG16_SNORM,			//	|	GL_RG					|	s16			|	s16			|	 			|	 			|					|
//	GL_R3_G3_B2,			//	|	GL_RGB					|	3			|	3			|	2			|	 			|					|
//	GL_RGB4,				//	|	GL_RGB					|	4			|	4			|	4			|	 			|					|
//	GL_RGB5,				//	|	GL_RGB					|	5			|	5			|	5			|	 			|					|
//	GL_RGB8,				//	|	GL_RGB					|	8			|	8			|	8			|	 			|					|
//	GL_RGB8_SNORM,			//	|	GL_RGB					|	s8			|	s8			|	s8			|	 			|					|
//	GL_RGB10,				//	|	GL_RGB					|	10			|	10			|	10			|	 			|					|
//	GL_RGB12,				//	|	GL_RGB					|	12			|	12			|	12			|	 			|					|
//	GL_RGB16_SNORM,			//	|	GL_RGB					|	16			|	16			|	16			|	 			|					|
//	GL_RGBA2,				//	|	GL_RGB					|	2			|	2			|	2			|	2			|					|
//	GL_RGBA4,				//	|	GL_RGB					|	4			|	4			|	4			|	4			|					|
//	GL_RGB5_A1,				//	|	GL_RGBA					|	5			|	5			|	5			|	1			|					|
//	GL_RGBA8,				//	|	GL_RGBA					|	8			|	8			|	8			|	8			|					|
//	GL_RGBA8_SNORM,			//	|	GL_RGBA					|	s8			|	s8			|	s8			|	s8			|					|
//	GL_RGB10_A2,			//	|	GL_RGBA					|	10			|	10			|	10			|	2			|					|
//	GL_RGB10_A2UI,			//	|	GL_RGBA					|	ui10		|	ui10		|	ui10		|	ui2			|					|
//	GL_RGBA12,				//	|	GL_RGBA					|	12			|	12			|	12			|	12			|					|
//	GL_RGBA16,				//	|	GL_RGBA					|	16			|	16			|	16			|	16			|					|
//	GL_SRGB8,				//	|	GL_RGB					|	8			|	8			|	8			|	 			|					|
//	GL_SRGB8_ALPHA8,		//	|	GL_RGBA					|	8			|	8			|	8			|	8			|					|
//	GL_R16F,				//	|	GL_RED					|	f16			|	 			|	 			|	 			|					|
//	GL_RG16F,				//	|	GL_RG					|	f16			|	f16			|	 			|	 			|					|
//	GL_RGB16F,				//	|	GL_RGB					|	f16			|	f16			|	f16			|	 			|					|
//	GL_RGBA16F,				//	|	GL_RGBA					|	f16			|	f16			|	f16			|	f16			|					|
//	GL_R32F,				//	|	GL_RED					|	f32			|	 			|	 			|	 			|					|
//	GL_RG32F,				//	|	GL_RG					|	f32			|	f32			|	 			|	 			|					|
//	GL_RGB32F,				//	|	GL_RGB					|	f32			|	f32			|	f32			|	 			|					|
//	GL_RGBA32F,				//	|	GL_RGBA					|	f32			|	f32			|	f32			|	f32			|					|
//	GL_R11F_G11F_B10F,		//	|	GL_RGB					|	f11			|	f11			|	f10			|	 			|					|
//	GL_RGB9_E5,				//	|	GL_RGB					|	9			|	9			|	9			|	 			|		5			|
//	GL_R8I,					//	|	GL_RED					|	i8			|	 			|	 			|	 			|					|
//	GL_R8UI,				//	|	GL_RED					|	ui8			|	 			|	 			|	 			|					|
//	GL_R16I,				//	|	GL_RED					|	i16			|	 			|	 			|	 			|					|
//	GL_R16UI,				//	|	GL_RED					|	ui16		|		 		|		 		|		 		|	 				|
//	GL_R32I,				//	|	GL_RED					|	i32			|	 			|	 			|	 			|					|
//	GL_R32UI,				//	|	GL_RED					|	ui32		|		 		|		 		|		 		|	 				|
//	GL_RG8I,				//	|	GL_RG					|	i8			|	i8			|	 			|	 			|					|
//	GL_RG8UI,				//	|	GL_RG					|	ui8			|	ui8			|	 			|	 			|					|
//	GL_RG16I,				//	|	GL_RG					|	i16			|	i16			|	 			|	 			|					|
//	GL_RG16UI,				//	|	GL_RG					|	ui16		|	ui16		|		 		|		 		|	 				|
//	GL_RG32I,				//	|	GL_RG					|	i32			|	i32			|	 			|	 			|					|
//	GL_RG32UI,				//	|	GL_RG					|	ui32		|	ui32		|		 		|		 		|	 				|
//	GL_RGB8I,				//	|	GL_RGB					|	i8			|	i8			|	i8			|	 			|					|
//	GL_RGB8UI,				//	|	GL_RGB					|	ui8			|	ui8			|	ui8			|	 			|					|
//	GL_RGB16I,				//	|	GL_RGB					|	i16			|	i16			|	i16			|	 			|					|
//	GL_RGB16UI,				//	|	GL_RGB					|	ui16		|	ui16		|	ui16		|		 		|	 				|
//	GL_RGB32I,				//	|	GL_RGB					|	i32			|	i32			|	i32			|	 			|					|
//	GL_RGB32UI,				//	|	GL_RGB					|	ui32		|	ui32		|	ui32		|		 		|	 				|
//	GL_RGBA8I,				//	|	GL_RGBA					|	i8			|	i8			|	i8			|	i8			|					|
//	GL_RGBA8UI,				//	|	GL_RGBA					|	ui8			|	ui8			|	ui8			|	ui8			|					|
//	GL_RGBA16I,				//	|	GL_RGBA					|	i16			|	i16			|	i16			|	i16			|					|
//	GL_RGBA16UI,			//	|	GL_RGBA					|	ui16		|	ui16		|	ui16		|	ui16		|	 				|
//	GL_RGBA32I,				//	|	GL_RGBA					|	i32			|	i32			|	i32			|	i32			|					|
//	GL_RGBA32UI,			//	|	GL_RGBA					|	ui32		|	ui32		|	ui32		|	ui32		|	 				|
//	//--------------------------+---------------------------+---------------+---------------+---------------+---------------+-------------------+
//
//
//
//	//Finally, internalformat may also be one of the generic or compressed compressed texture formats shown in Table 3 below
//	//Table 3. Compressed Internal Formats
//	//------------------------------------------+---------------------------+---------------+
//	//Compressed Internal Format				|	Base Internal Format	|	Type		|
//	//------------------------------------------+---------------------------+---------------+
//	GL_COMPRESSED_RED,						//	|	GL_RED					|	Generic		|
//	GL_COMPRESSED_RG,						//	|	GL_RG					|	Generic		|
//	GL_COMPRESSED_RGB,						//	|	GL_RGB					|	Generic		|
//	GL_COMPRESSED_RGBA,						//	|	GL_RGBA					|	Generic		|
//	GL_COMPRESSED_SRGB,						//	|	GL_RGB					|	Generic		|
//	GL_COMPRESSED_SRGB_ALPHA,				//	|	GL_RGBA					|	Generic		|
//	GL_COMPRESSED_RED_RGTC1,				//	|	GL_RED					|	Specific	|
//	GL_COMPRESSED_SIGNED_RED_RGTC1,			//	|	GL_RED					|	Specific	|
//	GL_COMPRESSED_RG_RGTC2,					//	|	GL_RG					|	Specific	|
//	GL_COMPRESSED_SIGNED_RG_RGTC2,			//	|	GL_RG					|	Specific	|
//	GL_COMPRESSED_RGBA_BPTC_UNORM,			//	|	GL_RGBA					|	Specific	|
//	GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM,	//	|	GL_RGBA					|	Specific	|
//	GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT,	//	|	GL_RGB					|	Specific	|
//	GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT,	//	|	GL_RGB					|	Specific	|
//	//------------------------------------------+---------------------------+---------------+
//
//};






