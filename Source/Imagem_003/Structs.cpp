#pragma once

#include "pch.h"
#include "Enums.h"
#include "Definitions.h"
#include "Structs.h"
#include "Imagem_003.h"

float gray_r = 0.2125f;
float gray_g = 0.7154f;
float gray_b = 0.0721f;

#define float2half(val) f2h(float(val))

float fast_roundf( float x){
	//const float MAGIC_ROUNDf = 12582912.0; /* https://stackoverflow.com/questions/17035464/a-fast-method-to-round-a-double-to-a-32-bit-int-explained */
	x += 12582912.0f;
	x -= 12582912.0f;
	return x;
}
// faster than fast_roundf(), only one aritmetic(sum)
int fastRound( double x) {
	//const double MAGIC_ROUND = 6755399441055744.0; /* http://stereopsis.com/sree/fpu2006.html */
	union {
		double d;
		struct {
			int lw;
			int hw;
		};
	} fast_trunc;
	fast_trunc.d = x;
	fast_trunc.d += 6755399441055744.0;
	return fast_trunc.lw;
}

float M_GRAY( float r,  float g,  float b){
	return r*gray_r + g*gray_g + b*gray_b;
}

float half2float(const half &val){
	half h;
	//h.bits = val.value_bits;
	h.bits = val.bits;
	single sng;
	sng.s = h.s;

	//  handle special cases
	if ( (h.e==0) && (h.m==0) ) 
	{  // zero
		sng.m=0;
		sng.e=0;
	}
	else if ( (h.e==0) && (h.m!=0) ) 
	{  
		// denorm -- denorm half will fit in non-denorm single
		const float half_denorm = (1.0f/16384.0f); // 2^-14
		float mantissa = ((float)(h.m)) / 1024.0f;
		float sgn = (h.s)? -1.0f :1.0f;
		sng.f = sgn*mantissa*half_denorm;
	}
	else if ( (h.e==31) && (h.m==0) )
	{ // infinity
		sng.e = 0xff;
		sng.m = 0;
	}
	else if ( (h.e==31) && (h.m!=0) ) 
	{ // NaN
		sng.e = 0xff;
		sng.m = 1;
	}
	else 
	{
		sng.e = h.e+112;
		sng.m = (h.m << 13);
	}

	return sng.f;
}

half f2h( float val){
	single f;
	f.f = val;
	half h;

	h.s = f.s;

	// handle special cases

	//const float half_denorm = (1.0f/16384.0f);

	if ( (f.e==0) && (f.m==0) ) 
	{ // zero
		h.m = 0;
		h.e = 0;
	}
	else if ( (f.e==0) && (f.m!=0) ) 
	{  // denorm -- denorm float maps to 0 half
		h.m = 0;
		h.e = 0;
	}
	else if ( (f.e==0xff) && (f.m==0) ) 
	{ 
		// infinity
		h.m = 0;
		h.e = 31;
	}
	else if ( (f.e==0xff) && (f.m!=0) ) 
	{ 
		// NaN
		h.m = 1;
		h.e = 31;
	}
	else 
	{ 
		// regular number
		int new_exp = f.e-127;

		if (new_exp<-24) 
		{ // this maps to 0
			h.m = 0;
			h.e = 0;
		}

		if (new_exp<-14) 
		{
			// this maps to a denorm
			h.e = 0;
			unsigned int exp_val = (unsigned int) (-14 - new_exp);  // 2^-exp_val
			switch (exp_val) 
			{
			case 0: 
				//fprintf(stderr, "ftoh: logical error in denorm creation!\n"); 
				h.m = 0; 
				break;
			case 1: h.m = 512 + (f.m>>14); break;
			case 2: h.m = 256 + (f.m>>15); break;
			case 3: h.m = 128 + (f.m>>16); break;
			case 4: h.m = 64 + (f.m>>17); break;
			case 5: h.m = 32 + (f.m>>18); break;
			case 6: h.m = 16 + (f.m>>19); break;
			case 7: h.m = 8 + (f.m>>20); break;
			case 8: h.m = 4 + (f.m>>21); break;
			case 9: h.m = 2 + (f.m>>22); break;
			case 10: h.m = 1; break;
			}
		}
		else if (new_exp>15) 
		{ // map this value to infinity
			h.m = 0;
			h.e = 31;
		}
		else 
		{
			h.e = new_exp+15;
			h.m = (f.m >> 13);
		}
	}

	return (*(half*)(&h.bits));
}

ushort glUFloat10( float value){
	const float MinValue = 0;
	const float MaxValue = 64512;
	const float Epsilon = 0.0000019073486328125f;
	const ushort EpsilonUShort = 1;
	const ushort FillMask = 0x03FF;
	const ushort NaN = 0x03FF;
	const ushort ExponentMask = 0x03E0;
	const ushort Infinity = 0x03E0;
	const ushort MantissaMask = 0x001F;
	value = min(value, 0);
	value = max(value, MaxValue);
	value = max(MaxValue, value);
	
	// Get bits as uint
	SingleUInt32Union unio;
	unio.single = value;
	uint ivalue = unio.uint32;

	ushort Value = 0;

	// Zero?
	if ((ivalue & 0x7FFFFFFF) == 0) return Value;

	uint maskedExpo = ivalue & 0x7F800000;

	// Denormalized number? (this would underflow anyway)
	if (maskedExpo == 0) return Value;

	uint maskedMant = ivalue & 0x007FFFFF;

	// Infinity or NaN? (all exponent bits set)
	if (maskedExpo == 0x7F800000)
	{
		// NaN?
		if (maskedMant != 0) Value = NaN;
		else if ((ivalue & 0x80000000) == 0) Value = Infinity; // Negative infinity => 0
		return Value;
	}

	// Negative?
	if ((ivalue & 0x80000000) != 0) return Value;

	// Normalized number
	int iExponent = ((int)maskedExpo >> 23) - 127 + 15; // Convert exponent from float range to 16-bit float range

	// Overflow? (exponent out of range)
	if (iExponent >= 0x1F)
	{
		Value = Infinity;
		return Value;
	}

	// Underflow? (exponent out of range)
	if (iExponent <= 0)
	{
		// No mantissa bits left
		if ((19 - iExponent) > 24) return Value;

		// Make denormalized number
		maskedMant |= 0x00800000; // Add the leading one digit

		ushort denormMantissa = (ushort)(maskedMant >> (19 - iExponent));

		// Check for rounding
		if (((maskedMant >> (18 - iExponent)) & 1) != 0) denormMantissa++;

		Value |= denormMantissa;
		return Value;
	}

	Value |= (ushort)(iExponent << 5);
	Value |= (ushort)(maskedMant >> 18);

	// Check for rounding
	if ((maskedMant & 0x00020000) != 0) Value++;
	return Value;
}

