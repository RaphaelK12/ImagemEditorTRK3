#pragma once

#include "Definitions.h"
#pragma pack(push, 1)   // n = 16, pushed to stack
// #pragma pack(1) // this resolves the alingment problem ;)
//#include "Generated\_GEN_Struct.h"

//#pragma pack(show)   // C4810

struct float_bitfield {
	union {
		struct {   // Bitfields for exploration. Do not use in production code.
			unsigned int m : 23;
			unsigned int e : 8;
			unsigned int s : 1;
		};
		struct {
			unsigned int
				a1 : 1, a2 : 1, a3 : 1, a4 : 1,
				b1 : 1, b2 : 1, b3 : 1, b4 : 1,

				c1 : 1, c2 : 1, c3 : 1, c4 : 1,
				d1 : 1, d2 : 1, d3 : 1, d4 : 1,

				e1 : 1, e2 : 1, e3 : 1, e4 : 1,
				f1 : 1, f2 : 1, f3 : 1, f4 : 1,

				g1 : 1, g2 : 1, g3 : 1, g4 : 1,
				h1 : 1, h2 : 1, h3 : 1, h4 : 1;
		};
		float f;
	};
};

union half {
	unsigned short bits;
	struct {
		unsigned long m : 10;
		unsigned long e : 5;
		unsigned long s : 1;
	};
};

union single {
	float f;
	struct {
		unsigned long m : 23;
		unsigned long e : 8;
		unsigned long s : 1;
	};
};

union SingleUInt32Union {
	float single;
	uint uint32;
};


#include "Generated\_GEN_Structs.hpp"



extern float gray_r;
extern float gray_g;
extern float gray_b;

#pragma warning(disable:4244)

float fast_roundf( float x);
// faster than fast_roundf(), only one aritmetic(sum)
int fastRound( double x);

float M_GRAY( float r,   float g,   float b);

float half2float(const half& val);

half f2h( float val);

#define float2half(val) f2h(float(val))

ushort glUFloat10( float value);

ushort glUFloat11( float value);

float operator10float( ushort Value);

float operator11float( ushort Value);

rgb_32f clamp_3f(const rgb_32f v,  float mi,   float ma);

rgb_11_11_10f	To_UnsignedInt_11f_11f_10f(const rgb_32f& v);

rgb_32f			From_UnsignedInt_11f_11f_10f(const rgb_11_11_10f& v);

//float log2(float v);

//double log2(double v);

rgb_9995f	packF3x9_E1x5(const rgb_32f& v);

rgb_32f		unpackF3x9_E1x5(const rgb_9995f& u);

rgb_11_11_10f	pack_11_11_10f(const rgb_32f& v);

rgb_32f			unpack_11_11_10f(const rgb_11_11_10f& v);

rgb_9995f	pack_9995f(const rgb_32f& v);

rgb_32f		unpack_9995f(const rgb_9995f& u);

#pragma warning(default:4244)

#pragma pack(pop)   // n = 2 , stack popped









/*
int a00[sizeof rgb332];
int a01[sizeof bgr233];
int a02[sizeof rgb422];
int a03[sizeof bgr224];
int a04[sizeof rgb242];
int a05[sizeof bgr242];
int a06[sizeof rgb565];
int a07[sizeof bgr565];
int a08[sizeof rgba5551];
int a09[sizeof argb1555];
int a10[sizeof bgra5551];
int a11[sizeof abgr1555];
int a12[sizeof rgb484];
int a13[sizeof bgr484];
int a14[sizeof rgba3328];
int a15[sizeof argb8332];
int a16[sizeof bgra2338];
int a17[sizeof abgr8233];

int a18[sizeof rgba_4];
int a19[sizeof argb_4];
int a20[sizeof bgra_4];
int a21[sizeof abgr_4];


int a22[sizeof rgb_8u];
int a23[sizeof bgr_8u];
int a24[sizeof rgb_8s];
int a25[sizeof bgr_8s];
int a26[sizeof rgba_8u];
int a32[sizeof argb_8u];
int a32[sizeof bgra_8u];
int a32[sizeof abgr_8u];
int a32[sizeof rgba_8s];
int a32[sizeof argb_8s];
int a32[sizeof bgra_8s];
int a32[sizeof abgr_8s];
int a32[sizeof rgb_16u];
int a32[sizeof bgr_16u];
int a32[sizeof rgb_16s];
int a32[sizeof bgr_16s];
int a32[sizeof rgba_16u];
int a32[sizeof bgra_16u];
int a32[sizeof argb_16u];
int a32[sizeof abgr_16u];
int a32[sizeof rgba_16s];
int a32[sizeof bgra_16s];
int a32[sizeof argb_16s];
int a32[sizeof abgr_16s];
int a32[sizeof rgb_32si];
int a32[sizeof bgr_32si];
int a32[sizeof rgb_32ui];
int a32[sizeof bgr_32ui];
int a32[sizeof rgb_32f];
int a32[sizeof bgr_32f];
int a32[sizeof rgba_32si];
int a32[sizeof bgra_32si];
int a32[sizeof argb_32si];
int a32[sizeof abgr_32si];
int a32[sizeof rgba_32ui];
int a32[sizeof bgra_32ui];
int a32[sizeof argb_32ui];
int a32[sizeof abgr_32ui];
int a32[sizeof rgba_32f];
int a32[sizeof bgra_32f];
int a32[sizeof argb_32f];
int a32[sizeof abgr_32f];



int a22[sizeof rgba_9995];
int a23[sizeof argb_5999];
int a24[sizeof rgba_10_10_6_6];
int a25[sizeof abgr_10_10_6_6];
int a26[sizeof rgba_10_10_10_2];
int a27[sizeof abgr_2_10_10_10];
int a28[sizeof rgb_11_11_10];
int a29[sizeof bgr_10_11_11];
int a30[sizeof bgr_10_12_10];
int a31[sizeof rgb_10_12_10];
int a32[sizeof rg_24_8];
 */









 // #pragma pack()








