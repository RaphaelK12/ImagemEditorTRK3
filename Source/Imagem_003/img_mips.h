#pragma once
struct img_mips{
	img_mips();
	img_mips(const img_mips &c);
	img_mips(const img_mips *c);
	img_mips &operator = (const img_mips &c);
	img_mips &operator = (const img_mips *c);
	~img_mips();
	void destroy();

	uint   m_dataSize;		// number of bytes that the data ocupies
	ushort m_xres;			// resolution x
	ushort m_yres;			// resolution y
	ushort m_zres;			// resolution z
	ushort m_dataFormat;	// DF_NONE = 0, DF_INDEX, DF_L_8u, DF_RGB_8u, DF_BGR_8u, DF_BGRA_8u, DF_RGBA_8u, la(gray transparent), rgb, rgba, argb, bgr, bgra, abgr,
	ushort m_compression;	// dxt1, dxt1a, dxt2, dxt3, dxt4, dxt5; astc, bc1, bc2, bc3, bc4, bc5, bc6h, bc7
							// tga_rle_gray, tga_rle_16, tga_rle_24, tga_rle_32, bmp_rle4, bmp_rle8, pcx_rle, index,
	ushort m_spp;			// size of one pixel
	void  *m_pixels;		// the pixel array of the image
};
