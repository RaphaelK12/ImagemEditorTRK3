#pragma once
#include "pch.h"
#include "Enums.h"
#include "Definitions.h"
//#include "Generated\_GEN_Struct.inl"
//#include "Generated\_GEN_Structs.h"
#include "Structs.h"

//#include "Imagem_003.h"

#pragma warning(disable:4244)

template <typename F, typename T>
uint convert(F* f, T** t, uint numPixels, uint& datasize, ushort& spp, ushort& bpp) {
	uint cnt = 0;
	if ((!f) || (!t) || (!numPixels) || (!datasize)) return 0;
	if ((numPixels * sizeof(F)) != datasize) return 0;
	if (!(*t))
		if (!(*t = (T*)new byte[numPixels * sizeof(T)])) return 0;
	F* p2 = f;
	T* p1 = *t;
	while (cnt < numPixels) {
		*(p1++) = *(p2++);
		cnt++;
	}
	spp = sizeof(T);
	bpp = 8 * sizeof(T);
	datasize = numPixels * sizeof(T);
	return 1;
};


IMAGEM_API uint convertDataFormat(imDF ff, imDF tf, byte* f, byte** t, uint numPixels, uint& datasize, ushort& spp, ushort& bpp) {
	if ((!t) || (!f) || (!numPixels) || (!datasize))
		return 0;
	if (ff == tf) { // same format, only make a copy
		if (!(*t))
			if (!(*t = new byte[datasize]))
				return 0;
		memcpy(*t, f, datasize);
		return 1;
	};
	switch (ff) {

#include "Generated\_GEN_Convert.inl"

		default: return 0;
	};
};



