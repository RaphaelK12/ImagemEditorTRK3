

bgra_5551&bgra_5551::operator=(const r_8u			&v){
	r=g=b=fastRound(v.r*BIT_8_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const r_16u			&v){
	r=g=b=fastRound(v.r*BIT_16_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const r_16f			&v){
	r=g=b=fastRound(half2float(v.r)*BIT_f_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const r_32u			&v){
	r=g=b=fastRound(v.r*BIT_32_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const r_32f			&v){
	r=g=b=fastRound(v.r*BIT_f_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rg_8u			&v){
	r=g=b=fastRound(v.r*BIT_8_5_MULT);
	a=fastRound(v.g*BIT_8_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rg_16u			&v){
	r=g=b=fastRound(v.r*BIT_16_5_MULT);
	a=fastRound(v.g*BIT_16_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rg_16f			&v){
	r=g=b=fastRound(half2float(v.r)*BIT_f_5_MULT);
	a=fastRound(half2float(v.g)*BIT_f_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rg_32u			&v){
	r=g=b=fastRound(v.r*BIT_32_5_MULT);
	a=fastRound(v.g*BIT_32_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rg_32f			&v){
	r=g=b=fastRound(v.r*BIT_f_5_MULT);
	a=fastRound(v.g*BIT_f_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rgb_8u			&v){
	r=fastRound(v.r*BIT_8_5_MULT);
	g=fastRound(v.g*BIT_8_5_MULT);
	b=fastRound(v.b*BIT_8_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const bgr_8u			&v){
	r=fastRound(v.r*BIT_8_5_MULT);
	g=fastRound(v.g*BIT_8_5_MULT);
	b=fastRound(v.b*BIT_8_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rgb_16u			&v){
	r=fastRound(v.r*BIT_16_5_MULT);
	g=fastRound(v.g*BIT_16_5_MULT);
	b=fastRound(v.b*BIT_16_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const bgr_16u			&v){
	r=fastRound(v.r*BIT_16_5_MULT);
	g=fastRound(v.g*BIT_16_5_MULT);
	b=fastRound(v.b*BIT_16_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rgb_16f			&v){
	r=fastRound(half2float(v.r)*BIT_f_5_MULT);
	g=fastRound(half2float(v.g)*BIT_f_5_MULT);
	b=fastRound(half2float(v.b)*BIT_f_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const bgr_16f			&v){
	r=fastRound(half2float(v.r)*BIT_f_5_MULT);
	g=fastRound(half2float(v.g)*BIT_f_5_MULT);
	b=fastRound(half2float(v.b)*BIT_f_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rgb_32u			&v){
	r=fastRound(v.r*BIT_32_5_MULT);
	g=fastRound(v.g*BIT_32_5_MULT);
	b=fastRound(v.b*BIT_32_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const bgr_32u			&v){
	r=fastRound(v.r*BIT_32_5_MULT);
	g=fastRound(v.g*BIT_32_5_MULT);
	b=fastRound(v.b*BIT_32_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rgb_32f			&v){
	r=fastRound(v.r*BIT_f_5_MULT);
	g=fastRound(v.g*BIT_f_5_MULT);
	b=fastRound(v.b*BIT_f_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const bgr_32f			&v){
	r=fastRound(v.r*BIT_f_5_MULT);
	g=fastRound(v.g*BIT_f_5_MULT);
	b=fastRound(v.b*BIT_f_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rgba_8u			&v){
	r=fastRound(v.r*BIT_8_5_MULT);
	g=fastRound(v.g*BIT_8_5_MULT);
	b=fastRound(v.b*BIT_8_5_MULT);
	a=fastRound(v.a*BIT_8_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const argb_8u			&v){
	r=fastRound(v.r*BIT_8_5_MULT);
	g=fastRound(v.g*BIT_8_5_MULT);
	b=fastRound(v.b*BIT_8_5_MULT);
	a=fastRound(v.a*BIT_8_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const bgra_8u			&v){
	r=fastRound(v.r*BIT_8_5_MULT);
	g=fastRound(v.g*BIT_8_5_MULT);
	b=fastRound(v.b*BIT_8_5_MULT);
	a=fastRound(v.a*BIT_8_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const abgr_8u			&v){
	r=fastRound(v.r*BIT_8_5_MULT);
	g=fastRound(v.g*BIT_8_5_MULT);
	b=fastRound(v.b*BIT_8_5_MULT);
	a=fastRound(v.a*BIT_8_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rgba_16u			&v){
	r=fastRound(v.r*BIT_16_5_MULT);
	g=fastRound(v.g*BIT_16_5_MULT);
	b=fastRound(v.b*BIT_16_5_MULT);
	a=fastRound(v.a*BIT_16_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const bgra_16u			&v){
	r=fastRound(v.r*BIT_16_5_MULT);
	g=fastRound(v.g*BIT_16_5_MULT);
	b=fastRound(v.b*BIT_16_5_MULT);
	a=fastRound(v.a*BIT_16_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const argb_16u			&v){
	r=fastRound(v.r*BIT_16_5_MULT);
	g=fastRound(v.g*BIT_16_5_MULT);
	b=fastRound(v.b*BIT_16_5_MULT);
	a=fastRound(v.a*BIT_16_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const abgr_16u			&v){
	r=fastRound(v.r*BIT_16_5_MULT);
	g=fastRound(v.g*BIT_16_5_MULT);
	b=fastRound(v.b*BIT_16_5_MULT);
	a=fastRound(v.a*BIT_16_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rgba_16f			&v){
	r=fastRound(half2float(v.r)*BIT_f_5_MULT);
	g=fastRound(half2float(v.g)*BIT_f_5_MULT);
	b=fastRound(half2float(v.b)*BIT_f_5_MULT);
	a=fastRound(half2float(v.a)*BIT_f_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const bgra_16f			&v){
	r=fastRound(half2float(v.r)*BIT_f_5_MULT);
	g=fastRound(half2float(v.g)*BIT_f_5_MULT);
	b=fastRound(half2float(v.b)*BIT_f_5_MULT);
	a=fastRound(half2float(v.a)*BIT_f_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const argb_16f			&v){
	r=fastRound(half2float(v.r)*BIT_f_5_MULT);
	g=fastRound(half2float(v.g)*BIT_f_5_MULT);
	b=fastRound(half2float(v.b)*BIT_f_5_MULT);
	a=fastRound(half2float(v.a)*BIT_f_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const abgr_16f			&v){
	r=fastRound(half2float(v.r)*BIT_f_5_MULT);
	g=fastRound(half2float(v.g)*BIT_f_5_MULT);
	b=fastRound(half2float(v.b)*BIT_f_5_MULT);
	a=fastRound(half2float(v.a)*BIT_f_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rgba_32u			&v){
	r=fastRound(v.r*BIT_32_5_MULT);
	g=fastRound(v.g*BIT_32_5_MULT);
	b=fastRound(v.b*BIT_32_5_MULT);
	a=fastRound(v.a*BIT_32_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const bgra_32u			&v){
	r=fastRound(v.r*BIT_32_5_MULT);
	g=fastRound(v.g*BIT_32_5_MULT);
	b=fastRound(v.b*BIT_32_5_MULT);
	a=fastRound(v.a*BIT_32_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const argb_32u			&v){
	r=fastRound(v.r*BIT_32_5_MULT);
	g=fastRound(v.g*BIT_32_5_MULT);
	b=fastRound(v.b*BIT_32_5_MULT);
	a=fastRound(v.a*BIT_32_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const abgr_32u			&v){
	r=fastRound(v.r*BIT_32_5_MULT);
	g=fastRound(v.g*BIT_32_5_MULT);
	b=fastRound(v.b*BIT_32_5_MULT);
	a=fastRound(v.a*BIT_32_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rgba_32f			&v){
	r=fastRound(v.r*BIT_f_5_MULT);
	g=fastRound(v.g*BIT_f_5_MULT);
	b=fastRound(v.b*BIT_f_5_MULT);
	a=fastRound(v.a*BIT_f_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const bgra_32f			&v){
	r=fastRound(v.r*BIT_f_5_MULT);
	g=fastRound(v.g*BIT_f_5_MULT);
	b=fastRound(v.b*BIT_f_5_MULT);
	a=fastRound(v.a*BIT_f_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const argb_32f			&v){
	r=fastRound(v.r*BIT_f_5_MULT);
	g=fastRound(v.g*BIT_f_5_MULT);
	b=fastRound(v.b*BIT_f_5_MULT);
	a=fastRound(v.a*BIT_f_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const abgr_32f			&v){
	r=fastRound(v.r*BIT_f_5_MULT);
	g=fastRound(v.g*BIT_f_5_MULT);
	b=fastRound(v.b*BIT_f_5_MULT);
	a=fastRound(v.a*BIT_f_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rgb_9995f			&v){
	*this = unpack_9995f(v);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const bgr_5999f			&v){
	rgb_9995f tmp;
	tmp = v;
	*this = unpack_9995f(tmp);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rgba_10_10_10_2			&v){
	r=fastRound(v.r*BIT_10_5_MULT);
	g=fastRound(v.g*BIT_10_5_MULT);
	b=fastRound(v.b*BIT_10_5_MULT);
	a=fastRound(v.a*BIT_2_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const abgr_2_10_10_10			&v){
	r=fastRound(v.r*BIT_10_5_MULT);
	g=fastRound(v.g*BIT_10_5_MULT);
	b=fastRound(v.b*BIT_10_5_MULT);
	a=fastRound(v.a*BIT_2_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rgb_11_11_10f			&v){
	*this = unpack_11_11_10f(v);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const bgr_10_11_11f			&v){
	rgb_11_11_10f tmp;
	tmp = v;
	*this = unpack_11_11_10f(tmp);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rg_24_8			&v){
	r=g=b=fastRound(v.r*BIT_24_5_MULT);
	a=fastRound(v.g*BIT_8_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rg_4			&v){
	r=g=b=fastRound(v.r*BIT_4_5_MULT);
	a=fastRound(v.g*BIT_4_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rgb_332			&v){
	r=fastRound(v.r*BIT_3_5_MULT);
	g=fastRound(v.g*BIT_3_5_MULT);
	b=fastRound(v.b*BIT_2_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const bgr_233			&v){
	r=fastRound(v.r*BIT_3_5_MULT);
	g=fastRound(v.g*BIT_3_5_MULT);
	b=fastRound(v.b*BIT_2_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rgb_422			&v){
	r=fastRound(v.r*BIT_4_5_MULT);
	g=fastRound(v.g*BIT_2_5_MULT);
	b=fastRound(v.b*BIT_2_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const bgr_224			&v){
	r=fastRound(v.r*BIT_4_5_MULT);
	g=fastRound(v.g*BIT_2_5_MULT);
	b=fastRound(v.b*BIT_2_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rgb_565			&v){
	r=fastRound(v.r*BIT_5_5_MULT);
	g=fastRound(v.g*BIT_6_5_MULT);
	b=fastRound(v.b*BIT_5_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const bgr_565			&v){
	r=fastRound(v.r*BIT_5_5_MULT);
	g=fastRound(v.g*BIT_6_5_MULT);
	b=fastRound(v.b*BIT_5_5_MULT);
	a=1;
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rgba_5551			&v){
	r=fastRound(v.r*BIT_5_5_MULT);
	g=fastRound(v.g*BIT_5_5_MULT);
	b=fastRound(v.b*BIT_5_5_MULT);
	a=fastRound(v.a*BIT_1_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const argb_1555			&v){
	r=fastRound(v.r*BIT_5_5_MULT);
	g=fastRound(v.g*BIT_5_5_MULT);
	b=fastRound(v.b*BIT_5_5_MULT);
	a=fastRound(v.a*BIT_1_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const bgra_5551			&v){
	r=fastRound(v.r*BIT_5_5_MULT);
	g=fastRound(v.g*BIT_5_5_MULT);
	b=fastRound(v.b*BIT_5_5_MULT);
	a=fastRound(v.a*BIT_1_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const abgr_1555			&v){
	r=fastRound(v.r*BIT_5_5_MULT);
	g=fastRound(v.g*BIT_5_5_MULT);
	b=fastRound(v.b*BIT_5_5_MULT);
	a=fastRound(v.a*BIT_1_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const rgba_4			&v){
	r=fastRound(v.r*BIT_4_5_MULT);
	g=fastRound(v.g*BIT_4_5_MULT);
	b=fastRound(v.b*BIT_4_5_MULT);
	a=fastRound(v.a*BIT_4_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const argb_4			&v){
	r=fastRound(v.r*BIT_4_5_MULT);
	g=fastRound(v.g*BIT_4_5_MULT);
	b=fastRound(v.b*BIT_4_5_MULT);
	a=fastRound(v.a*BIT_4_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const bgra_4			&v){
	r=fastRound(v.r*BIT_4_5_MULT);
	g=fastRound(v.g*BIT_4_5_MULT);
	b=fastRound(v.b*BIT_4_5_MULT);
	a=fastRound(v.a*BIT_4_1_MULT);
 
	return *this;
};
bgra_5551&bgra_5551::operator=(const abgr_4			&v){
	r=fastRound(v.r*BIT_4_5_MULT);
	g=fastRound(v.g*BIT_4_5_MULT);
	b=fastRound(v.b*BIT_4_5_MULT);
	a=fastRound(v.a*BIT_4_1_MULT);
 
	return *this;
};
 