ushort glUFloat11( float value){
	const float MinValue = 0;
	const float MaxValue = 65024;
	const float Epsilon = 0.00000095367431640625f;
	const ushort EpsilonUShort = 1;
	const ushort FillMask = 0x07FF;
	const ushort NaN = 0x07FF;
	const ushort ExponentMask = 0x07C0;
	const ushort Infinity = 0x07C0;
	const ushort MantissaMask = 0x003F;	
	value = min(value, 0);
	value = max(value, MaxValue);
	value = max(MaxValue, value);
	
	// Get bits as uint
	SingleUInt32Union unio;
	unio.single = value;
	uint ivalue = unio.uint32;

	ushort Value = 0;

	// Zero?
	if ((ivalue & 0x7FFFFFFF) == 0) return Value;

	uint maskedExpo = ivalue & 0x7F800000;

	// Denormalized number? (this would underflow anyway)
	if (maskedExpo == 0) return Value;

	uint maskedMant = ivalue & 0x007FFFFF;

	// Infinity or NaN? (all exponent bits set)
	if (maskedExpo == 0x7F800000)
	{
		// NaN?
		if (maskedMant != 0) Value = NaN;
		else if ((ivalue & 0x80000000) == 0) Value = Infinity; // Negative infinity => 0
		return Value;
	}

	// Negative?
	if ((ivalue & 0x80000000) != 0) return Value;

	// Normalized number
	int iExponent = ((int)maskedExpo >> 23) - 127 + 15; // Convert exponent from float range to 16-bit float range

	// Overflow? (exponent out of range)
	if (iExponent >= 0x1F)
	{
		Value = Infinity;
		return Value;
	}

	// Underflow? (exponent out of range)
	if (iExponent <= 0)
	{
		// No mantissa bits left
		if ((18 - iExponent) > 24) return Value;

		// Make denormalized number
		maskedMant |= 0x00800000; // Add the leading one digit

		ushort denormMantissa = (ushort)(maskedMant >> (18 - iExponent));

		// Check for rounding
		if (((maskedMant >> (17 - iExponent)) & 1) != 0) denormMantissa++;

		Value |= denormMantissa;
		return Value;
	}

	Value |= (ushort)(iExponent << 6);
	Value |= (ushort)(maskedMant >> 17);

	// Check for rounding
	if ((maskedMant & 0x00010000) != 0) Value++;
	return Value;
}

float operator10float( ushort Value){
	const float MinValue = 0;
	const float MaxValue = 64512;
	const float Epsilon = 0.0000019073486328125f;
	const ushort EpsilonUShort = 1;
	const ushort FillMask = 0x03FF;
	const ushort NaN = 0x03FF;
	const ushort ExponentMask = 0x03E0;
	const ushort Infinity = 0x03E0;
	const ushort MantissaMask = 0x001F;
	
	SingleUInt32Union unio;
	ushort v = Value;

	// Zero?
	if ((v & FillMask) == 0) return 0;

	// Not zero
	uint exponent = (uint)v & ExponentMask;
	uint mantissa = (uint)v & MantissaMask;

	// Infinity or NaN (all the exponent bits are set)
	if (exponent == ExponentMask)
	{
		if (mantissa != 0) return 0;/*{
			unio.uint32=0x7fffffff;
			return unio.single;
		}*/
		unio.uint32=0x7F800000;
		return unio.single;
	}

	// Denormalized number
	if (exponent == 0)
	{
		// Find the exponent by loop-shifting until the leading one flows out mantissa
		exponent = (exponent >> 5) + 127 - 15 + 1;
		do
		{
			exponent--;
			mantissa <<= 1;
		} while ((mantissa & 0x0020) == 0);

		exponent <<= 23;
		mantissa = (mantissa & MantissaMask) << 18;

		unio.uint32 = exponent | mantissa;
		return unio.single;
	}

	// Normalized number
	exponent = (exponent >> 5) + 127 - 15;
	exponent <<= 23;
	mantissa = (mantissa & MantissaMask) << 18;

	unio.uint32 = exponent | mantissa;
	return unio.single;
}

float operator11float( ushort Value){
	float MinValue = 0;
	float MaxValue = 65024;
	float Epsilon = 0.00000095367431640625f;
	ushort EpsilonUShort = 1;
	ushort FillMask = 0x07FF;
	ushort NaN = 0x07FF;
	ushort ExponentMask = 0x07C0;
	ushort Infinity = 0x07C0;
	ushort MantissaMask = 0x003F;	

	SingleUInt32Union unio;
	ushort v = Value;

	// Zero?
	if ((v & FillMask) == 0) return 0;

	// Not zero
	uint exponent = (uint)v & ExponentMask;
	uint mantissa = (uint)v & MantissaMask;

	// Infinity or NaN (all the exponent bits are set)
	if (exponent == ExponentMask)
	{
		if (mantissa != 0) return 0; //float.NaN;
		unio.uint32 = 0x7fffffff;
		return unio.single; //float.PositiveInfinity;
	}

	// Denormalized number
	if (exponent == 0)
	{
		// Find the exponent by loop-shifting until the leading one flows out mantissa
		exponent = (exponent >> 6) + 127 - 15 + 1;
		do
		{
			exponent--;
			mantissa <<= 1;
		} while ((mantissa & 0x0040) == 0);

		exponent <<= 23;
		mantissa = (mantissa & MantissaMask) << 17;

		unio.uint32 = exponent | mantissa;
		return unio.single;
	}

	// Normalized number
	exponent = (exponent >> 6) + 127 - 15;
	exponent <<= 23;
	mantissa = (mantissa & MantissaMask) << 17;

	unio.uint32 = exponent | mantissa;
	return unio.single;
}

rgb_9995f packF3x9_E1x5(const rgb_32f &v){
	// float const SharedExpMax = (pow(2.0f, 9.0f - 1.0f) / pow(2.0f, 9.0f)) * pow(2.0f, 31.f - 15.f);
	float SharedExpMax = 32768;
	rgb_32f Color = clamp_3f(v, 0.0f, SharedExpMax);
	float MaxColor = max(Color.r, max(Color.g, Color.b));

	float ExpSharedP = max(-15.f - 1.f, floor(log2(MaxColor))) + 1.0f + 15.f;
	float MaxShared = floor(MaxColor / pow(2.0f, (ExpSharedP - 15.f - 9.f)) + 0.5f);
	float ExpShared = MaxShared == pow(2.0f, 9.0f) ? ExpSharedP + 1.0f : ExpSharedP;

	float p = pow(2.f, (ExpShared - 15.f - 9.f)) + 0.5f;
	
	rgb_32u ColorComp; //(floor(Color / pow(2.f, (ExpShared - 15.f - 9.f)) + 0.5f));
	ColorComp.r=fastRound(floor(Color.r/p));
	ColorComp.g=fastRound(floor(Color.g/p));
	ColorComp.b=fastRound(floor(Color.b/p));
	
	rgb_9995f x;
	x.r = ColorComp.r;
	x.g = ColorComp.g;
	x.b = ColorComp.b;
	x.a = uint(ExpShared);
	return x;
	// return x.val;
}

rgb_9995f pack_9995f(const rgb_32f& v) {
	// float const SharedExpMax = (pow(2.0f, 9.0f - 1.0f) / pow(2.0f, 9.0f)) * pow(2.0f, 31.f - 15.f);
	float  SharedExpMax = 32768;
	rgb_32f  Color = clamp_3f(v, 0.0f, SharedExpMax);
	float  MaxColor = max(Color.r, max(Color.g, Color.b));

	float  ExpSharedP = max(-15.f - 1.f, floor(log2(MaxColor))) + 1.0f + 15.f;
	float  MaxShared = floor(MaxColor / pow(2.0f, (ExpSharedP - 15.f - 9.f)) + 0.5f);
	float  ExpShared = MaxShared == pow(2.0f, 9.0f) ? ExpSharedP + 1.0f : ExpSharedP;

	float p = pow(2.f, (ExpShared - 15.f - 9.f)) + 0.5f;

	rgb_32u ColorComp; //(floor(Color / pow(2.f, (ExpShared - 15.f - 9.f)) + 0.5f));
	ColorComp.r = fastRound(floor(Color.r / p));
	ColorComp.g = fastRound(floor(Color.g / p));
	ColorComp.b = fastRound(floor(Color.b / p));

	rgb_9995f x;
	x.r = ColorComp.r;
	x.g = ColorComp.g;
	x.b = ColorComp.b;
	x.a = uint(ExpShared);
	return x;
	// return x.val;
}

