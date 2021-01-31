

rgba_8u&rgba_8u::operator=(const r_8u			&v){
	r=g=b=fastRound(v.r*BIT_8_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const r_16u			&v){
	r=g=b=fastRound(v.r*BIT_16_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const r_16f			&v){
	r=g=b=fastRound(half2float(v.r)*BIT_f_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const r_32u			&v){
	r=g=b=fastRound(v.r*BIT_32_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const r_32f			&v){
	r=g=b=fastRound(v.r*BIT_f_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rg_8u			&v){
	r=g=b=fastRound(v.r*BIT_8_8_MULT);
	a=fastRound(v.g*BIT_8_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rg_16u			&v){
	r=g=b=fastRound(v.r*BIT_16_8_MULT);
	a=fastRound(v.g*BIT_16_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rg_16f			&v){
	r=g=b=fastRound(half2float(v.r)*BIT_f_8_MULT);
	a=fastRound(half2float(v.g)*BIT_f_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rg_32u			&v){
	r=g=b=fastRound(v.r*BIT_32_8_MULT);
	a=fastRound(v.g*BIT_32_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rg_32f			&v){
	r=g=b=fastRound(v.r*BIT_f_8_MULT);
	a=fastRound(v.g*BIT_f_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rgb_8u			&v){
	r=fastRound(v.r*BIT_8_8_MULT);
	g=fastRound(v.g*BIT_8_8_MULT);
	b=fastRound(v.b*BIT_8_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const bgr_8u			&v){
	r=fastRound(v.r*BIT_8_8_MULT);
	g=fastRound(v.g*BIT_8_8_MULT);
	b=fastRound(v.b*BIT_8_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rgb_16u			&v){
	r=fastRound(v.r*BIT_16_8_MULT);
	g=fastRound(v.g*BIT_16_8_MULT);
	b=fastRound(v.b*BIT_16_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const bgr_16u			&v){
	r=fastRound(v.r*BIT_16_8_MULT);
	g=fastRound(v.g*BIT_16_8_MULT);
	b=fastRound(v.b*BIT_16_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rgb_16f			&v){
	r=fastRound(half2float(v.r)*BIT_f_8_MULT);
	g=fastRound(half2float(v.g)*BIT_f_8_MULT);
	b=fastRound(half2float(v.b)*BIT_f_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const bgr_16f			&v){
	r=fastRound(half2float(v.r)*BIT_f_8_MULT);
	g=fastRound(half2float(v.g)*BIT_f_8_MULT);
	b=fastRound(half2float(v.b)*BIT_f_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rgb_32u			&v){
	r=fastRound(v.r*BIT_32_8_MULT);
	g=fastRound(v.g*BIT_32_8_MULT);
	b=fastRound(v.b*BIT_32_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const bgr_32u			&v){
	r=fastRound(v.r*BIT_32_8_MULT);
	g=fastRound(v.g*BIT_32_8_MULT);
	b=fastRound(v.b*BIT_32_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rgb_32f			&v){
	r=fastRound(v.r*BIT_f_8_MULT);
	g=fastRound(v.g*BIT_f_8_MULT);
	b=fastRound(v.b*BIT_f_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const bgr_32f			&v){
	r=fastRound(v.r*BIT_f_8_MULT);
	g=fastRound(v.g*BIT_f_8_MULT);
	b=fastRound(v.b*BIT_f_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rgba_8u			&v){
	r=fastRound(v.r*BIT_8_8_MULT);
	g=fastRound(v.g*BIT_8_8_MULT);
	b=fastRound(v.b*BIT_8_8_MULT);
	a=fastRound(v.a*BIT_8_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const argb_8u			&v){
	r=fastRound(v.r*BIT_8_8_MULT);
	g=fastRound(v.g*BIT_8_8_MULT);
	b=fastRound(v.b*BIT_8_8_MULT);
	a=fastRound(v.a*BIT_8_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const bgra_8u			&v){
	r=fastRound(v.r*BIT_8_8_MULT);
	g=fastRound(v.g*BIT_8_8_MULT);
	b=fastRound(v.b*BIT_8_8_MULT);
	a=fastRound(v.a*BIT_8_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const abgr_8u			&v){
	r=fastRound(v.r*BIT_8_8_MULT);
	g=fastRound(v.g*BIT_8_8_MULT);
	b=fastRound(v.b*BIT_8_8_MULT);
	a=fastRound(v.a*BIT_8_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rgba_16u			&v){
	r=fastRound(v.r*BIT_16_8_MULT);
	g=fastRound(v.g*BIT_16_8_MULT);
	b=fastRound(v.b*BIT_16_8_MULT);
	a=fastRound(v.a*BIT_16_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const bgra_16u			&v){
	r=fastRound(v.r*BIT_16_8_MULT);
	g=fastRound(v.g*BIT_16_8_MULT);
	b=fastRound(v.b*BIT_16_8_MULT);
	a=fastRound(v.a*BIT_16_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const argb_16u			&v){
	r=fastRound(v.r*BIT_16_8_MULT);
	g=fastRound(v.g*BIT_16_8_MULT);
	b=fastRound(v.b*BIT_16_8_MULT);
	a=fastRound(v.a*BIT_16_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const abgr_16u			&v){
	r=fastRound(v.r*BIT_16_8_MULT);
	g=fastRound(v.g*BIT_16_8_MULT);
	b=fastRound(v.b*BIT_16_8_MULT);
	a=fastRound(v.a*BIT_16_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rgba_16f			&v){
	r=fastRound(half2float(v.r)*BIT_f_8_MULT);
	g=fastRound(half2float(v.g)*BIT_f_8_MULT);
	b=fastRound(half2float(v.b)*BIT_f_8_MULT);
	a=fastRound(half2float(v.a)*BIT_f_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const bgra_16f			&v){
	r=fastRound(half2float(v.r)*BIT_f_8_MULT);
	g=fastRound(half2float(v.g)*BIT_f_8_MULT);
	b=fastRound(half2float(v.b)*BIT_f_8_MULT);
	a=fastRound(half2float(v.a)*BIT_f_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const argb_16f			&v){
	r=fastRound(half2float(v.r)*BIT_f_8_MULT);
	g=fastRound(half2float(v.g)*BIT_f_8_MULT);
	b=fastRound(half2float(v.b)*BIT_f_8_MULT);
	a=fastRound(half2float(v.a)*BIT_f_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const abgr_16f			&v){
	r=fastRound(half2float(v.r)*BIT_f_8_MULT);
	g=fastRound(half2float(v.g)*BIT_f_8_MULT);
	b=fastRound(half2float(v.b)*BIT_f_8_MULT);
	a=fastRound(half2float(v.a)*BIT_f_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rgba_32u			&v){
	r=fastRound(v.r*BIT_32_8_MULT);
	g=fastRound(v.g*BIT_32_8_MULT);
	b=fastRound(v.b*BIT_32_8_MULT);
	a=fastRound(v.a*BIT_32_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const bgra_32u			&v){
	r=fastRound(v.r*BIT_32_8_MULT);
	g=fastRound(v.g*BIT_32_8_MULT);
	b=fastRound(v.b*BIT_32_8_MULT);
	a=fastRound(v.a*BIT_32_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const argb_32u			&v){
	r=fastRound(v.r*BIT_32_8_MULT);
	g=fastRound(v.g*BIT_32_8_MULT);
	b=fastRound(v.b*BIT_32_8_MULT);
	a=fastRound(v.a*BIT_32_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const abgr_32u			&v){
	r=fastRound(v.r*BIT_32_8_MULT);
	g=fastRound(v.g*BIT_32_8_MULT);
	b=fastRound(v.b*BIT_32_8_MULT);
	a=fastRound(v.a*BIT_32_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rgba_32f			&v){
	r=fastRound(v.r*BIT_f_8_MULT);
	g=fastRound(v.g*BIT_f_8_MULT);
	b=fastRound(v.b*BIT_f_8_MULT);
	a=fastRound(v.a*BIT_f_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const bgra_32f			&v){
	r=fastRound(v.r*BIT_f_8_MULT);
	g=fastRound(v.g*BIT_f_8_MULT);
	b=fastRound(v.b*BIT_f_8_MULT);
	a=fastRound(v.a*BIT_f_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const argb_32f			&v){
	r=fastRound(v.r*BIT_f_8_MULT);
	g=fastRound(v.g*BIT_f_8_MULT);
	b=fastRound(v.b*BIT_f_8_MULT);
	a=fastRound(v.a*BIT_f_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const abgr_32f			&v){
	r=fastRound(v.r*BIT_f_8_MULT);
	g=fastRound(v.g*BIT_f_8_MULT);
	b=fastRound(v.b*BIT_f_8_MULT);
	a=fastRound(v.a*BIT_f_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rgb_9995f			&v){
	*this = unpack_9995f(v);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const bgr_5999f			&v){
	rgb_9995f tmp;
	tmp = v;
	*this = unpack_9995f(tmp);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rgba_10_10_10_2			&v){
	r=fastRound(v.r*BIT_10_8_MULT);
	g=fastRound(v.g*BIT_10_8_MULT);
	b=fastRound(v.b*BIT_10_8_MULT);
	a=fastRound(v.a*BIT_2_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const abgr_2_10_10_10			&v){
	r=fastRound(v.r*BIT_10_8_MULT);
	g=fastRound(v.g*BIT_10_8_MULT);
	b=fastRound(v.b*BIT_10_8_MULT);
	a=fastRound(v.a*BIT_2_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rgb_11_11_10f			&v){
	*this = unpack_11_11_10f(v);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const bgr_10_11_11f			&v){
	rgb_11_11_10f tmp;
	tmp = v;
	*this = unpack_11_11_10f(tmp);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rg_24_8			&v){
	r=g=b=fastRound(v.r*BIT_24_8_MULT);
	a=fastRound(v.g*BIT_8_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rg_4			&v){
	r=g=b=fastRound(v.r*BIT_4_8_MULT);
	a=fastRound(v.g*BIT_4_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rgb_332			&v){
	r=fastRound(v.r*BIT_3_8_MULT);
	g=fastRound(v.g*BIT_3_8_MULT);
	b=fastRound(v.b*BIT_2_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const bgr_233			&v){
	r=fastRound(v.r*BIT_3_8_MULT);
	g=fastRound(v.g*BIT_3_8_MULT);
	b=fastRound(v.b*BIT_2_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rgb_422			&v){
	r=fastRound(v.r*BIT_4_8_MULT);
	g=fastRound(v.g*BIT_2_8_MULT);
	b=fastRound(v.b*BIT_2_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const bgr_224			&v){
	r=fastRound(v.r*BIT_4_8_MULT);
	g=fastRound(v.g*BIT_2_8_MULT);
	b=fastRound(v.b*BIT_2_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rgb_565			&v){
	r=fastRound(v.r*BIT_5_8_MULT);
	g=fastRound(v.g*BIT_6_8_MULT);
	b=fastRound(v.b*BIT_5_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const bgr_565			&v){
	r=fastRound(v.r*BIT_5_8_MULT);
	g=fastRound(v.g*BIT_6_8_MULT);
	b=fastRound(v.b*BIT_5_8_MULT);
	a=255;
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rgba_5551			&v){
	r=fastRound(v.r*BIT_5_8_MULT);
	g=fastRound(v.g*BIT_5_8_MULT);
	b=fastRound(v.b*BIT_5_8_MULT);
	a=fastRound(v.a*BIT_1_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const argb_1555			&v){
	r=fastRound(v.r*BIT_5_8_MULT);
	g=fastRound(v.g*BIT_5_8_MULT);
	b=fastRound(v.b*BIT_5_8_MULT);
	a=fastRound(v.a*BIT_1_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const bgra_5551			&v){
	r=fastRound(v.r*BIT_5_8_MULT);
	g=fastRound(v.g*BIT_5_8_MULT);
	b=fastRound(v.b*BIT_5_8_MULT);
	a=fastRound(v.a*BIT_1_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const abgr_1555			&v){
	r=fastRound(v.r*BIT_5_8_MULT);
	g=fastRound(v.g*BIT_5_8_MULT);
	b=fastRound(v.b*BIT_5_8_MULT);
	a=fastRound(v.a*BIT_1_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const rgba_4			&v){
	r=fastRound(v.r*BIT_4_8_MULT);
	g=fastRound(v.g*BIT_4_8_MULT);
	b=fastRound(v.b*BIT_4_8_MULT);
	a=fastRound(v.a*BIT_4_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const argb_4			&v){
	r=fastRound(v.r*BIT_4_8_MULT);
	g=fastRound(v.g*BIT_4_8_MULT);
	b=fastRound(v.b*BIT_4_8_MULT);
	a=fastRound(v.a*BIT_4_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const bgra_4			&v){
	r=fastRound(v.r*BIT_4_8_MULT);
	g=fastRound(v.g*BIT_4_8_MULT);
	b=fastRound(v.b*BIT_4_8_MULT);
	a=fastRound(v.a*BIT_4_8_MULT);
 
	return *this;
};
rgba_8u&rgba_8u::operator=(const abgr_4			&v){
	r=fastRound(v.r*BIT_4_8_MULT);
	g=fastRound(v.g*BIT_4_8_MULT);
	b=fastRound(v.b*BIT_4_8_MULT);
	a=fastRound(v.a*BIT_4_8_MULT);
 
	return *this;
};
 
