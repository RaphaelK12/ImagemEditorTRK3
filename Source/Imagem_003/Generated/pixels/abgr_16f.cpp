

abgr_16f&abgr_16f::operator=(const r_8u			&v){
	r=g=b=float2half(v.r*BIT_8_f_MULT);
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const r_16u			&v){
	r=g=b=float2half(v.r*BIT_16_f_MULT);
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const r_16f			&v){
	r=g=b=v.r;
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const r_32u			&v){
	r=g=b=float2half(v.r*BIT_32_f_MULT);
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const r_32f			&v){
	r=g=b=float2half(v.r*BIT_f_f_MULT);
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rg_8u			&v){
	r=g=b=float2half(v.r*BIT_8_f_MULT);
	a=float2half(v.g*BIT_8_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rg_16u			&v){
	r=g=b=float2half(v.r*BIT_16_f_MULT);
	a=float2half(v.g*BIT_16_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rg_16f			&v){
	r=g=b=v.r;
	a=v.g;
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rg_32u			&v){
	r=g=b=float2half(v.r*BIT_32_f_MULT);
	a=float2half(v.g*BIT_32_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rg_32f			&v){
	r=g=b=float2half(v.r*BIT_f_f_MULT);
	a=float2half(v.g*BIT_f_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rgb_8u			&v){
	r=float2half(v.r*BIT_8_f_MULT);
	g=float2half(v.g*BIT_8_f_MULT);
	b=float2half(v.b*BIT_8_f_MULT);
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const bgr_8u			&v){
	r=float2half(v.r*BIT_8_f_MULT);
	g=float2half(v.g*BIT_8_f_MULT);
	b=float2half(v.b*BIT_8_f_MULT);
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rgb_16u			&v){
	r=float2half(v.r*BIT_16_f_MULT);
	g=float2half(v.g*BIT_16_f_MULT);
	b=float2half(v.b*BIT_16_f_MULT);
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const bgr_16u			&v){
	r=float2half(v.r*BIT_16_f_MULT);
	g=float2half(v.g*BIT_16_f_MULT);
	b=float2half(v.b*BIT_16_f_MULT);
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rgb_16f			&v){
	r=v.r;
	g=v.g;
	b=v.b;
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const bgr_16f			&v){
	r=v.r;
	g=v.g;
	b=v.b;
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rgb_32u			&v){
	r=float2half(v.r*BIT_32_f_MULT);
	g=float2half(v.g*BIT_32_f_MULT);
	b=float2half(v.b*BIT_32_f_MULT);
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const bgr_32u			&v){
	r=float2half(v.r*BIT_32_f_MULT);
	g=float2half(v.g*BIT_32_f_MULT);
	b=float2half(v.b*BIT_32_f_MULT);
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rgb_32f			&v){
	r=float2half(v.r*BIT_f_f_MULT);
	g=float2half(v.g*BIT_f_f_MULT);
	b=float2half(v.b*BIT_f_f_MULT);
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const bgr_32f			&v){
	r=float2half(v.r*BIT_f_f_MULT);
	g=float2half(v.g*BIT_f_f_MULT);
	b=float2half(v.b*BIT_f_f_MULT);
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rgba_8u			&v){
	r=float2half(v.r*BIT_8_f_MULT);
	g=float2half(v.g*BIT_8_f_MULT);
	b=float2half(v.b*BIT_8_f_MULT);
	a=float2half(v.a*BIT_8_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const argb_8u			&v){
	r=float2half(v.r*BIT_8_f_MULT);
	g=float2half(v.g*BIT_8_f_MULT);
	b=float2half(v.b*BIT_8_f_MULT);
	a=float2half(v.a*BIT_8_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const bgra_8u			&v){
	r=float2half(v.r*BIT_8_f_MULT);
	g=float2half(v.g*BIT_8_f_MULT);
	b=float2half(v.b*BIT_8_f_MULT);
	a=float2half(v.a*BIT_8_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const abgr_8u			&v){
	r=float2half(v.r*BIT_8_f_MULT);
	g=float2half(v.g*BIT_8_f_MULT);
	b=float2half(v.b*BIT_8_f_MULT);
	a=float2half(v.a*BIT_8_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rgba_16u			&v){
	r=float2half(v.r*BIT_16_f_MULT);
	g=float2half(v.g*BIT_16_f_MULT);
	b=float2half(v.b*BIT_16_f_MULT);
	a=float2half(v.a*BIT_16_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const bgra_16u			&v){
	r=float2half(v.r*BIT_16_f_MULT);
	g=float2half(v.g*BIT_16_f_MULT);
	b=float2half(v.b*BIT_16_f_MULT);
	a=float2half(v.a*BIT_16_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const argb_16u			&v){
	r=float2half(v.r*BIT_16_f_MULT);
	g=float2half(v.g*BIT_16_f_MULT);
	b=float2half(v.b*BIT_16_f_MULT);
	a=float2half(v.a*BIT_16_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const abgr_16u			&v){
	r=float2half(v.r*BIT_16_f_MULT);
	g=float2half(v.g*BIT_16_f_MULT);
	b=float2half(v.b*BIT_16_f_MULT);
	a=float2half(v.a*BIT_16_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rgba_16f			&v){
	r=v.r;
	g=v.g;
	b=v.b;
	a=v.a;
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const bgra_16f			&v){
	r=v.r;
	g=v.g;
	b=v.b;
	a=v.a;
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const argb_16f			&v){
	r=v.r;
	g=v.g;
	b=v.b;
	a=v.a;
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const abgr_16f			&v){
	r=v.r;
	g=v.g;
	b=v.b;
	a=v.a;
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rgba_32u			&v){
	r=float2half(v.r*BIT_32_f_MULT);
	g=float2half(v.g*BIT_32_f_MULT);
	b=float2half(v.b*BIT_32_f_MULT);
	a=float2half(v.a*BIT_32_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const bgra_32u			&v){
	r=float2half(v.r*BIT_32_f_MULT);
	g=float2half(v.g*BIT_32_f_MULT);
	b=float2half(v.b*BIT_32_f_MULT);
	a=float2half(v.a*BIT_32_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const argb_32u			&v){
	r=float2half(v.r*BIT_32_f_MULT);
	g=float2half(v.g*BIT_32_f_MULT);
	b=float2half(v.b*BIT_32_f_MULT);
	a=float2half(v.a*BIT_32_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const abgr_32u			&v){
	r=float2half(v.r*BIT_32_f_MULT);
	g=float2half(v.g*BIT_32_f_MULT);
	b=float2half(v.b*BIT_32_f_MULT);
	a=float2half(v.a*BIT_32_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rgba_32f			&v){
	r=float2half(v.r*BIT_f_f_MULT);
	g=float2half(v.g*BIT_f_f_MULT);
	b=float2half(v.b*BIT_f_f_MULT);
	a=float2half(v.a*BIT_f_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const bgra_32f			&v){
	r=float2half(v.r*BIT_f_f_MULT);
	g=float2half(v.g*BIT_f_f_MULT);
	b=float2half(v.b*BIT_f_f_MULT);
	a=float2half(v.a*BIT_f_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const argb_32f			&v){
	r=float2half(v.r*BIT_f_f_MULT);
	g=float2half(v.g*BIT_f_f_MULT);
	b=float2half(v.b*BIT_f_f_MULT);
	a=float2half(v.a*BIT_f_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const abgr_32f			&v){
	r=float2half(v.r*BIT_f_f_MULT);
	g=float2half(v.g*BIT_f_f_MULT);
	b=float2half(v.b*BIT_f_f_MULT);
	a=float2half(v.a*BIT_f_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rgb_9995f			&v){
	*this = unpack_9995f(v);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const bgr_5999f			&v){
	rgb_9995f tmp;
	tmp = v;
	*this = unpack_9995f(tmp);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rgba_10_10_10_2			&v){
	r=float2half(v.r*BIT_10_f_MULT);
	g=float2half(v.g*BIT_10_f_MULT);
	b=float2half(v.b*BIT_10_f_MULT);
	a=float2half(v.a*BIT_2_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const abgr_2_10_10_10			&v){
	r=float2half(v.r*BIT_10_f_MULT);
	g=float2half(v.g*BIT_10_f_MULT);
	b=float2half(v.b*BIT_10_f_MULT);
	a=float2half(v.a*BIT_2_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rgb_11_11_10f			&v){
	*this = unpack_11_11_10f(v);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const bgr_10_11_11f			&v){
	rgb_11_11_10f tmp;
	tmp = v;
	*this = unpack_11_11_10f(tmp);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rg_24_8			&v){
	r=g=b=float2half(v.r*BIT_24_f_MULT);
	a=float2half(v.g*BIT_8_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rg_4			&v){
	r=g=b=float2half(v.r*BIT_4_f_MULT);
	a=float2half(v.g*BIT_4_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rgb_332			&v){
	r=float2half(v.r*BIT_3_f_MULT);
	g=float2half(v.g*BIT_3_f_MULT);
	b=float2half(v.b*BIT_2_f_MULT);
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const bgr_233			&v){
	r=float2half(v.r*BIT_3_f_MULT);
	g=float2half(v.g*BIT_3_f_MULT);
	b=float2half(v.b*BIT_2_f_MULT);
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rgb_422			&v){
	r=float2half(v.r*BIT_4_f_MULT);
	g=float2half(v.g*BIT_2_f_MULT);
	b=float2half(v.b*BIT_2_f_MULT);
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const bgr_224			&v){
	r=float2half(v.r*BIT_4_f_MULT);
	g=float2half(v.g*BIT_2_f_MULT);
	b=float2half(v.b*BIT_2_f_MULT);
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rgb_565			&v){
	r=float2half(v.r*BIT_5_f_MULT);
	g=float2half(v.g*BIT_6_f_MULT);
	b=float2half(v.b*BIT_5_f_MULT);
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const bgr_565			&v){
	r=float2half(v.r*BIT_5_f_MULT);
	g=float2half(v.g*BIT_6_f_MULT);
	b=float2half(v.b*BIT_5_f_MULT);
	a=float2half(1.0f);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rgba_5551			&v){
	r=float2half(v.r*BIT_5_f_MULT);
	g=float2half(v.g*BIT_5_f_MULT);
	b=float2half(v.b*BIT_5_f_MULT);
	a=float2half(v.a*BIT_1_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const argb_1555			&v){
	r=float2half(v.r*BIT_5_f_MULT);
	g=float2half(v.g*BIT_5_f_MULT);
	b=float2half(v.b*BIT_5_f_MULT);
	a=float2half(v.a*BIT_1_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const bgra_5551			&v){
	r=float2half(v.r*BIT_5_f_MULT);
	g=float2half(v.g*BIT_5_f_MULT);
	b=float2half(v.b*BIT_5_f_MULT);
	a=float2half(v.a*BIT_1_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const abgr_1555			&v){
	r=float2half(v.r*BIT_5_f_MULT);
	g=float2half(v.g*BIT_5_f_MULT);
	b=float2half(v.b*BIT_5_f_MULT);
	a=float2half(v.a*BIT_1_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const rgba_4			&v){
	r=float2half(v.r*BIT_4_f_MULT);
	g=float2half(v.g*BIT_4_f_MULT);
	b=float2half(v.b*BIT_4_f_MULT);
	a=float2half(v.a*BIT_4_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const argb_4			&v){
	r=float2half(v.r*BIT_4_f_MULT);
	g=float2half(v.g*BIT_4_f_MULT);
	b=float2half(v.b*BIT_4_f_MULT);
	a=float2half(v.a*BIT_4_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const bgra_4			&v){
	r=float2half(v.r*BIT_4_f_MULT);
	g=float2half(v.g*BIT_4_f_MULT);
	b=float2half(v.b*BIT_4_f_MULT);
	a=float2half(v.a*BIT_4_f_MULT);
 
	return *this;
};
abgr_16f&abgr_16f::operator=(const abgr_4			&v){
	r=float2half(v.r*BIT_4_f_MULT);
	g=float2half(v.g*BIT_4_f_MULT);
	b=float2half(v.b*BIT_4_f_MULT);
	a=float2half(v.a*BIT_4_f_MULT);
 
	return *this;
};
 