rgb_32f clamp_3f(const rgb_32f v,  float mi,  float ma){
	rgb_32f p;
	p.r = max(min(v.r, mi),ma);
	p.g = max(min(v.g, mi),ma);
	p.b = max(min(v.b, mi),ma);
	return p;
}

rgb_11_11_10f To_UnsignedInt_11f_11f_10f(const rgb_32f &v){
	// ushort r = glUFloat11(v.r);
	// ushort g = glUFloat11(v.g);
	// ushort b = glUFloat10(v.b);
	// return ((uint)r << 22) | ((uint)g << 11) | b;
	rgb_11_11_10f p;
	p.r = glUFloat11(v.r);
	p.g = glUFloat11(v.g);
	p.b = glUFloat10(v.b);
	return p;
}

rgb_32f From_UnsignedInt_11f_11f_10f(const rgb_11_11_10f &v){
	rgb_32f p;
	p.r = operator11float((ushort)v.r);
	p.g = operator11float((ushort)v.g);
	p.b = operator10float((ushort)v.b);
	return p;
}

//float log2(float v){
//	return log(v)*1.4426950408889634073599246810019f;
//}
//
//double log2(double v){
//	return log(v)*1.4426950408889634073599246810019;
//}

rgb_32f unpackF3x9_E1x5(const rgb_9995f &u){
	rgb_32f res;
	float p;
	p = pow(2.0f, u.a - 15.f - 9.f);
	res.r = u.r*p;
	res.g = u.g*p;
	res.b = u.b*p;
	return res;
}

rgb_11_11_10f pack_11_11_10f(const rgb_32f &v){
	// ushort r = glUFloat11(v.r);
	// ushort g = glUFloat11(v.g);
	// ushort b = glUFloat10(v.b);
	// return ((uint)r << 22) | ((uint)g << 11) | b;
	rgb_11_11_10f p;
	p.r = glUFloat11(v.r);
	p.g = glUFloat11(v.g);
	p.b = glUFloat10(v.b);
	return p;
}

rgb_32f    unpack_11_11_10f(const rgb_11_11_10f &v){
	rgb_32f p;
	p.r = operator11float((ushort)v.r);
	p.g = operator11float((ushort)v.g);
	p.b = operator10float((ushort)v.b);
	return p;
}

rgb_32f unpack_9995f(const rgb_9995f &u){
	rgb_32f res;
	float p;
	p = pow(2.0f, u.a - 15.f - 9.f);
	res.r = u.r*p;
	res.g = u.g*p;
	res.b = u.b*p;
	return res;
}




