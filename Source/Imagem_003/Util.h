#pragma once



LPSTR removeEndL(LPSTR str, uint size);

long fSize(FILE* f);


template <typename T>
T clamp(T v, T a, T b) {
	if (v <= a)
		v = a;
	if (v >= b)
		v = b;
	return v;
};

template <typename T>
T wrap(T v, T a, T b) {
	v -= a;
	fmodf(v, b);
	if (v < T(0))
		v += b;
	v += a;
	return v;
};