//#pragma warning(disable:4244)
//// --------------
//#include "C:/TRK/tests/Nova pasta/r_8u.hpp"
//#include "C:/TRK/tests/Nova pasta/r_8s.hpp"
//#include "C:/TRK/tests/Nova pasta/r_16u.hpp"
//#include "C:/TRK/tests/Nova pasta/r_16s.hpp"
//#include "C:/TRK/tests/Nova pasta/r_16f.hpp"
//#include "C:/TRK/tests/Nova pasta/r_32u.hpp"
//#include "C:/TRK/tests/Nova pasta/r_32s.hpp"
//#include "C:/TRK/tests/Nova pasta/r_32f.hpp"
//#include "C:/TRK/tests/Nova pasta/r_64f.hpp"
//#include "C:/TRK/tests/Nova pasta/rg_8u.hpp"
//#include "C:/TRK/tests/Nova pasta/rg_8s.hpp"
//#include "C:/TRK/tests/Nova pasta/rg_16u.hpp"
//#include "C:/TRK/tests/Nova pasta/rg_16s.hpp"
//#include "C:/TRK/tests/Nova pasta/rg_16f.hpp"
//#include "C:/TRK/tests/Nova pasta/rg_32u.hpp"
//#include "C:/TRK/tests/Nova pasta/rg_32s.hpp"
//#include "C:/TRK/tests/Nova pasta/rg_32f.hpp"
//#include "C:/TRK/tests/Nova pasta/rg_64f.hpp"
//#include "C:/TRK/tests/Nova pasta/rgb_8u.hpp"
//#include "C:/TRK/tests/Nova pasta/bgr_8u.hpp"
//#include "C:/TRK/tests/Nova pasta/rgb_8s.hpp"
//#include "C:/TRK/tests/Nova pasta/bgr_8s.hpp"
//#include "C:/TRK/tests/Nova pasta/rgb_16u.hpp"
//#include "C:/TRK/tests/Nova pasta/bgr_16u.hpp"
//#include "C:/TRK/tests/Nova pasta/rgb_16s.hpp"
//#include "C:/TRK/tests/Nova pasta/bgr_16s.hpp"
//#include "C:/TRK/tests/Nova pasta/rgb_16f.hpp"
//#include "C:/TRK/tests/Nova pasta/bgr_16f.hpp"
//#include "C:/TRK/tests/Nova pasta/rgb_32u.hpp"
//#include "C:/TRK/tests/Nova pasta/bgr_32u.hpp"
//#include "C:/TRK/tests/Nova pasta/rgb_32s.hpp"
//#include "C:/TRK/tests/Nova pasta/bgr_32s.hpp"
//#include "C:/TRK/tests/Nova pasta/rgb_32f.hpp"
//#include "C:/TRK/tests/Nova pasta/bgr_32f.hpp"
//#include "C:/TRK/tests/Nova pasta/rgb_64f.hpp"
//#include "C:/TRK/tests/Nova pasta/bgr_64f.hpp"
//#include "C:/TRK/tests/Nova pasta/rgba_8u.hpp"
//#include "C:/TRK/tests/Nova pasta/argb_8u.hpp"
//#include "C:/TRK/tests/Nova pasta/bgra_8u.hpp"
//#include "C:/TRK/tests/Nova pasta/abgr_8u.hpp"
//#include "C:/TRK/tests/Nova pasta/rgba_8s.hpp"
//#include "C:/TRK/tests/Nova pasta/argb_8s.hpp"
//#include "C:/TRK/tests/Nova pasta/bgra_8s.hpp"
//#include "C:/TRK/tests/Nova pasta/abgr_8s.hpp"
//#include "C:/TRK/tests/Nova pasta/rgba_16u.hpp"
//#include "C:/TRK/tests/Nova pasta/bgra_16u.hpp"
//#include "C:/TRK/tests/Nova pasta/argb_16u.hpp"
//#include "C:/TRK/tests/Nova pasta/abgr_16u.hpp"
//#include "C:/TRK/tests/Nova pasta/rgba_16s.hpp"
//#include "C:/TRK/tests/Nova pasta/bgra_16s.hpp"
//#include "C:/TRK/tests/Nova pasta/argb_16s.hpp"
//#include "C:/TRK/tests/Nova pasta/abgr_16s.hpp"
//#include "C:/TRK/tests/Nova pasta/rgba_16f.hpp"
//#include "C:/TRK/tests/Nova pasta/bgra_16f.hpp"
//#include "C:/TRK/tests/Nova pasta/argb_16f.hpp"
//#include "C:/TRK/tests/Nova pasta/abgr_16f.hpp"
//#include "C:/TRK/tests/Nova pasta/rgba_32u.hpp"
//#include "C:/TRK/tests/Nova pasta/bgra_32u.hpp"
//#include "C:/TRK/tests/Nova pasta/argb_32u.hpp"
//#include "C:/TRK/tests/Nova pasta/abgr_32u.hpp"
//#include "C:/TRK/tests/Nova pasta/rgba_32s.hpp"
//#include "C:/TRK/tests/Nova pasta/bgra_32s.hpp"
//#include "C:/TRK/tests/Nova pasta/argb_32s.hpp"
//#include "C:/TRK/tests/Nova pasta/abgr_32s.hpp"
//#include "C:/TRK/tests/Nova pasta/rgba_32f.hpp"
//#include "C:/TRK/tests/Nova pasta/bgra_32f.hpp"
//#include "C:/TRK/tests/Nova pasta/argb_32f.hpp"
//#include "C:/TRK/tests/Nova pasta/abgr_32f.hpp"
//#include "C:/TRK/tests/Nova pasta/rgba_64f.hpp"
//#include "C:/TRK/tests/Nova pasta/bgra_64f.hpp"
//#include "C:/TRK/tests/Nova pasta/argb_64f.hpp"
//#include "C:/TRK/tests/Nova pasta/abgr_64f.hpp"
//#include "C:/TRK/tests/Nova pasta/rgba_9995f.hpp"
//#include "C:/TRK/tests/Nova pasta/argb_5999f.hpp"
//#include "C:/TRK/tests/Nova pasta/rgba_10_10_10_2.hpp"
//#include "C:/TRK/tests/Nova pasta/abgr_2_10_10_10.hpp"
//#include "C:/TRK/tests/Nova pasta/rgb_11_11_10f.hpp"
//#include "C:/TRK/tests/Nova pasta/bgr_10_11_11f.hpp"
//#include "C:/TRK/tests/Nova pasta/rg_24_8.hpp"
//#include "C:/TRK/tests/Nova pasta/rg_4.hpp"
//#include "C:/TRK/tests/Nova pasta/rgb_332.hpp"
//#include "C:/TRK/tests/Nova pasta/bgr_233.hpp"
//#include "C:/TRK/tests/Nova pasta/rgb_422.hpp"
//#include "C:/TRK/tests/Nova pasta/bgr_224.hpp"
//#include "C:/TRK/tests/Nova pasta/rgb_565.hpp"
//#include "C:/TRK/tests/Nova pasta/bgr_565.hpp"
//#include "C:/TRK/tests/Nova pasta/rgba_5551.hpp"
//#include "C:/TRK/tests/Nova pasta/argb_1555.hpp"
//#include "C:/TRK/tests/Nova pasta/bgra_5551.hpp"
//#include "C:/TRK/tests/Nova pasta/abgr_1555.hpp"
//#include "C:/TRK/tests/Nova pasta/rgba_4.hpp"
//#include "C:/TRK/tests/Nova pasta/argb_4.hpp"
//#include "C:/TRK/tests/Nova pasta/bgra_4.hpp"
//#include "C:/TRK/tests/Nova pasta/abgr_4.hpp"
//
//#pragma warning(default:4244)
//
//
//
//
//
//
//
///*
//
//
//
//namespace UNSIGNED_INT_10_10_10_2{
///// <summary>
///// Packs color values (RGBA) in the range [0, 1] into one <b>uint</b>, as 10 bit for each red, green and blue, and 2 bit for alpha.
///// </summary>
///// <param name="red">The red color value.</param>
///// <param name="green">The green color value.</param>
///// <param name="blue">The blue color value.</param>
///// <param name="alpha">The alpha value.</param>
///// <returns>The <b>uint</b> containing the packed color values.</returns>
//static uint To_UnsignedInt_10_10_10_2(float red, float green, float blue, float alpha)
//{
//	uint r = (uint)(red * 1023 + 0.5);
//	uint g = (uint)(green * 1023 + 0.5);
//	uint b = (uint)(blue * 1023 + 0.5);
//	uint a = (uint)(alpha * 3 + 0.5);
//	return (uint)((r << 22) | (g << 12) | (b << 2) | a);
//}
//
///// <summary>
///// Packs color values (RGBA) in the range [0, 65535] into one <b>uint</b>, as 10 bit for each red, green and blue, and 2 bit for alpha.
///// </summary>
///// <param name="red">The red color value.</param>
///// <param name="green">The green color value.</param>
///// <param name="blue">The blue color value.</param>
///// <param name="alpha">The alpha value.</param>
///// <returns>The <b>uint</b> containing the packed color values.</returns>
//static uint To_UnsignedInt_10_10_10_2(ushort red, ushort green, ushort blue, ushort alpha)
//{
//	return To_UnsignedInt_10_10_10_2(red / 65535f, green / 65535f, blue / 65535f, alpha / 65535f); // the arrays would be gigantic and integer arthimetic would be messy, so lets use the float case.
//}
//
///// <summary>
///// Unpacks the color values (RGBA) from a packed <b>uint</b>, with 10 bit for each red, green and blue, and 2 bit for alpha.
///// </summary>
///// <param name="value">The <b>uint</b> containing the packed color values.</param>
///// <param name="red">Returns the red color value as <b>float</b> in the range [0, 1].</param>
///// <param name="green">Returns the green color value as <b>float</b> in the range [0, 1].</param>
///// <param name="blue">Returns the blue color value as <b>float</b> in the range [0, 1].</param>
///// <param name="alpha">Returns the alpha value as <b>float</b> in the range [0, 1].</param>
//static void From_UnsignedInt_10_10_10_2(uint value, float out red, float out green, float out blue, float out alpha)
//{
//	red = (value & 0xFFC00000) / 4290772992f;
//	green = (value & 0x003FF000) / 4190208f;
//	blue = (value & 0x00000FFC) / 4092f;
//	alpha = (value & 0x00000003) / 3f;
//}
//
///// <summary>
///// Unpacks the color values (RGBA) from a packed <b>uint</b>, with 10 bit for each red, green and blue, and 2 bit for alpha.
///// </summary>
///// <param name="value">The <b>uint</b> containing the packed color values.</param>
///// <param name="red">Returns the red color value as <b>ushort</b> in the range [0, 65535].</param>
///// <param name="green">Returns the green color value as <b>ushort</b> in the range [0, 65535].</param>
///// <param name="blue">Returns the blue color value as <b>ushort</b> in the range [0, 65535].</param>
///// <param name="alpha">Returns the alpha value as <b>ushort</b> in the range [0, 65535].</param>
//static void From_UnsignedInt_10_10_10_2(uint value, ushort out red, ushort out green, ushort out blue, ushort out alpha)
//{
//	red = (ushort)((value & 0xFFC00000) >> 16);
//	red |= (ushort)(red >> 10);
//	green = (ushort)((value & 0x003FF000) >> 6);
//	green |= (ushort)(green >> 10);
//	blue = (ushort)((value & 0x00000FFC) << 4);
//	blue |= (ushort)(blue >> 10);
//	alpha = (ushort)(0x5555 * (value & 3));
//}
//}
//
//namespace UNSIGNED_INT_2_10_10_10_REV{
///// <summary>
///// Packs color values (RGBA) in the range [0, 1] into one <b>uint</b>, as 10 bit for each red, green and blue, and 2 bit for alpha. (Reversed order of components.)
///// </summary>
///// <param name="red">The red color value.</param>
///// <param name="green">The green color value.</param>
///// <param name="blue">The blue color value.</param>
///// <param name="alpha">The alpha value.</param>
///// <returns>The <b>uint</b> containing the packed color values. (Reversed order of components.)</returns>
//static uint To_UnsignedInt_2_10_10_10_Rev(float red, float green, float blue, float alpha)
//{
//	uint r = (uint)(red * 1023 + 0.5);
//	uint g = (uint)(green * 1023 + 0.5);
//	uint b = (uint)(blue * 1023 + 0.5);
//	uint a = (uint)(alpha * 3 + 0.5);
//	return (uint)((a << 30) | (b << 20) | (g << 10) | r);
//}
//
///// <summary>
///// Packs color values (RGBA) in the range [0, 65535] into one <b>uint</b>, as 10 bit for each red, green and blue, and 2 bit for alpha. (Reversed order of components.)
///// </summary>
///// <param name="red">The red color value.</param>
///// <param name="green">The green color value.</param>
///// <param name="blue">The blue color value.</param>
///// <param name="alpha">The alpha value.</param>
///// <returns>The <b>uint</b> containing the packed color values. (Reversed order of components.)</returns>
//static uint To_UnsignedInt_2_10_10_10_Rev(ushort red, ushort green, ushort blue, ushort alpha)
//{
//	return To_UnsignedInt_2_10_10_10_Rev(red / 65535f, green / 65535f, blue / 65535f, alpha / 65535f); // the arrays would be gigantic and integer arthimetic would be messy, so lets use the float case.
//}
//
///// <summary>
///// Unpacks the color values (RGBA) from a packed <b>uint</b>, with 10 bit for each red, green and blue, and 2 bit for alpha. (Reversed order of components.)
///// </summary>
///// <param name="value">The <b>uint</b> containing the packed color values. (Reversed order of components.)</param>
///// <param name="red">Returns the red color value as <b>float</b> in the range [0, 1].</param>
///// <param name="green">Returns the green color value as <b>float</b> in the range [0, 1].</param>
///// <param name="blue">Returns the blue color value as <b>float</b> in the range [0, 1].</param>
///// <param name="alpha">Returns the alpha value as <b>float</b> in the range [0, 1].</param>
//static void From_UnsignedInt_2_10_10_10_Rev(uint value, float out red, float out green, float out blue, float out alpha)
//{
//	alpha = (value & 0xC0000000) / 3221225472f;
//	blue = (value & 0x3FF00000) / 1072693248f;
//	green = (value & 0x000FFC00) / 1047552f;
//	red = (value & 0x000003FF) / 1023f;
//}
//
///// <summary>
///// Unpacks the color values (RGBA) from a packed <b>uint</b>, with 10 bit for each red, green and blue, and 2 bit for alpha. (Reversed order of components.)
///// </summary>
///// <param name="value">The <b>uint</b> containing the packed color values. (Reversed order of components.)</param>
///// <param name="red">Returns the red color value as <b>ushort</b> in the range [0, 65535].</param>
///// <param name="green">Returns the green color value as <b>ushort</b> in the range [0, 65535].</param>
///// <param name="blue">Returns the blue color value as <b>ushort</b> in the range [0, 65535].</param>
///// <param name="alpha">Returns the alpha value as <b>ushort</b> in the range [0, 65535].</param>
//static void From_UnsignedInt_2_10_10_10_Rev(uint value, ushort out red, ushort out green, ushort out blue, ushort out alpha)
//{
//	alpha = (ushort)(0x5555 * ((value & 0xC0000000) >> 30));
//	blue = (ushort)((value & 0x3FF00000) >> 14);
//	blue |= (ushort)(blue >> 10);
//	green = (ushort)((value & 0x000FFC00) >> 4);
//	green |= (ushort)(green >> 10);
//	red = (ushort)((value & 0x000003FF) << 6);
//	red |= (ushort)(red >> 10);
//}
//}
//
//namespace UNSIGNED_INT_24_8{
///// <summary>
///// Packs a 24 bit z (depth) value and a 8 bit stencil value into one <b>uint</b>.
///// </summary>
///// <param name="z24">The depth value.</param>
///// <param name="stencil">The stencil value.</param>
///// <returns>The <b>uint</b> containing the packed values.</returns>
//static uint To_UnsignedInt_24_8(uint z24, byte stencil)
//{
//	return (uint)((z24 << 8) | stencil);
//}
//
///// <summary>
///// Unpacks the 24 bit z (depth) value and a 8 bit stencil value from a packed <b>uint</b>.
///// </summary>
///// <param name="value">The <b>uint</b> containing the packed values.</param>
///// <param name="z24">Returns the depth value. [0, 16777215]</param>
///// <param name="stencil">Returns the stencil value. [0, 255]</param>
//static void From_UnsignedInt_24_8(uint value, uint out z24, byte out stencil)
//{
//	z24 = value >> 8;
//	stencil = (byte)value;
//}
//}
//
//namespace UNSIGNED_INT_10F_11F_11F_REV{
///// <summary>
///// Packs color values (RGB) in the range [0, 1] into one <b>uint</b>, as 11 bit unsigned float for each red and green, and 10 bit unsigned float for blue. (Reversed order of components.)
///// </summary>
///// <param name="red">The red color value.</param>
///// <param name="green">The green color value.</param>
///// <param name="blue">The blue color value.</param>
///// <returns>The <b>uint</b> containing the packed color values.</returns>
//static uint To_UnsignedInt_10f_11f_11f_Rev(float red, float green, float blue)
//{
//	glUFloat11 r = new glUFloat11(red);
//	glUFloat11 g = new glUFloat11(green);
//	glUFloat10 b = new glUFloat10(blue);
//	return ((uint)b.Value << 22) | ((uint)g.Value << 11) | r.Value;
//}
//
///// <summary>
///// Unpacks the color values (RGB) from a packed <b>uint</b>, with 11 bit unsigned float for each red and green, and 10 bit unsigned float for blue. (Reversed order of components.)
///// </summary>
///// <param name="value">The <b>uint</b> containing the packed color values. (Reversed order of components.)</param>
///// <param name="red">Returns the red color value as <b>float</b> in the range [0, 1].</param>
///// <param name="green">Returns the green color value as <b>float</b> in the range [0, 1].</param>
///// <param name="blue">Returns the blue color value as <b>float</b> in the range [0, 1].</param>
//static void From_UnsignedInt_10f_11f_11f_Rev(uint value, float out red, float out green, float out blue)
//{
//	glUFloat10 f10;
//	glUFloat11 f11;
//	f11.Value = (ushort)value; red = f11;
//	value >>= 11;
//	f11.Value = (ushort)value; green = f11;
//	value >>= 11;
//	f10.Value = (ushort)value; blue = f10;
//}
//}
//
//namespace UNSIGNED_INT_5_9_9_9_REV{
///// <summary>
///// Packs color values (RGB) in the range [0, 65408] into one <b>uint</b>, as 9 bit unsigned float with shared exponent for each red, green and blue. (Reversed order of components.)
///// </summary>
///// <param name="red">The red color value.</param>
///// <param name="green">The green color value.</param>
///// <param name="blue">The blue color value.</param>
///// <returns>The <b>uint</b> containing the packed color values.</returns>
//static uint To_UnsignedInt_5_9_9_9_Rev(float red, float green, float blue)
//{
//	red = Math.Max(0, Math.Min(65408, red));
//	green = Math.Max(0, Math.Min(65408, green));
//	blue = Math.Max(0, Math.Min(65408, blue));
//
//	float maxc = Math.Max(red, Math.Max(green, blue));
//	int exp = Math.Max(0, (int)Math.Log(maxc, 2) + 16);
//
//	int maxs = (int)(maxc / Math.Pow(2, exp - 24) + 0.5);
//	if (maxs >= 512) exp++;
//
//	int r = (int)(red / Math.Pow(2, exp - 24) + 0.5);
//	int g = (int)(green / Math.Pow(2, exp - 24) + 0.5);
//	int b = (int)(blue / Math.Pow(2, exp - 24) + 0.5);
//
//	return (uint)((exp << 27) | (b << 18) | (g << 9) | r);
//}
//
///// <summary>
///// Unpacks the color values (RGBA) from a packed <b>uint</b>, with 9 bit unsigned float with shared exponent for each red, green and blue. (Reversed order of components.)
///// </summary>
///// <param name="value">The <b>uint</b> containing the packed color values. (Reversed order of components.)</param>
///// <param name="red">Returns the red color value as <b>float</b> in the range [0, 65408].</param>
///// <param name="green">Returns the green color value as <b>float</b> in the range [0, 65408].</param>
///// <param name="blue">Returns the blue color value as <b>float</b> in the range [0, 65408].</param>
//static void From_UnsignedInt_5_9_9_9_Rev(uint value, float out red, float out green, float out blue)
//{
//	float exp = (float)Math.Pow(2, (value & 0xF8000000) >> 27 - 24);
//	red = (value & 0x000001FF) * exp;
//	green = ((value & 0x0003FE00) >> 9) * exp;
//	blue = ((value & 0x07FC0000) >> 18) * exp;
//}
//}
//
//
//
//
//
//
//class glUFloat10;
//
//
//
//class glUFloat11{
//	public:
//	/// <summary>
//	/// Constructs an instance of this class with the value of the argument.
//	/// </summary>
//	/// <param name="value">An instance of <see cref="glUFloat10"/>.</param>
//	 glUFloat11(glUFloat10 value)
//	{
//		int exp = value.Value & glUFloat10.ExponentMask;
//		int man = value.Value & glUFloat10.MantissaMask;
//
//		if (exp == glUFloat10.ExponentMask)
//		{
//			if (man == 0) Value = Infinity;
//			else Value = NaN;
//			return;
//		}
//
//		Value = (ushort)((value.Value << 1) & FillMask);
//	}
//
//	/// <summary>
//	/// Constructs an instance of this class with the value of the argument.
//	/// </summary>
//	/// <param name="value">An instance of <see cref="glFloat16"/>.</param>
//	 glUFloat11(glFloat16 value)
//	{
//		int sig = value.Value & glFloat16.SignMask;
//		int exp = value.Value & glFloat16.ExponentMask;
//		int man = value.Value & glFloat16.MantissaMask;
//
//		if (exp == glFloat16.ExponentMask)
//		{
//			if (man != 0) Value = NaN;
//			else if (sig == 0) Value = Infinity;
//			else Value = 0;
//			return;
//		}
//
//		Value = (ushort)((value.Value >> 4) + (value.Value & 8));
//	}
//
//	/// <summary>
//	/// Constructs an instance of this class with the value of the argument.
//	/// </summary>
//	/// <param name="value">A <b>float</b> value.</param>
//	 glUFloat11(float value)
//	{
//	#if !SLOW_BUT_PLATTFORM_INDEPENDENT_FLOAT_CONVERSION
//		// Get bits as uint
//		SingleUInt32Union uni = new SingleUInt32Union();
//		uni.single = value;
//		uint ivalue = uni.uint32;
//
//		Value = 0;
//
//		// Zero?
//		if ((ivalue & 0x7FFFFFFF) == 0) return;
//
//		uint maskedExpo = ivalue & 0x7F800000;
//
//		// Denormalized number? (this would underflow anyway)
//		if (maskedExpo == 0) return;
//
//		uint maskedMant = ivalue & 0x007FFFFF;
//
//		// Infinity or NaN? (all exponent bits set)
//		if (maskedExpo == 0x7F800000)
//		{
//			// NaN?
//			if (maskedMant != 0) Value = NaN;
//			else if ((ivalue & 0x80000000) == 0) Value = Infinity; // Negative infinity => 0
//			return;
//		}
//
//		// Negative?
//		if ((ivalue & 0x80000000) != 0) return;
//
//		// Normalized number
//		int iExponent = ((int)maskedExpo >> 23) - 127 + 15; // Convert exponent from float range to 16-bit float range
//
//		// Overflow? (exponent out of range)
//		if (iExponent >= 0x1F)
//		{
//			Value = Infinity;
//			return;
//		}
//
//		// Underflow? (exponent out of range)
//		if (iExponent <= 0)
//		{
//			// No mantissa bits left
//			if ((18 - iExponent) > 24) return;
//
//			// Make denormalized number
//			maskedMant |= 0x00800000; // Add the leading one digit
//
//			ushort denormMantissa = (ushort)(maskedMant >> (18 - iExponent));
//
//			// Check for rounding
//			if (((maskedMant >> (17 - iExponent)) & 1) != 0) denormMantissa++;
//
//			Value |= denormMantissa;
//			return;
//		}
//
//		Value |= (ushort)(iExponent << 6);
//		Value |= (ushort)(maskedMant >> 17);
//
//		// Check for rounding
//		if ((maskedMant & 0x00010000) != 0) Value++;
//	#else
//		if(float.IsNaN(value))
//		{
//			Value=NaN;
//			return;
//		}
//
//		if(float.IsInfinity(value))
//		{
//			Value=Infinity;
//			return;
//		}
//
//		if(value<MinValue) value=MinValue;
//		else if(value>MaxValue) value=MaxValue;
//
//		int exp=(int)(Math.Log(value, 2)+15);
//
//		if(exp<=0) Value=(ushort)(value*(1<<20)+0.5f);
//		else if(exp>21) Value=(ushort)((exp<<6)+(int)(value/(1<<(exp-21))-63.5f));
//		else Value=(ushort)((exp<<6)+(int)(value*(1<<(21-exp))-63.5f));
//	#endif
//	}
//
//	/// <summary>
//	/// Constructs an instance of this class with the value of the argument.
//	/// </summary>
//	/// <param name="value">A <b>double</b> value.</param>
//	 glUFloat11(double value)
//	{
//	#if !SLOW_BUT_PLATTFORM_INDEPENDENT_FLOAT_CONVERSION
//		// Get bits as uint
//		uint ivalue = (uint)(BitConverter.DoubleToInt64Bits(value) >> 32);
//
//		Value = 0;
//
//		// Zero?
//		if ((ivalue & 0x7FFFFFFF) == 0) return;
//
//		uint maskedExpo = ivalue & 0x7FF00000;
//
//		// Denormalized number? (this would underflow anyway)
//		if (maskedExpo == 0) return;
//
//		uint maskedMant = ivalue & 0x000FFFFF;
//
//		// Infinity or NaN? (all exponent bits set)
//		if (maskedExpo == 0x7FF00000)
//		{
//			// NaN?
//			if (maskedMant != 0) Value = NaN;
//			else if ((ivalue & 0x80000000) == 0) Value = Infinity; // Negative infinity => 0
//			return;
//		}
//
//		// Negative?
//		if ((ivalue & 0x80000000) != 0) return;
//
//		// Normalized number
//		int iExponent = ((int)maskedExpo >> 20) - 1023 + 15; // Convert exponent from double range to 16-bit float range
//
//		// Overflow? (exponent out of range)
//		if (iExponent >= 0x1F)
//		{
//			Value = Infinity;
//			return;
//		}
//
//		// Underflow? (exponent out of range)
//		if (iExponent <= 0)
//		{
//			// No mantissa bits left
//			if ((15 - iExponent) > 21) return;
//
//			// Make denormalized number
//			maskedMant |= 0x00100000; // Add the leading one digit
//
//			ushort denormMantissa = (ushort)(maskedMant >> (15 - iExponent));
//
//			// Check for rounding
//			if (((maskedMant >> (14 - iExponent)) & 1) != 0) denormMantissa++;
//
//			Value |= denormMantissa;
//			return;
//		}
//
//		Value |= (ushort)(iExponent << 6);
//		Value |= (ushort)(maskedMant >> 14);
//
//		// Check for rounding
//		if ((maskedMant & 0x00002000) != 0) Value++;
//	#else
//		if(double.IsNaN(value))
//		{
//			Value=NaN;
//			return;
//		}
//
//		if(double.IsInfinity(value))
//		{
//			Value=Infinity;
//			return;
//		}
//
//		if(value<MinValue) value=MinValue;
//		else if(value>MaxValue) value=MaxValue;
//
//		int exp=(int)(Math.Log(value, 2)+15);
//
//		if(exp<=0) Value=(ushort)(value*(1<<20)+0.5);
//		else if(exp>21) Value=(ushort)((exp<<6)+(int)(value/(1<<(exp-21))-63.5));
//		else Value=(ushort)((exp<<6)+(int)(value*(1<<(21-exp))-63.5));
//	#endif
//	}
//
//
//	/// <summary>
//	/// Constructs an instance of this class with the value of the argument.
//	/// </summary>
//	/// <param name="value">An instance of <see cref="glUFloat11"/>.</param>
//	 glUFloat10(glUFloat11 value)
//	{
//		int exp = value.Value & glUFloat11.ExponentMask;
//		int man = value.Value & glUFloat11.MantissaMask;
//
//		if (exp == glUFloat11.ExponentMask)
//		{
//			if (man == 0) Value = Infinity;
//			else Value = NaN;
//			return;
//		}
//
//		Value = (ushort)(((value.Value >> 1) + (value.Value & 1)) & FillMask);
//	}
//
//	/// <summary>
//	/// Constructs an instance of this class with the value of the argument.
//	/// </summary>
//	/// <param name="value">An instance of <see cref="glFloat16"/>.</param>
//	 glUFloat10(glFloat16 value)
//	{
//		int sig = value.Value & glFloat16.SignMask;
//		int exp = value.Value & glFloat16.ExponentMask;
//		int man = value.Value & glFloat16.MantissaMask;
//
//		if (exp == glFloat16.ExponentMask)
//		{
//			if (man != 0) Value = NaN;
//			else if (sig == 0) Value = Infinity;
//			else Value = 0;
//			return;
//		}
//
//		Value = (ushort)((value.Value >> 5) + (value.Value & 16));
//	}
//
//	/// <summary>
//	/// Constructs an instance of this class with the value of the argument.
//	/// </summary>
//	/// <param name="value">A <b>float</b> value.</param>
//	 glUFloat10(float value)
//	{
//#if !SLOW_BUT_PLATTFORM_INDEPENDENT_FLOAT_CONVERSION
//		// Get bits as uint
//		SingleUInt32Union uni;
//		uni.single = value;
//		uint ivalue = uni.uint32;
//
//		Value = 0;
//
//		// Zero?
//		if ((ivalue & 0x7FFFFFFF) == 0) return;
//
//		uint maskedExpo = ivalue & 0x7F800000;
//
//		// Denormalized number? (this would underflow anyway)
//		if (maskedExpo == 0) return;
//
//		uint maskedMant = ivalue & 0x007FFFFF;
//
//		// Infinity or NaN? (all exponent bits set)
//		if (maskedExpo == 0x7F800000)
//		{
//			// NaN?
//			if (maskedMant != 0) Value = NaN;
//			else if ((ivalue & 0x80000000) == 0) Value = Infinity; // Negative infinity => 0
//			return;
//		}
//
//		// Negative?
//		if ((ivalue & 0x80000000) != 0) return;
//
//		// Normalized number
//		int iExponent = ((int)maskedExpo >> 23) - 127 + 15; // Convert exponent from float range to 16-bit float range
//
//		// Overflow? (exponent out of range)
//		if (iExponent >= 0x1F)
//		{
//			Value = Infinity;
//			return;
//		}
//
//		// Underflow? (exponent out of range)
//		if (iExponent <= 0)
//		{
//			// No mantissa bits left
//			if ((19 - iExponent) > 24) return;
//
//			// Make denormalized number
//			maskedMant |= 0x00800000; // Add the leading one digit
//
//			ushort denormMantissa = (ushort)(maskedMant >> (19 - iExponent));
//
//			// Check for rounding
//			if (((maskedMant >> (18 - iExponent)) & 1) != 0) denormMantissa++;
//
//			Value |= denormMantissa;
//			return;
//		}
//
//		Value |= (ushort)(iExponent << 5);
//		Value |= (ushort)(maskedMant >> 18);
//
//		// Check for rounding
//		if ((maskedMant & 0x00020000) != 0) Value++;
//#else
//		if(float.IsNaN(value))
//		{
//			Value=NaN;
//			return;
//		}
//
//		if(float.IsInfinity(value))
//		{
//			Value=Infinity;
//			return;
//		}
//
//		if(value<MinValue) value=MinValue;
//		else if(value>MaxValue) value=MaxValue;
//
//		int exp=(int)(Math.Log(value, 2)+15);
//
//		if(exp<=0) Value=(ushort)(value*(1<<19)+0.5f);
//		else if(exp>20) Value=(ushort)((exp<<5)+(int)(value/(1<<(exp-20))-31.5f));
//		else Value=(ushort)((exp<<5)+(int)(value*(1<<(20-exp))-31.5f));
//#endif
//	}
//
//	/// <summary>
//	/// Constructs an instance of this class with the value of the argument.
//	/// </summary>
//	/// <param name="value">A <b>double</b> value.</param>
//	 glUFloat10(double value)
//	{
//#if !SLOW_BUT_PLATTFORM_INDEPENDENT_FLOAT_CONVERSION
//		// Get bits as uint
//		uint ivalue = (uint)(BitConverter.DoubleToInt64Bits(value) >> 32);
//
//		Value = 0;
//
//		// Zero?
//		if ((ivalue & 0x7FFFFFFF) == 0) return;
//
//		uint maskedExpo = ivalue & 0x7FF00000;
//
//		// Denormalized number? (this would underflow anyway)
//		if (maskedExpo == 0) return;
//
//		uint maskedMant = ivalue & 0x000FFFFF;
//
//		// Infinity or NaN? (all exponent bits set)
//		if (maskedExpo == 0x7FF00000)
//		{
//			// NaN?
//			if (maskedMant != 0) Value = NaN;
//			else if ((ivalue & 0x80000000) == 0) Value = Infinity; // Negative infinity => 0
//			return;
//		}
//
//		// Negative?
//		if ((ivalue & 0x80000000) != 0) return;
//
//		// Normalized number
//		int iExponent = ((int)maskedExpo >> 20) - 1023 + 15; // Convert exponent from double range to 16-bit float range
//
//		// Overflow? (exponent out of range)
//		if (iExponent >= 0x1F)
//		{
//			Value = Infinity;
//			return;
//		}
//
//		// Underflow? (exponent out of range)
//		if (iExponent <= 0)
//		{
//			// No mantissa bits left
//			if ((16 - iExponent) > 21) return;
//
//			// Make denormalized number
//			maskedMant |= 0x00100000; // Add the leading one digit
//
//			ushort denormMantissa = (ushort)(maskedMant >> (16 - iExponent));
//
//			// Check for rounding
//			if (((maskedMant >> (15 - iExponent)) & 1) != 0) denormMantissa++;
//
//			Value |= denormMantissa;
//			return;
//		}
//
//		Value |= (ushort)(iExponent << 5);
//		Value |= (ushort)(maskedMant >> 15);
//
//		// Check for rounding
//		if ((maskedMant & 0x00004000) != 0) Value++;
//#else
//		if(double.IsNaN(value))
//		{
//			Value=NaN;
//			return;
//		}
//
//		if(double.IsInfinity(value))
//		{
//			Value=Infinity;
//			return;
//		}
//
//		if(value<MinValue) value=MinValue;
//		else if(value>MaxValue) value=MaxValue;
//
//		int exp=(int)(Math.Log(value, 2)+15);
//
//		if(exp<=0) Value=(ushort)(value*(1<<19)+0.5);
//		else if(exp>20) Value=(ushort)((exp<<5)+(int)(value/(1<<(exp-20))-31.5));
//		else Value=(ushort)((exp<<5)+(int)(value*(1<<(20-exp))-31.5));
//#endif
//	}
//}
//
//
//
//
//
//
//
//class glUFloat10{
//public:
//	ushort value;
//	const float MinValue = 0;
//
///// <summary>
///// Represents the largest possible value this class can hold. This field is constant.
///// </summary>
//	const float MaxValue = 64512;
//
///// <summary>
///// Represents the smallest positive value that is greater than zero. This field is constant. (2^-19)
///// </summary>
//	const float Epsilon = 0.0000019073486328125f;
//
///// <summary>
///// Represents a value that is not a number (<b>NaN</b>). This field is constant.
///// (Exponent and mantissa all bits set to 1)
///// </summary>
//	const ushort NaN = FillMask;
//
///// <summary>
///// Represents infinity. This field is constant.
///// (Exponent all bits set to 1 and mantissa all bits set to 0)
///// </summary>
//	const ushort Infinity = ExponentMask;
//
///// <summary>
///// Represents the smallest positive value that is greater than zero as the memory representation. This field is constant.
///// (Exponent all bits set to 0 and mantissa only the least significant bit set to 1)
///// </summary>
//	const ushort EpsilonUShort = 1;
//
///// <summary>
///// Mask that specifies the bit for the memory representation used to store the value. This field is constant.
///// </summary>
//	const ushort FillMask = 0x03FF;
//
///// <summary>
///// Mask that specifies the bit for the memory representation used to store the exponent of the value. This field is constant.
///// </summary>
//	const ushort ExponentMask = 0x03E0;
//
///// <summary>
///// Mask that specifies the bit for the memory representation used to store the mantissa of the value. This field is constant.
///// </summary>
//	const ushort MantissaMask = 0x001F;
//
///// <summary>
///// Returns a value that indicates whether the specified value is not a number (<see cref="NaN"/>).
///// </summary>
///// <param name="value">An instance of this class.</param>
///// <returns><b>true</b> if <paramref name="value"/> evaluates to <see cref="NaN"/>; otherwise, <b>false</b>.</returns>
//	static bool IsNaN(glUFloat10 value)
//{
//	if ((value.Value & ExponentMask) != ExponentMask) return false;
//	return (value.Value & MantissaMask) != 0;
//}
//
///// <summary>
///// Returns a value indicating whether the specified number evaluates to (positive) infinity.
///// </summary>
///// <param name="value">An instance of this class.</param>
///// <returns><b>true</b> if <paramref name="value"/> evaluates to <see cref="Infinity"/>; otherwise, <b>false</b>.</returns>
//	static bool IsInfinity(glUFloat10 value)
//{
//	return value.Value == Infinity;
//}
//
///// <summary>
///// Implicitly converts the value of this instance to <b>float</b>.
///// </summary>
///// <param name="value">An instance of this class.</param>
///// <returns>The value of this instance as <b>float</b>.</returns>
//	static implicit operator float(glUFloat10 value)
//{
//#if !SLOW_BUT_PLATTFORM_INDEPENDENT_FLOAT_CONVERSION
//	SingleUInt32Union uni;
//	ushort v = value.Value;
//
//	// Zero?
//	if ((v & FillMask) == 0) return 0;
//
//	// Not zero
//	uint exponent = (uint)v & ExponentMask;
//	uint mantissa = (uint)v & MantissaMask;
//
//	// Infinity or NaN (all the exponent bits are set)
//	if (exponent == ExponentMask)
//	{
//		if (mantissa != 0) return float.NaN;
//		return float.PositiveInfinity;
//	}
//
//	// Denormalized number
//	if (exponent == 0)
//	{
//		// Find the exponent by loop-shifting until the leading one flows out mantissa
//		exponent = (exponent >> 5) + 127 - 15 + 1;
//		do
//		{
//			exponent--;
//			mantissa <<= 1;
//		} while ((mantissa & 0x0020) == 0);
//
//		exponent <<= 23;
//		mantissa = (mantissa & MantissaMask) << 18;
//
//		uni.uint32 = exponent | mantissa;
//		return uni.single;
//	}
//
//	// Normalized number
//	exponent = (exponent >> 5) + 127 - 15;
//	exponent <<= 23;
//	mantissa = (mantissa & MantissaMask) << 18;
//
//	uni.uint32 = exponent | mantissa;
//	return uni.single;
//#else
//	int exp=value.Value&ExponentMask;
//	int man=value.Value&MantissaMask;
//
//	if(exp==ExponentMask)
//	{
//		if(man==0) return float.PositiveInfinity;
//		return float.NaN;
//	}
//
//	if(exp==0) return man*Epsilon;
//
//	man|=32;
//	exp--;
//	return (man*Epsilon)*(1<<(exp>>5));
//#endif
//}
//
///// <summary>
///// Implicitly converts the value of this instance to <b>double</b>.
///// </summary>
///// <param name="value">An instance of this class.</param>
///// <returns>The value of this instance as <b>double</b>.</returns>
//	static implicit operator double(glUFloat10 value)
//	{
//#if !SLOW_BUT_PLATTFORM_INDEPENDENT_FLOAT_CONVERSION
//		ushort v = value.Value;
//
//		// Zero?
//		if ((v & FillMask) == 0) return 0;
//
//		// Not zero
//		uint exponent = (uint)v & ExponentMask;
//		uint mantissa = (uint)v & MantissaMask;
//
//		// Infinity or NaN (all the exponent bits are set)
//		if (exponent == ExponentMask)
//		{
//			if (mantissa != 0) return double.NaN;
//			return float.PositiveInfinity;
//		}
//
//		// Denormalized number
//		if (exponent == 0)
//		{
//			// Find the exponent by loop-shifting until the leading one flows out mantissa
//			exponent = (exponent >> 5) + 1023 - 15 + 1;
//			do
//			{
//				exponent--;
//				mantissa <<= 1;
//			} while ((mantissa & 0x0020) == 0);
//
//			exponent <<= 20;
//			mantissa = (mantissa & MantissaMask) << 15;
//
//			return BitConverter.Int64BitsToDouble((long)(exponent | mantissa) << 32);
//		}
//
//		// Normalized number
//		exponent = (exponent >> 5) + 1023 - 15;
//		exponent <<= 20;
//		mantissa = (mantissa & MantissaMask) << 15;
//
//		return BitConverter.Int64BitsToDouble((long)(exponent | mantissa) << 32);
//#else
//		int exp=value.Value&ExponentMask;
//		int man=value.Value&MantissaMask;
//
//		if(exp==ExponentMask)
//		{
//			if(man==0) return float.PositiveInfinity;
//			return float.NaN;
//		}
//
//		if(exp==0) return man*Epsilon;
//
//		man|=32;
//		exp--;
//		return (man*Epsilon)*(1<<(exp>>5));
//#endif
//	}
//}
//
//
//
//
//
//*/
//
