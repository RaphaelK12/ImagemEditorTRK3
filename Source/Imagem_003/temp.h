rgb332
bgr233

rgb422
bgr224
rgb242
bgr242

rgb565
bgr565

rgba5551
argb1555
bgra5551
abgr1555

rgb484
bgr484

rgba3328
argb8332
bgra2338
abgr8233

rgba_4
argb_4
bgra_4
abgr_4

rgb_8u
bgr_8u
rgb_8s
bgr_8s

rgba_8u
argb_8u
bgra_8u
abgr_8u
rgba_8s
argb_8s
bgra_8s
abgr_8s

rgb_16u
bgr_16u
rgb_16s
bgr_16s

rgba_16u
bgra_16u
argb_16u
abgr_16u
rgba_16s
bgra_16s
argb_16s
abgr_16s

rgb_32si
bgr_32si
rgb_32ui
bgr_32ui
rgb_32f
bgr_32f

rgba_32si
bgra_32si
argb_32si
abgr_32si

rgba_32ui
bgra_32ui
argb_32ui
abgr_32ui
rgba_32f
bgra_32f
argb_32f
abgr_32f

rgba_9995
argb_5999
rgba_10_10_6_6
abgr_10_10_6_6
rgba_10_10_10_2
abgr_2_10_10_10
rgb_11_11_10
bgr_10_11_11
rgb_10_12_10
bgr_10_12_10
rg_24_8









/*
struct rgb332{
	ushort r:3;
	ushort g:3;
	ushort b:2;
	rgb332& operator = (rgb332          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb332& operator = (bgr233          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb332& operator = (rgb422          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_2_3_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb332& operator = (bgr224          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_2_3_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb332& operator = (rgb242          &v)_{
		r=v.r*BIT_2_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb332& operator = (bgr242          &v)_{
		r=v.r*BIT_2_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb332& operator = (rgb565          &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_6_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgr565          &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_6_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (argb1555        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgb484          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgr484          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgba3328        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb332& operator = (argb8332        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb332& operator = (bgra2338        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb332& operator = (abgr8233        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb332& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (argb_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_3_MULT+0.5;
		g=v.g*BIT_9_3_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_3_MULT+0.5;
		g=v.g*BIT_9_3_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_3_MULT+0.5;
		g=v.g*BIT_11_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_3_MULT+0.5;
		g=v.g*BIT_11_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_12_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_12_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	rgb332& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=0;
		return *this;
	}
};

struct bgr233 {
	ushort b:2;
	ushort g:3;
	ushort r:3;
	bgr233& operator = (rgb332          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr233& operator = (bgr233          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr233& operator = (rgb422          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_2_3_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr233& operator = (bgr224          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_2_3_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr233& operator = (rgb242          &v)_{
		r=v.r*BIT_2_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr233& operator = (bgr242          &v)_{
		r=v.r*BIT_2_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr233& operator = (rgb565          &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_6_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgr565          &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_6_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (argb1555        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgb484          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgr484          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgba3328        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr233& operator = (argb8332        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr233& operator = (bgra2338        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr233& operator = (abgr8233        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr233& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (argb_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_3_MULT+0.5;
		g=v.g*BIT_9_3_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_3_MULT+0.5;
		g=v.g*BIT_9_3_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_3_MULT+0.5;
		g=v.g*BIT_11_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_3_MULT+0.5;
		g=v.g*BIT_11_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_12_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_12_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	bgr233& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=0;
		return *this;
	}
};



//		4 2 2
struct rgb422 {
	ushort r:4;
	ushort g:2;
	ushort b:2;
	rgb422& operator = (rgb332          &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_2_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb422& operator = (bgr233          &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_2_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb422& operator = (rgb422          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb422& operator = (bgr224          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb422& operator = (rgb242          &v)_{
		r=v.r*BIT_2_4_MULT+0.5;
		g=v.g*BIT_4_2_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb422& operator = (bgr242          &v)_{
		r=v.r*BIT_2_4_MULT+0.5;
		g=v.g*BIT_4_2_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb422& operator = (rgb565          &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_6_2_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgr565          &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_6_2_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_2_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (argb1555        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_2_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_2_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_2_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgb484          &v)_{
		r=v.r;
		g=v.g*BIT_8_2_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgr484          &v)_{
		r=v.r;
		g=v.g*BIT_8_2_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_2_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb422& operator = (argb8332        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_2_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb422& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_2_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb422& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_2_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb422& operator = (rgba_4          &v)_{
		r=v.r;
		g=v.g*BIT_4_2_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (argb_4          &v)_{
		r=v.r;
		g=v.g*BIT_4_2_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgra_4          &v)_{
		r=v.r;
		g=v.g*BIT_4_2_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (abgr_4          &v)_{
		r=v.r;
		g=v.g*BIT_4_2_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_2_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_2_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_2_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_2_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_2_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_2_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_2_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_2_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_2_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_2_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_2_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_2_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_2_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_2_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_2_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_2_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_2_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_2_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_2_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_2_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_2_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_2_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_2_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_2_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_2_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_2_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_2_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_2_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_2_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_2_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_2_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_2_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_2_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_2_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_2_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_2_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_2_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_2_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_2_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_2_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_2_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_2_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_4_MULT+0.5;
		g=v.g*BIT_9_2_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_4_MULT+0.5;
		g=v.g*BIT_9_2_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_2_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_2_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_2_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_2_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_4_MULT+0.5;
		g=v.g*BIT_11_2_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_4_MULT+0.5;
		g=v.g*BIT_11_2_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_12_2_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_12_2_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	rgb422& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_4_MULT+0.5;
		g=v.g*BIT_8_2_MULT+0.5;
		b=0;
		return *this;
	}
};
struct bgr224 {
	ushort b:2;
	ushort g:2;
	ushort r:4;
	bgr224& operator = (rgb332          &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_2_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr224& operator = (bgr233          &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_2_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr224& operator = (rgb422          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr224& operator = (bgr224          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr224& operator = (rgb242          &v)_{
		r=v.r*BIT_2_4_MULT+0.5;
		g=v.g*BIT_4_2_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr224& operator = (bgr242          &v)_{
		r=v.r*BIT_2_4_MULT+0.5;
		g=v.g*BIT_4_2_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr224& operator = (rgb565          &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_6_2_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgr565          &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_6_2_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_2_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (argb1555        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_2_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_2_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_2_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgb484          &v)_{
		r=v.r;
		g=v.g*BIT_8_2_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgr484          &v)_{
		r=v.r;
		g=v.g*BIT_8_2_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_2_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr224& operator = (argb8332        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_2_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr224& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_2_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr224& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_2_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr224& operator = (rgba_4          &v)_{
		r=v.r;
		g=v.g*BIT_4_2_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (argb_4          &v)_{
		r=v.r;
		g=v.g*BIT_4_2_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgra_4          &v)_{
		r=v.r;
		g=v.g*BIT_4_2_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (abgr_4          &v)_{
		r=v.r;
		g=v.g*BIT_4_2_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_2_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_2_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_2_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_2_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_2_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_2_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_2_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_2_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_2_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_2_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_2_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_2_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_2_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_2_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_2_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_2_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_2_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_2_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_2_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_2_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_2_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_2_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_2_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_2_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_2_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_2_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_2_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_2_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_2_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_2_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_2_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_2_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_2_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_2_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_2_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_2_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_2_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_2_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_2_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_2_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_2_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_2_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_4_MULT+0.5;
		g=v.g*BIT_9_2_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_4_MULT+0.5;
		g=v.g*BIT_9_2_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_2_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_2_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_2_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_2_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_4_MULT+0.5;
		g=v.g*BIT_11_2_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_4_MULT+0.5;
		g=v.g*BIT_11_2_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_12_2_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_12_2_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	bgr224& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_4_MULT+0.5;
		g=v.g*BIT_8_2_MULT+0.5;
		b=0;
		return *this;
	}
};

struct rgb242 {
	ushort r:2;
	ushort g:4;
	ushort b:2;
	rgb242& operator = (rgb332          &v)_{
		r=v.r*BIT_3_2_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb242& operator = (bgr233          &v)_{
		r=v.r*BIT_3_2_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb242& operator = (rgb422          &v)_{
		r=v.r*BIT_4_2_MULT+0.5;
		g=v.g*BIT_2_4_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb242& operator = (bgr224          &v)_{
		r=v.r*BIT_4_2_MULT+0.5;
		g=v.g*BIT_2_4_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb242& operator = (rgb242          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb242& operator = (bgr242          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb242& operator = (rgb565          &v)_{
		r=v.r*BIT_5_2_MULT+0.5;
		g=v.g*BIT_6_4_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgr565          &v)_{
		r=v.r*BIT_5_2_MULT+0.5;
		g=v.g*BIT_6_4_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_2_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (argb1555        &v)_{
		r=v.r*BIT_5_2_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_2_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_2_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgb484          &v)_{
		r=v.r*BIT_4_2_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgr484          &v)_{
		r=v.r*BIT_4_2_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_2_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb242& operator = (argb8332        &v)_{
		r=v.r*BIT_3_2_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb242& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_2_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb242& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_2_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb242& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_2_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (argb_4          &v)_{
		r=v.r*BIT_4_2_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_2_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_2_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_2_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_2_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_2_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_2_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_2_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_2_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_2_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_2_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_2_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_2_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_2_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_2_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_2_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_2_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_2_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_2_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_2_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_2_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_2_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_2_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_2_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_2_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_2_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_2_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_2_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_2_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_2_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_2_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_2_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_2_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_2_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_2_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_2_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_2_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_2_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_2_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_2_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_2_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_2_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_2_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_2_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_2_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_2_MULT+0.5;
		g=v.g*BIT_9_4_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_2_MULT+0.5;
		g=v.g*BIT_9_4_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_2_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_2_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_2_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_2_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_2_MULT+0.5;
		g=v.g*BIT_11_4_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_2_MULT+0.5;
		g=v.g*BIT_11_4_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_2_MULT+0.5;
		g=v.g*BIT_12_4_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_12_2_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	rgb242& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_2_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=0;
		return *this;
	}
};
struct bgr242 {
	ushort b:2;
	ushort g:4;
	ushort r:2;
	bgr242& operator = (rgb332          &v)_{
		r=v.r*BIT_3_2_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr242& operator = (bgr233          &v)_{
		r=v.r*BIT_3_2_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr242& operator = (rgb422          &v)_{
		r=v.r*BIT_4_2_MULT+0.5;
		g=v.g*BIT_2_4_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr242& operator = (bgr224          &v)_{
		r=v.r*BIT_4_2_MULT+0.5;
		g=v.g*BIT_2_4_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr242& operator = (rgb242          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr242& operator = (bgr242          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr242& operator = (rgb565          &v)_{
		r=v.r*BIT_5_2_MULT+0.5;
		g=v.g*BIT_6_4_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgr565          &v)_{
		r=v.r*BIT_5_2_MULT+0.5;
		g=v.g*BIT_6_4_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_2_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (argb1555        &v)_{
		r=v.r*BIT_5_2_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_2_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_2_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgb484          &v)_{
		r=v.r*BIT_4_2_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgr484          &v)_{
		r=v.r*BIT_4_2_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_2_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr242& operator = (argb8332        &v)_{
		r=v.r*BIT_3_2_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr242& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_2_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr242& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_2_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr242& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_2_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (argb_4          &v)_{
		r=v.r*BIT_4_2_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_2_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_2_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_2_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_2_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_2_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_2_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_2_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_2_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_2_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_2_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_2_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_2_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_2_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_2_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_2_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_2_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_2_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_2_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_2_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_2_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_2_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_2_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_2_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_2_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_2_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_2_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_2_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_2_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_2_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_2_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_2_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_2_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_2_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_2_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_2_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_2_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_2_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_2_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_2_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_2_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_2_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_2_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_2_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_2_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_2_MULT+0.5;
		g=v.g*BIT_9_4_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_2_MULT+0.5;
		g=v.g*BIT_9_4_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_2_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_2_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_2_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_2_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_2_MULT+0.5;
		g=v.g*BIT_11_4_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_2_MULT+0.5;
		g=v.g*BIT_11_4_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_2_MULT+0.5;
		g=v.g*BIT_12_4_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_12_2_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		return *this;
	}
	bgr242& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_2_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=0;
		return *this;
	}
};



//		16 bits
//		6 6 5
struct rgb565 {
	ushort r:5;
	ushort g:6;
	ushort b:5;
	rgb565& operator = (rgb332          &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgr233          &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgb422          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_2_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgr224          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_2_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgb242          &v)_{
		r=v.r*BIT_2_5_MULT+0.5;
		g=v.g*BIT_4_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgr242          &v)_{
		r=v.r*BIT_2_5_MULT+0.5;
		g=v.g*BIT_4_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgb565          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb565& operator = (bgr565          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb565& operator = (rgba5551        &v)_{
		r=v.r;
		g=v.g*BIT_5_6_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb565& operator = (argb1555        &v)_{
		r=v.r;
		g=v.g*BIT_5_6_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb565& operator = (bgra5551        &v)_{
		r=v.r;
		g=v.g*BIT_5_6_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb565& operator = (abgr1555        &v)_{
		r=v.r;
		g=v.g*BIT_5_6_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb565& operator = (rgb484          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_8_6_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgr484          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_8_6_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (argb8332        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_6_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (argb_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_6_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_6_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_6_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_6_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_6_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_6_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_6_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_6_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_6_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_6_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_6_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_6_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_6_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_6_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_6_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_6_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_6_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_6_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_6_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_6_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_6_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_6_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_6_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_6_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_6_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_6_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_6_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_6_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_6_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_6_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_6_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_6_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_6_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_6_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_6_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_6_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_6_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_6_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_6_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_6_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_6_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_6_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_6_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_6_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_6_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_5_MULT+0.5;
		g=v.g*BIT_9_6_MULT+0.5;
		b=v.b*BIT_9_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_5_MULT+0.5;
		g=v.g*BIT_9_6_MULT+0.5;
		b=v.b*BIT_9_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_6_MULT+0.5;
		b=v.b*BIT_6_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_6_MULT+0.5;
		b=v.b*BIT_6_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_6_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_6_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_5_MULT+0.5;
		g=v.g*BIT_11_6_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_5_MULT+0.5;
		g=v.g*BIT_11_6_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_12_6_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_12_6_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		return *this;
	}
	rgb565& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_5_MULT+0.5;
		g=v.g*BIT_8_6_MULT+0.5;
		b=0;
		return *this;
	}
};

struct bgr565 {
	ushort b:5;
	ushort g:6;
	ushort r:5;
	bgr565& operator = (rgb332          &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgr233          &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgb422          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_2_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgr224          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_2_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgb242          &v)_{
		r=v.r*BIT_2_5_MULT+0.5;
		g=v.g*BIT_4_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgr242          &v)_{
		r=v.r*BIT_2_5_MULT+0.5;
		g=v.g*BIT_4_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgb565          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr565& operator = (bgr565          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr565& operator = (rgba5551        &v)_{
		r=v.r;
		g=v.g*BIT_5_6_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr565& operator = (argb1555        &v)_{
		r=v.r;
		g=v.g*BIT_5_6_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr565& operator = (bgra5551        &v)_{
		r=v.r;
		g=v.g*BIT_5_6_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr565& operator = (abgr1555        &v)_{
		r=v.r;
		g=v.g*BIT_5_6_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr565& operator = (rgb484          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_8_6_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgr484          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_8_6_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (argb8332        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_6_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_6_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (argb_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_6_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_6_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_6_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_6_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_6_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_6_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_6_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_6_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_6_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_6_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_6_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_6_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_6_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_6_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_6_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_6_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_6_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_6_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_6_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_6_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_6_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_6_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_6_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_6_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_6_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_6_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_6_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_6_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_6_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_6_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_6_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_6_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_6_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_6_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_6_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_6_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_6_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_6_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_6_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_6_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_6_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_6_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_6_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_6_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_6_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_5_MULT+0.5;
		g=v.g*BIT_9_6_MULT+0.5;
		b=v.b*BIT_9_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_5_MULT+0.5;
		g=v.g*BIT_9_6_MULT+0.5;
		b=v.b*BIT_9_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_6_MULT+0.5;
		b=v.b*BIT_6_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_6_MULT+0.5;
		b=v.b*BIT_6_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_6_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_6_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_5_MULT+0.5;
		g=v.g*BIT_11_6_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_5_MULT+0.5;
		g=v.g*BIT_11_6_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_12_6_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_12_6_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		return *this;
	}
	bgr565& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_5_MULT+0.5;
		g=v.g*BIT_8_6_MULT+0.5;
		b=0;
		return *this;
	}
};



//		5 5 5 1
struct rgba5551 {
	ushort r:5;
	ushort g:5;
	ushort b:5;
	ushort a:1;
	rgba5551& operator = (rgb332          &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (bgr233          &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (rgb422          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_2_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (bgr224          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_2_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (rgb242          &v)_{
		r=v.r*BIT_2_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (bgr242          &v)_{
		r=v.r*BIT_2_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (rgb565          &v)_{
		r=v.r;
		g=v.g*BIT_6_5_MULT+0.5;
		b=v.b;
		a=1;
		return *this;
	}
	rgba5551& operator = (bgr565          &v)_{
		r=v.r;
		g=v.g*BIT_6_5_MULT+0.5;
		b=v.b;
		a=1;
		return *this;
	}
	rgba5551& operator = (rgba5551        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba5551& operator = (argb1555        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba5551& operator = (bgra5551        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba5551& operator = (abgr1555        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba5551& operator = (rgb484          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (bgr484          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (argb8332        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=v.a*BIT_4_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (argb_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=v.a*BIT_4_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=v.a*BIT_4_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=v.a*BIT_4_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=(v.a+127.0)*BIT_8_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=(v.a+127.0)*BIT_8_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=(v.a+127.0)*BIT_8_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=(v.a+127.0)*BIT_8_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=v.a*BIT_16_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=v.a*BIT_16_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=v.a*BIT_16_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=v.a*BIT_16_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=v.a*BIT_32_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=v.a*BIT_32_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=v.a*BIT_32_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=v.a*BIT_32_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=v.a*BIT_f_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=v.a*BIT_f_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=v.a*BIT_f_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=v.a*BIT_f_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_5_MULT+0.5;
		g=v.g*BIT_9_5_MULT+0.5;
		b=v.b*BIT_9_5_MULT+0.5;
		a=v.a*BIT_9_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_5_MULT+0.5;
		g=v.g*BIT_9_5_MULT+0.5;
		b=v.b*BIT_9_5_MULT+0.5;
		a=v.a*BIT_9_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_5_MULT+0.5;
		b=v.b*BIT_6_5_MULT+0.5;
		a=v.a*BIT_6_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_5_MULT+0.5;
		b=v.b*BIT_6_5_MULT+0.5;
		a=v.a*BIT_6_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=v.a*BIT_2_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=v.a*BIT_2_1_MULT+0.5;
		return *this;
	}
	rgba5551& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_5_MULT+0.5;
		g=v.g*BIT_11_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_5_MULT+0.5;
		g=v.g*BIT_11_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_12_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_12_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=1;
		return *this;
	}
	rgba5551& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=0;
		a=1;
		return *this;
	}
} ;
struct argb1555 {
	ushort a:1;
	ushort r:5;
	ushort g:5;
	ushort b:5;
	argb1555& operator = (rgb332          &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (bgr233          &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (rgb422          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_2_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (bgr224          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_2_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (rgb242          &v)_{
		r=v.r*BIT_2_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (bgr242          &v)_{
		r=v.r*BIT_2_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (rgb565          &v)_{
		r=v.r;
		g=v.g*BIT_6_5_MULT+0.5;
		b=v.b;
		a=1;
		return *this;
	}
	argb1555& operator = (bgr565          &v)_{
		r=v.r;
		g=v.g*BIT_6_5_MULT+0.5;
		b=v.b;
		a=1;
		return *this;
	}
	argb1555& operator = (rgba5551        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb1555& operator = (argb1555        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb1555& operator = (bgra5551        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb1555& operator = (abgr1555        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb1555& operator = (rgb484          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (bgr484          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (argb8332        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=v.a*BIT_4_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (argb_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=v.a*BIT_4_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=v.a*BIT_4_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=v.a*BIT_4_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=(v.a+127.0)*BIT_8_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=(v.a+127.0)*BIT_8_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=(v.a+127.0)*BIT_8_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=(v.a+127.0)*BIT_8_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=v.a*BIT_16_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=v.a*BIT_16_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=v.a*BIT_16_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=v.a*BIT_16_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=v.a*BIT_32_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=v.a*BIT_32_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=v.a*BIT_32_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=v.a*BIT_32_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=v.a*BIT_f_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=v.a*BIT_f_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=v.a*BIT_f_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=v.a*BIT_f_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_5_MULT+0.5;
		g=v.g*BIT_9_5_MULT+0.5;
		b=v.b*BIT_9_5_MULT+0.5;
		a=v.a*BIT_9_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_5_MULT+0.5;
		g=v.g*BIT_9_5_MULT+0.5;
		b=v.b*BIT_9_5_MULT+0.5;
		a=v.a*BIT_9_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_5_MULT+0.5;
		b=v.b*BIT_6_5_MULT+0.5;
		a=v.a*BIT_6_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_5_MULT+0.5;
		b=v.b*BIT_6_5_MULT+0.5;
		a=v.a*BIT_6_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=v.a*BIT_2_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=v.a*BIT_2_1_MULT+0.5;
		return *this;
	}
	argb1555& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_5_MULT+0.5;
		g=v.g*BIT_11_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_5_MULT+0.5;
		g=v.g*BIT_11_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_12_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_12_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=1;
		return *this;
	}
	argb1555& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=0;
		a=1;
		return *this;
	}
} ;

struct bgra5551 {
	ushort b:5;
	ushort g:5;
	ushort r:5;
	ushort a:1;
	bgra5551& operator = (rgb332          &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (bgr233          &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (rgb422          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_2_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (bgr224          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_2_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (rgb242          &v)_{
		r=v.r*BIT_2_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (bgr242          &v)_{
		r=v.r*BIT_2_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (rgb565          &v)_{
		r=v.r;
		g=v.g*BIT_6_5_MULT+0.5;
		b=v.b;
		a=1;
		return *this;
	}
	bgra5551& operator = (bgr565          &v)_{
		r=v.r;
		g=v.g*BIT_6_5_MULT+0.5;
		b=v.b;
		a=1;
		return *this;
	}
	bgra5551& operator = (rgba5551        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra5551& operator = (argb1555        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra5551& operator = (bgra5551        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra5551& operator = (abgr1555        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra5551& operator = (rgb484          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (bgr484          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (argb8332        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=v.a*BIT_4_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (argb_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=v.a*BIT_4_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=v.a*BIT_4_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=v.a*BIT_4_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=(v.a+127.0)*BIT_8_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=(v.a+127.0)*BIT_8_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=(v.a+127.0)*BIT_8_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=(v.a+127.0)*BIT_8_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=v.a*BIT_16_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=v.a*BIT_16_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=v.a*BIT_16_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=v.a*BIT_16_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=v.a*BIT_32_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=v.a*BIT_32_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=v.a*BIT_32_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=v.a*BIT_32_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=v.a*BIT_f_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=v.a*BIT_f_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=v.a*BIT_f_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=v.a*BIT_f_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_5_MULT+0.5;
		g=v.g*BIT_9_5_MULT+0.5;
		b=v.b*BIT_9_5_MULT+0.5;
		a=v.a*BIT_9_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_5_MULT+0.5;
		g=v.g*BIT_9_5_MULT+0.5;
		b=v.b*BIT_9_5_MULT+0.5;
		a=v.a*BIT_9_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_5_MULT+0.5;
		b=v.b*BIT_6_5_MULT+0.5;
		a=v.a*BIT_6_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_5_MULT+0.5;
		b=v.b*BIT_6_5_MULT+0.5;
		a=v.a*BIT_6_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=v.a*BIT_2_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=v.a*BIT_2_1_MULT+0.5;
		return *this;
	}
	bgra5551& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_5_MULT+0.5;
		g=v.g*BIT_11_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_5_MULT+0.5;
		g=v.g*BIT_11_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_12_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_12_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=1;
		return *this;
	}
	bgra5551& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=0;
		a=1;
		return *this;
	}
} ;
struct abgr1555 {
	ushort a:1;
	ushort b:5;
	ushort g:5;
	ushort r:5;
	abgr1555& operator = (rgb332          &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (bgr233          &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (rgb422          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_2_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (bgr224          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_2_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (rgb242          &v)_{
		r=v.r*BIT_2_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (bgr242          &v)_{
		r=v.r*BIT_2_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (rgb565          &v)_{
		r=v.r;
		g=v.g*BIT_6_5_MULT+0.5;
		b=v.b;
		a=1;
		return *this;
	}
	abgr1555& operator = (bgr565          &v)_{
		r=v.r;
		g=v.g*BIT_6_5_MULT+0.5;
		b=v.b;
		a=1;
		return *this;
	}
	abgr1555& operator = (rgba5551        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr1555& operator = (argb1555        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr1555& operator = (bgra5551        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr1555& operator = (abgr1555        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr1555& operator = (rgb484          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (bgr484          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (argb8332        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_5_MULT+0.5;
		g=v.g*BIT_3_5_MULT+0.5;
		b=v.b*BIT_2_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=v.a*BIT_4_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (argb_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=v.a*BIT_4_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=v.a*BIT_4_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_5_MULT+0.5;
		g=v.g*BIT_4_5_MULT+0.5;
		b=v.b*BIT_4_5_MULT+0.5;
		a=v.a*BIT_4_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=v.b*BIT_8_5_MULT+0.5;
		a=v.a*BIT_8_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=(v.a+127.0)*BIT_8_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=(v.a+127.0)*BIT_8_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=(v.a+127.0)*BIT_8_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_5_MULT+0.5;
		g=(v.g+127.0)*BIT_8_5_MULT+0.5;
		b=(v.b+127.0)*BIT_8_5_MULT+0.5;
		a=(v.a+127.0)*BIT_8_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=v.a*BIT_16_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=v.a*BIT_16_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=v.a*BIT_16_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_5_MULT+0.5;
		g=v.g*BIT_16_5_MULT+0.5;
		b=v.b*BIT_16_5_MULT+0.5;
		a=v.a*BIT_16_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_5_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_5_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_5_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_5_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_5_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_5_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=v.a*BIT_32_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=v.a*BIT_32_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=v.a*BIT_32_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_5_MULT+0.5;
		g=v.g*BIT_32_5_MULT+0.5;
		b=v.b*BIT_32_5_MULT+0.5;
		a=v.a*BIT_32_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=v.a*BIT_f_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=v.a*BIT_f_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=v.a*BIT_f_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_5_MULT+0.5;
		g=v.g*BIT_f_5_MULT+0.5;
		b=v.b*BIT_f_5_MULT+0.5;
		a=v.a*BIT_f_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_5_MULT+0.5;
		g=v.g*BIT_9_5_MULT+0.5;
		b=v.b*BIT_9_5_MULT+0.5;
		a=v.a*BIT_9_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_5_MULT+0.5;
		g=v.g*BIT_9_5_MULT+0.5;
		b=v.b*BIT_9_5_MULT+0.5;
		a=v.a*BIT_9_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_5_MULT+0.5;
		b=v.b*BIT_6_5_MULT+0.5;
		a=v.a*BIT_6_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_5_MULT+0.5;
		b=v.b*BIT_6_5_MULT+0.5;
		a=v.a*BIT_6_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=v.a*BIT_2_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_10_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=v.a*BIT_2_1_MULT+0.5;
		return *this;
	}
	abgr1555& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_5_MULT+0.5;
		g=v.g*BIT_11_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_5_MULT+0.5;
		g=v.g*BIT_11_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_12_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_5_MULT+0.5;
		g=v.g*BIT_12_5_MULT+0.5;
		b=v.b*BIT_10_5_MULT+0.5;
		a=1;
		return *this;
	}
	abgr1555& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_5_MULT+0.5;
		g=v.g*BIT_8_5_MULT+0.5;
		b=0;
		a=1;
		return *this;
	}
} ;



//		16 bits
//		8 4 4
struct rgb484 {
	ushort r:4;
	ushort g:8;
	ushort b:4;
	rgb484& operator = (rgb332          &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgr233          &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgb422          &v)_{
		r=v.r;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgr224          &v)_{
		r=v.r;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgb242          &v)_{
		r=v.r*BIT_2_4_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgr242          &v)_{
		r=v.r*BIT_2_4_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgb565          &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgr565          &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (argb1555        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgb484          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb484& operator = (bgr484          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb484& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (argb8332        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgba_4          &v)_{
		r=v.r;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb484& operator = (argb_4          &v)_{
		r=v.r;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb484& operator = (bgra_4          &v)_{
		r=v.r;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb484& operator = (abgr_4          &v)_{
		r=v.r;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb484& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0);
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0);
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0);
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0);
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0);
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0);
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_4_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_4_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_4_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_4_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		return *this;
	}
	rgb484& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_4_MULT+0.5;
		g=v.g;
		b=0;
		return *this;
	}
} ;

struct bgr484 {
	ushort b:4;
	ushort g:8;
	ushort r:4;
	bgr484& operator = (rgb332          &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgr233          &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgb422          &v)_{
		r=v.r;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgr224          &v)_{
		r=v.r;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgb242          &v)_{
		r=v.r*BIT_2_4_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgr242          &v)_{
		r=v.r*BIT_2_4_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgb565          &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgr565          &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (argb1555        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgb484          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr484& operator = (bgr484          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr484& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (argb8332        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgba_4          &v)_{
		r=v.r;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr484& operator = (argb_4          &v)_{
		r=v.r;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr484& operator = (bgra_4          &v)_{
		r=v.r;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr484& operator = (abgr_4          &v)_{
		r=v.r;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr484& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0);
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0);
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0);
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0);
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0);
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0);
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_4_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_4_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_4_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_4_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		return *this;
	}
	bgr484& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_4_MULT+0.5;
		g=v.g;
		b=0;
		return *this;
	}
} ;



//		8 3 3 2
struct rgba3328 {
	ushort r:3;
	ushort g:3;
	ushort b:2;
	ushort a:8;
	rgba3328& operator = (rgb332          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=255;
		return *this;
	}
	rgba3328& operator = (bgr233          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=255;
		return *this;
	}
	rgba3328& operator = (rgb422          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_2_3_MULT+0.5;
		b=v.b;
		a=255;
		return *this;
	}
	rgba3328& operator = (bgr224          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_2_3_MULT+0.5;
		b=v.b;
		a=255;
		return *this;
	}
	rgba3328& operator = (rgb242          &v)_{
		r=v.r*BIT_2_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b;
		a=255;
		return *this;
	}
	rgba3328& operator = (bgr242          &v)_{
		r=v.r*BIT_2_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b;
		a=255;
		return *this;
	}
	rgba3328& operator = (rgb565          &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_6_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (bgr565          &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_6_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (argb1555        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (rgb484          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (bgr484          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (rgba3328        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba3328& operator = (argb8332        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba3328& operator = (bgra2338        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba3328& operator = (abgr8233        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba3328& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (argb_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=v.a;
		return *this;
	}
	rgba3328& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=v.a;
		return *this;
	}
	rgba3328& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=v.a;
		return *this;
	}
	rgba3328& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=v.a;
		return *this;
	}
	rgba3328& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=v.a+127;
		return *this;
	}
	rgba3328& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=v.a+127;
		return *this;
	}
	rgba3328& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=v.a+127;
		return *this;
	}
	rgba3328& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=v.a+127;
		return *this;
	}
	rgba3328& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_3_MULT+0.5;
		g=v.g*BIT_9_3_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		a=v.a*BIT_5_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_3_MULT+0.5;
		g=v.g*BIT_9_3_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		a=v.a*BIT_5_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		a=v.a*BIT_6_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		a=v.a*BIT_6_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=v.a*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=v.a*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgba3328& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_3_MULT+0.5;
		g=v.g*BIT_11_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_3_MULT+0.5;
		g=v.g*BIT_11_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_12_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_12_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=255;
		return *this;
	}
	rgba3328& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=0;
		a=255;
		return *this;
	}
} ;
struct argb8332 {
	ushort a:8;
	ushort r:3;
	ushort g:3;
	ushort b:2;
	argb8332& operator = (rgb332          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=255;
		return *this;
	}
	argb8332& operator = (bgr233          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=255;
		return *this;
	}
	argb8332& operator = (rgb422          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_2_3_MULT+0.5;
		b=v.b;
		a=255;
		return *this;
	}
	argb8332& operator = (bgr224          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_2_3_MULT+0.5;
		b=v.b;
		a=255;
		return *this;
	}
	argb8332& operator = (rgb242          &v)_{
		r=v.r*BIT_2_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b;
		a=255;
		return *this;
	}
	argb8332& operator = (bgr242          &v)_{
		r=v.r*BIT_2_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b;
		a=255;
		return *this;
	}
	argb8332& operator = (rgb565          &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_6_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (bgr565          &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_6_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (argb1555        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (rgb484          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (bgr484          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (rgba3328        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb8332& operator = (argb8332        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb8332& operator = (bgra2338        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb8332& operator = (abgr8233        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb8332& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (argb_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=v.a;
		return *this;
	}
	argb8332& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=v.a;
		return *this;
	}
	argb8332& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=v.a;
		return *this;
	}
	argb8332& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=v.a;
		return *this;
	}
	argb8332& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=v.a+127;
		return *this;
	}
	argb8332& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=v.a+127;
		return *this;
	}
	argb8332& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=v.a+127;
		return *this;
	}
	argb8332& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=v.a+127;
		return *this;
	}
	argb8332& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_3_MULT+0.5;
		g=v.g*BIT_9_3_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		a=v.a*BIT_5_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_3_MULT+0.5;
		g=v.g*BIT_9_3_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		a=v.a*BIT_5_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		a=v.a*BIT_6_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		a=v.a*BIT_6_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=v.a*BIT_2_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=v.a*BIT_2_8_MULT+0.5;
		return *this;
	}
	argb8332& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_3_MULT+0.5;
		g=v.g*BIT_11_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_3_MULT+0.5;
		g=v.g*BIT_11_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_12_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_12_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=255;
		return *this;
	}
	argb8332& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=0;
		a=255;
		return *this;
	}
} ;

struct bgra2338 {
	ushort b:3;
	ushort g:3;
	ushort r:2;
	ushort a:8;
	bgra2338& operator = (rgb332          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=255;
		return *this;
	}
	bgra2338& operator = (bgr233          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=255;
		return *this;
	}
	bgra2338& operator = (rgb422          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_2_3_MULT+0.5;
		b=v.b;
		a=255;
		return *this;
	}
	bgra2338& operator = (bgr224          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_2_3_MULT+0.5;
		b=v.b;
		a=255;
		return *this;
	}
	bgra2338& operator = (rgb242          &v)_{
		r=v.r*BIT_2_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b;
		a=255;
		return *this;
	}
	bgra2338& operator = (bgr242          &v)_{
		r=v.r*BIT_2_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b;
		a=255;
		return *this;
	}
	bgra2338& operator = (rgb565          &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_6_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (bgr565          &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_6_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (argb1555        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (rgb484          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (bgr484          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (rgba3328        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra2338& operator = (argb8332        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra2338& operator = (bgra2338        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra2338& operator = (abgr8233        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra2338& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (argb_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=v.a;
		return *this;
	}
	bgra2338& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=v.a;
		return *this;
	}
	bgra2338& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=v.a;
		return *this;
	}
	bgra2338& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=v.a;
		return *this;
	}
	bgra2338& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=v.a+127;
		return *this;
	}
	bgra2338& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=v.a+127;
		return *this;
	}
	bgra2338& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=v.a+127;
		return *this;
	}
	bgra2338& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=v.a+127;
		return *this;
	}
	bgra2338& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_3_MULT+0.5;
		g=v.g*BIT_9_3_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		a=v.a*BIT_5_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_3_MULT+0.5;
		g=v.g*BIT_9_3_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		a=v.a*BIT_5_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		a=v.a*BIT_6_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		a=v.a*BIT_6_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=v.a*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=v.a*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgra2338& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_3_MULT+0.5;
		g=v.g*BIT_11_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_3_MULT+0.5;
		g=v.g*BIT_11_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_12_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_12_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=255;
		return *this;
	}
	bgra2338& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=0;
		a=255;
		return *this;
	}
} ;
struct abgr8233 {
	ushort a:8;
	ushort b:3;
	ushort g:3;
	ushort r:2;
	abgr8233& operator = (rgb332          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=255;
		return *this;
	}
	abgr8233& operator = (bgr233          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=255;
		return *this;
	}
	abgr8233& operator = (rgb422          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_2_3_MULT+0.5;
		b=v.b;
		a=255;
		return *this;
	}
	abgr8233& operator = (bgr224          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_2_3_MULT+0.5;
		b=v.b;
		a=255;
		return *this;
	}
	abgr8233& operator = (rgb242          &v)_{
		r=v.r*BIT_2_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b;
		a=255;
		return *this;
	}
	abgr8233& operator = (bgr242          &v)_{
		r=v.r*BIT_2_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b;
		a=255;
		return *this;
	}
	abgr8233& operator = (rgb565          &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_6_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (bgr565          &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_6_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (argb1555        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_3_MULT+0.5;
		g=v.g*BIT_5_3_MULT+0.5;
		b=v.b*BIT_5_2_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (rgb484          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (bgr484          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (rgba3328        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr8233& operator = (argb8332        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr8233& operator = (bgra2338        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr8233& operator = (abgr8233        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr8233& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (argb_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_3_MULT+0.5;
		g=v.g*BIT_4_3_MULT+0.5;
		b=v.b*BIT_4_2_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=v.a;
		return *this;
	}
	abgr8233& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=v.a;
		return *this;
	}
	abgr8233& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=v.a;
		return *this;
	}
	abgr8233& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=v.b*BIT_8_2_MULT+0.5;
		a=v.a;
		return *this;
	}
	abgr8233& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=v.a+127;
		return *this;
	}
	abgr8233& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=v.a+127;
		return *this;
	}
	abgr8233& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=v.a+127;
		return *this;
	}
	abgr8233& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_3_MULT+0.5;
		g=(v.g+127.0)*BIT_8_3_MULT+0.5;
		b=(v.b+127.0)*BIT_8_2_MULT+0.5;
		a=v.a+127;
		return *this;
	}
	abgr8233& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_3_MULT+0.5;
		g=v.g*BIT_16_3_MULT+0.5;
		b=v.b*BIT_16_2_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_3_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_3_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_2_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_3_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_3_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_2_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_3_MULT+0.5;
		g=v.g*BIT_32_3_MULT+0.5;
		b=v.b*BIT_32_2_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_3_MULT+0.5;
		g=v.g*BIT_f_3_MULT+0.5;
		b=v.b*BIT_f_2_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_3_MULT+0.5;
		g=v.g*BIT_9_3_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		a=v.a*BIT_5_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_3_MULT+0.5;
		g=v.g*BIT_9_3_MULT+0.5;
		b=v.b*BIT_9_2_MULT+0.5;
		a=v.a*BIT_5_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		a=v.a*BIT_6_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_6_2_MULT+0.5;
		a=v.a*BIT_6_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=v.a*BIT_2_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_10_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=v.a*BIT_2_8_MULT+0.5;
		return *this;
	}
	abgr8233& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_3_MULT+0.5;
		g=v.g*BIT_11_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_3_MULT+0.5;
		g=v.g*BIT_11_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_12_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_3_MULT+0.5;
		g=v.g*BIT_12_3_MULT+0.5;
		b=v.b*BIT_10_2_MULT+0.5;
		a=255;
		return *this;
	}
	abgr8233& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_3_MULT+0.5;
		g=v.g*BIT_8_3_MULT+0.5;
		b=0;
		a=255;
		return *this;
	}
} ;



//		4 4 4 4
struct rgba_4 {
	ushort r:4;
	ushort g:4;
	ushort b:4;
	ushort a:4;
	rgba_4& operator = (rgb332          &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (bgr233          &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (rgb422          &v)_{
		r=v.r;
		g=v.g*BIT_2_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (bgr224          &v)_{
		r=v.r;
		g=v.g*BIT_2_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (rgb242          &v)_{
		r=v.r*BIT_2_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (bgr242          &v)_{
		r=v.r*BIT_2_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (rgb565          &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_6_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (bgr565          &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_6_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=v.a*BIT_1_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (argb1555        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=v.a*BIT_1_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=v.a*BIT_1_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=v.a*BIT_1_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (rgb484          &v)_{
		r=v.r;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b;
		a=15;
		return *this;
	}
	rgba_4& operator = (bgr484          &v)_{
		r=v.r;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b;
		a=15;
		return *this;
	}
	rgba_4& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (argb8332        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (rgba_4          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_4& operator = (argb_4          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_4& operator = (bgra_4          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_4& operator = (abgr_4          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_4& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=(v.a+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=(v.a+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=(v.a+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=(v.a+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=v.a*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=v.a*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=v.a*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=v.a*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=v.a*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=v.a*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=v.a*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=v.a*BIT_32_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=v.a*BIT_f_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=v.a*BIT_f_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=v.a*BIT_f_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=v.a*BIT_f_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_4_MULT+0.5;
		g=v.g*BIT_9_4_MULT+0.5;
		b=v.b*BIT_9_4_MULT+0.5;
		a=v.a*BIT_5_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_4_MULT+0.5;
		g=v.g*BIT_9_4_MULT+0.5;
		b=v.b*BIT_9_4_MULT+0.5;
		a=v.a*BIT_5_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_6_4_MULT+0.5;
		a=v.a*BIT_6_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_6_4_MULT+0.5;
		a=v.a*BIT_6_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=v.a*BIT_2_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=v.a*BIT_2_4_MULT+0.5;
		return *this;
	}
	rgba_4& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_4_MULT+0.5;
		g=v.g*BIT_11_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_4_MULT+0.5;
		g=v.g*BIT_11_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_12_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_12_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=15;
		return *this;
	}
	rgba_4& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=0;
		a=15;
		return *this;
	}
} ;
struct argb_4 {
	ushort a:4;
	ushort r:4;
	ushort g:4;
	ushort b:4;
	argb_4& operator = (rgb332          &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (bgr233          &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (rgb422          &v)_{
		r=v.r;
		g=v.g*BIT_2_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (bgr224          &v)_{
		r=v.r;
		g=v.g*BIT_2_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (rgb242          &v)_{
		r=v.r*BIT_2_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (bgr242          &v)_{
		r=v.r*BIT_2_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (rgb565          &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_6_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (bgr565          &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_6_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=v.a*BIT_1_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (argb1555        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=v.a*BIT_1_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=v.a*BIT_1_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=v.a*BIT_1_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (rgb484          &v)_{
		r=v.r;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b;
		a=15;
		return *this;
	}
	argb_4& operator = (bgr484          &v)_{
		r=v.r;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b;
		a=15;
		return *this;
	}
	argb_4& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (argb8332        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (rgba_4          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb_4& operator = (argb_4          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb_4& operator = (bgra_4          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb_4& operator = (abgr_4          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb_4& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=(v.a+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=(v.a+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=(v.a+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=(v.a+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=v.a*BIT_16_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=v.a*BIT_16_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=v.a*BIT_16_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=v.a*BIT_16_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=v.a*BIT_32_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=v.a*BIT_32_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=v.a*BIT_32_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=v.a*BIT_32_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=v.a*BIT_f_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=v.a*BIT_f_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=v.a*BIT_f_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=v.a*BIT_f_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_4_MULT+0.5;
		g=v.g*BIT_9_4_MULT+0.5;
		b=v.b*BIT_9_4_MULT+0.5;
		a=v.a*BIT_5_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_4_MULT+0.5;
		g=v.g*BIT_9_4_MULT+0.5;
		b=v.b*BIT_9_4_MULT+0.5;
		a=v.a*BIT_5_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_6_4_MULT+0.5;
		a=v.a*BIT_6_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_6_4_MULT+0.5;
		a=v.a*BIT_6_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=v.a*BIT_2_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=v.a*BIT_2_4_MULT+0.5;
		return *this;
	}
	argb_4& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_4_MULT+0.5;
		g=v.g*BIT_11_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_4_MULT+0.5;
		g=v.g*BIT_11_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_12_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_12_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=15;
		return *this;
	}
	argb_4& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=0;
		a=15;
		return *this;
	}
} ;

struct bgra_4 {
	ushort b:4;
	ushort g:4;
	ushort r:4;
	ushort a:4;
	bgra_4& operator = (rgb332          &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (bgr233          &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (rgb422          &v)_{
		r=v.r;
		g=v.g*BIT_2_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (bgr224          &v)_{
		r=v.r;
		g=v.g*BIT_2_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (rgb242          &v)_{
		r=v.r*BIT_2_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (bgr242          &v)_{
		r=v.r*BIT_2_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (rgb565          &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_6_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (bgr565          &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_6_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=v.a*BIT_1_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (argb1555        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=v.a*BIT_1_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=v.a*BIT_1_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=v.a*BIT_1_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (rgb484          &v)_{
		r=v.r;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b;
		a=15;
		return *this;
	}
	bgra_4& operator = (bgr484          &v)_{
		r=v.r;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b;
		a=15;
		return *this;
	}
	bgra_4& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (argb8332        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (rgba_4          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra_4& operator = (argb_4          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra_4& operator = (bgra_4          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra_4& operator = (abgr_4          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra_4& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=(v.a+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=(v.a+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=(v.a+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=(v.a+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=v.a*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=v.a*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=v.a*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=v.a*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=v.a*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=v.a*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=v.a*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=v.a*BIT_32_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=v.a*BIT_f_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=v.a*BIT_f_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=v.a*BIT_f_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=v.a*BIT_f_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_4_MULT+0.5;
		g=v.g*BIT_9_4_MULT+0.5;
		b=v.b*BIT_9_4_MULT+0.5;
		a=v.a*BIT_5_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_4_MULT+0.5;
		g=v.g*BIT_9_4_MULT+0.5;
		b=v.b*BIT_9_4_MULT+0.5;
		a=v.a*BIT_5_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_6_4_MULT+0.5;
		a=v.a*BIT_6_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_6_4_MULT+0.5;
		a=v.a*BIT_6_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=v.a*BIT_2_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=v.a*BIT_2_4_MULT+0.5;
		return *this;
	}
	bgra_4& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_4_MULT+0.5;
		g=v.g*BIT_11_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_4_MULT+0.5;
		g=v.g*BIT_11_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_12_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_12_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=15;
		return *this;
	}
	bgra_4& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=0;
		a=15;
		return *this;
	}
} ;
struct abgr_4 {
	ushort a:4;
	ushort b:4;
	ushort g:4;
	ushort r:4;
	abgr_4& operator = (rgb332          &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (bgr233          &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (rgb422          &v)_{
		r=v.r;
		g=v.g*BIT_2_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (bgr224          &v)_{
		r=v.r;
		g=v.g*BIT_2_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (rgb242          &v)_{
		r=v.r*BIT_2_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (bgr242          &v)_{
		r=v.r*BIT_2_4_MULT+0.5;
		g=v.g;
		b=v.b*BIT_2_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (rgb565          &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_6_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (bgr565          &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_6_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=v.a*BIT_1_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (argb1555        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=v.a*BIT_1_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=v.a*BIT_1_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_4_MULT+0.5;
		g=v.g*BIT_5_4_MULT+0.5;
		b=v.b*BIT_5_4_MULT+0.5;
		a=v.a*BIT_1_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (rgb484          &v)_{
		r=v.r;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b;
		a=15;
		return *this;
	}
	abgr_4& operator = (bgr484          &v)_{
		r=v.r;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b;
		a=15;
		return *this;
	}
	abgr_4& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (argb8332        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_4_MULT+0.5;
		g=v.g*BIT_3_4_MULT+0.5;
		b=v.b*BIT_2_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (rgba_4          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr_4& operator = (argb_4          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr_4& operator = (bgra_4          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr_4& operator = (abgr_4          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr_4& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=v.b*BIT_8_4_MULT+0.5;
		a=v.a*BIT_8_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=(v.a+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=(v.a+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=(v.a+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_4_MULT+0.5;
		g=(v.g+127.0)*BIT_8_4_MULT+0.5;
		b=(v.b+127.0)*BIT_8_4_MULT+0.5;
		a=(v.a+127.0)*BIT_8_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=v.a*BIT_16_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=v.a*BIT_16_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=v.a*BIT_16_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_4_MULT+0.5;
		g=v.g*BIT_16_4_MULT+0.5;
		b=v.b*BIT_16_4_MULT+0.5;
		a=v.a*BIT_16_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_4_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_4_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_4_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_4_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_4_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_4_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=v.a*BIT_32_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=v.a*BIT_32_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=v.a*BIT_32_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_4_MULT+0.5;
		g=v.g*BIT_32_4_MULT+0.5;
		b=v.b*BIT_32_4_MULT+0.5;
		a=v.a*BIT_32_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=v.a*BIT_f_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=v.a*BIT_f_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=v.a*BIT_f_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_4_MULT+0.5;
		g=v.g*BIT_f_4_MULT+0.5;
		b=v.b*BIT_f_4_MULT+0.5;
		a=v.a*BIT_f_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_4_MULT+0.5;
		g=v.g*BIT_9_4_MULT+0.5;
		b=v.b*BIT_9_4_MULT+0.5;
		a=v.a*BIT_5_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_4_MULT+0.5;
		g=v.g*BIT_9_4_MULT+0.5;
		b=v.b*BIT_9_4_MULT+0.5;
		a=v.a*BIT_5_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_6_4_MULT+0.5;
		a=v.a*BIT_6_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_6_4_MULT+0.5;
		a=v.a*BIT_6_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=v.a*BIT_2_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_10_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=v.a*BIT_2_4_MULT+0.5;
		return *this;
	}
	abgr_4& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_4_MULT+0.5;
		g=v.g*BIT_11_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_4_MULT+0.5;
		g=v.g*BIT_11_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_12_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_4_MULT+0.5;
		g=v.g*BIT_12_4_MULT+0.5;
		b=v.b*BIT_10_4_MULT+0.5;
		a=15;
		return *this;
	}
	abgr_4& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_4_MULT+0.5;
		g=v.g*BIT_8_4_MULT+0.5;
		b=0;
		a=15;
		return *this;
	}
} ;



//		24 bits
//		8 8 8
struct rgb_8u {
	uchar r;
	uchar g;
	uchar b;

	rgb_8u& operator = (rgb332          &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgr233          &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgb422          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgr224          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgb242          &v)_{
		r=v.r*BIT_2_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgr242          &v)_{
		r=v.r*BIT_2_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgb565          &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgr565          &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (argb1555        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgb484          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgr484          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (argb8332        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (argb_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgb_8u          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_8u& operator = (bgr_8u          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_8u& operator = (rgb_8s          &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	rgb_8u& operator = (bgr_8s          &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	rgb_8u& operator = (rgba_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_8u& operator = (argb_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_8u& operator = (bgra_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_8u& operator = (abgr_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_8u& operator = (rgba_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	rgb_8u& operator = (argb_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	rgb_8u& operator = (bgra_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	rgb_8u& operator = (abgr_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	rgb_8u& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_8_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_8_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_8_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_8_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	rgb_8u& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_8_MULT+0.5;
		g=v.g;
		b=0;
		return *this;
	}
} ;

struct bgr_8u {
	uchar b;
	uchar g;
	uchar r;
	bgr_8u& operator = (rgb332          &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgr233          &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgb422          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgr224          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgb242          &v)_{
		r=v.r*BIT_2_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgr242          &v)_{
		r=v.r*BIT_2_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgb565          &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgr565          &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (argb1555        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgb484          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgr484          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (argb8332        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (argb_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgb_8u          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_8u& operator = (bgr_8u          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_8u& operator = (rgb_8s          &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	bgr_8u& operator = (bgr_8s          &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	bgr_8u& operator = (rgba_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_8u& operator = (argb_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_8u& operator = (bgra_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_8u& operator = (abgr_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_8u& operator = (rgba_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	bgr_8u& operator = (argb_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	bgr_8u& operator = (bgra_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	bgr_8u& operator = (abgr_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	bgr_8u& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_8_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_8_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_8_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_8_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	bgr_8u& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_8_MULT+0.5;
		g=v.g;
		b=0;
		return *this;
	}
} ;

struct rgb_8s {
	schar r;
	schar g;
	schar b;

	rgb_8s& operator = (rgb332          &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgr233          &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgb422          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgr224          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgb242          &v)_{
		r=v.r*BIT_2_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgr242          &v)_{
		r=v.r*BIT_2_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgb565          &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgr565          &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (argb1555        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgb484          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgr484          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (argb8332        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (argb_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgb_8u          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_8s& operator = (bgr_8u          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_8s& operator = (rgb_8s          &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	rgb_8s& operator = (bgr_8s          &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	rgb_8s& operator = (rgba_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_8s& operator = (argb_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_8s& operator = (bgra_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_8s& operator = (abgr_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_8s& operator = (rgba_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	rgb_8s& operator = (argb_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	rgb_8s& operator = (bgra_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	rgb_8s& operator = (abgr_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	rgb_8s& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_8_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_8_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_8_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_8_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	rgb_8s& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_8_MULT+0.5;
		g=v.g;
		b=0;
		return *this;
	}
} ;

struct bgr_8s {
	schar b;
	schar g;
	schar r;
	bgr_8s& operator = (rgb332          &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgr233          &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgb422          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgr224          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgb242          &v)_{
		r=v.r*BIT_2_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgr242          &v)_{
		r=v.r*BIT_2_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgb565          &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgr565          &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (argb1555        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgb484          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgr484          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (argb8332        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (argb_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgb_8u          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_8s& operator = (bgr_8u          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_8s& operator = (rgb_8s          &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	bgr_8s& operator = (bgr_8s          &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	bgr_8s& operator = (rgba_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_8s& operator = (argb_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_8s& operator = (bgra_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_8s& operator = (abgr_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_8s& operator = (rgba_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	bgr_8s& operator = (argb_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	bgr_8s& operator = (bgra_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	bgr_8s& operator = (abgr_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		return *this;
	}
	bgr_8s& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_8_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_8_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_8_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_8_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		return *this;
	}
	bgr_8s& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_8_MULT+0.5;
		g=v.g;
		b=0;
		return *this;
	}
} ;



//		32 bits
//		8 8 8 8
struct rgba_8u {
	uchar r;
	uchar g;
	uchar b;
	uchar a;
	rgba_8u& operator = (rgb332          &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (bgr233          &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (rgb422          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (bgr224          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (rgb242          &v)_{
		r=v.r*BIT_2_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (bgr242          &v)_{
		r=v.r*BIT_2_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (rgb565          &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (bgr565          &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (argb1555        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (rgb484          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (bgr484          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=v.a;
		return *this;
	}
	rgba_8u& operator = (argb8332        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=v.a;
		return *this;
	}
	rgba_8u& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=v.a;
		return *this;
	}
	rgba_8u& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=v.a;
		return *this;
	}
	rgba_8u& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (argb_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (rgb_8u          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=255;
		return *this;
	}
	rgba_8u& operator = (bgr_8u          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=255;
		return *this;
	}
	rgba_8u& operator = (rgb_8s          &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=255;
		return *this;
	}
	rgba_8u& operator = (bgr_8s          &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=255;
		return *this;
	}
	rgba_8u& operator = (rgba_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_8u& operator = (argb_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_8u& operator = (bgra_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_8u& operator = (abgr_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_8u& operator = (rgba_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=(v.a+127.0);
		return *this;
	}
	rgba_8u& operator = (argb_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=(v.a+127.0);
		return *this;
	}
	rgba_8u& operator = (bgra_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=(v.a+127.0);
		return *this;
	}
	rgba_8u& operator = (abgr_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=(v.a+127.0);
		return *this;
	}
	rgba_8u& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_8_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_8_MULT+0.5;
		a=v.a*BIT_5_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_8_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_8_MULT+0.5;
		a=v.a*BIT_5_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_8_MULT+0.5;
		a=v.a*BIT_6_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_8_MULT+0.5;
		a=v.a*BIT_6_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=v.a*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=v.a*BIT_2_8_MULT+0.5;
		return *this;
	}
	rgba_8u& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_8_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_8_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=255;
		return *this;
	}
	rgba_8u& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_8_MULT+0.5;
		g=v.g;
		b=0;
		a=255;
		return *this;
	}
} ;
struct argb_8u {
	uchar a;
	uchar r;
	uchar g;
	uchar b;
	argb_8u& operator = (rgb332          &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (bgr233          &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (rgb422          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (bgr224          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (rgb242          &v)_{
		r=v.r*BIT_2_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (bgr242          &v)_{
		r=v.r*BIT_2_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (rgb565          &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (bgr565          &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (argb1555        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (rgb484          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (bgr484          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=v.a;
		return *this;
	}
	argb_8u& operator = (argb8332        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=v.a;
		return *this;
	}
	argb_8u& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=v.a;
		return *this;
	}
	argb_8u& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=v.a;
		return *this;
	}
	argb_8u& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (argb_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (rgb_8u          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=255;
		return *this;
	}
	argb_8u& operator = (bgr_8u          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=255;
		return *this;
	}
	argb_8u& operator = (rgb_8s          &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=255;
		return *this;
	}
	argb_8u& operator = (bgr_8s          &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=255;
		return *this;
	}
	argb_8u& operator = (rgba_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb_8u& operator = (argb_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb_8u& operator = (bgra_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb_8u& operator = (abgr_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb_8u& operator = (rgba_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=(v.a+127.0);
		return *this;
	}
	argb_8u& operator = (argb_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=(v.a+127.0);
		return *this;
	}
	argb_8u& operator = (bgra_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=(v.a+127.0);
		return *this;
	}
	argb_8u& operator = (abgr_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=(v.a+127.0);
		return *this;
	}
	argb_8u& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_8_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_8_MULT+0.5;
		a=v.a*BIT_5_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_8_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_8_MULT+0.5;
		a=v.a*BIT_5_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_8_MULT+0.5;
		a=v.a*BIT_6_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_8_MULT+0.5;
		a=v.a*BIT_6_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=v.a*BIT_2_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=v.a*BIT_2_8_MULT+0.5;
		return *this;
	}
	argb_8u& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_8_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_8_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=255;
		return *this;
	}
	argb_8u& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_8_MULT+0.5;
		g=v.g;
		b=0;
		a=255;
		return *this;
	}
} ;

struct bgra_8u {
	uchar b;
	uchar g;
	uchar r;
	uchar a;
	bgra_8u& operator = (rgb332          &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (bgr233          &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (rgb422          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (bgr224          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (rgb242          &v)_{
		r=v.r*BIT_2_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (bgr242          &v)_{
		r=v.r*BIT_2_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (rgb565          &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (bgr565          &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (argb1555        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (rgb484          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (bgr484          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=v.a;
		return *this;
	}
	bgra_8u& operator = (argb8332        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=v.a;
		return *this;
	}
	bgra_8u& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=v.a;
		return *this;
	}
	bgra_8u& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=v.a;
		return *this;
	}
	bgra_8u& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (argb_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (rgb_8u          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=255;
		return *this;
	}
	bgra_8u& operator = (bgr_8u          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=255;
		return *this;
	}
	bgra_8u& operator = (rgb_8s          &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=255;
		return *this;
	}
	bgra_8u& operator = (bgr_8s          &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=255;
		return *this;
	}
	bgra_8u& operator = (rgba_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra_8u& operator = (argb_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra_8u& operator = (bgra_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra_8u& operator = (abgr_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra_8u& operator = (rgba_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=(v.a+127.0);
		return *this;
	}
	bgra_8u& operator = (argb_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=(v.a+127.0);
		return *this;
	}
	bgra_8u& operator = (bgra_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=(v.a+127.0);
		return *this;
	}
	bgra_8u& operator = (abgr_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=(v.a+127.0);
		return *this;
	}
	bgra_8u& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_8_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_8_MULT+0.5;
		a=v.a*BIT_5_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_8_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_8_MULT+0.5;
		a=v.a*BIT_5_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_8_MULT+0.5;
		a=v.a*BIT_6_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_8_MULT+0.5;
		a=v.a*BIT_6_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=v.a*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=v.a*BIT_2_8_MULT+0.5;
		return *this;
	}
	bgra_8u& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_8_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_8_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=255;
		return *this;
	}
	bgra_8u& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_8_MULT+0.5;
		g=v.g;
		b=0;
		a=255;
		return *this;
	}
} ;
struct abgr_8u {
	uchar a;
	uchar b;
	uchar g;
	uchar r;
	abgr_8u& operator = (rgb332          &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (bgr233          &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (rgb422          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (bgr224          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_2_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (rgb242          &v)_{
		r=v.r*BIT_2_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (bgr242          &v)_{
		r=v.r*BIT_2_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (rgb565          &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (bgr565          &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (argb1555        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_8_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		b=v.b*BIT_5_8_MULT+0.5;
		a=v.a*BIT_1_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (rgb484          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (bgr484          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g;
		b=v.b*BIT_4_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=v.a;
		return *this;
	}
	abgr_8u& operator = (argb8332        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=v.a;
		return *this;
	}
	abgr_8u& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=v.a;
		return *this;
	}
	abgr_8u& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_8_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		b=v.b*BIT_2_8_MULT+0.5;
		a=v.a;
		return *this;
	}
	abgr_8u& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (argb_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_8_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		b=v.b*BIT_4_8_MULT+0.5;
		a=v.a*BIT_4_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (rgb_8u          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=255;
		return *this;
	}
	abgr_8u& operator = (bgr_8u          &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=255;
		return *this;
	}
	abgr_8u& operator = (rgb_8s          &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=255;
		return *this;
	}
	abgr_8u& operator = (bgr_8s          &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=255;
		return *this;
	}
	abgr_8u& operator = (rgba_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr_8u& operator = (argb_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr_8u& operator = (bgra_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr_8u& operator = (abgr_8u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr_8u& operator = (rgba_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=(v.a+127.0);
		return *this;
	}
	abgr_8u& operator = (argb_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=(v.a+127.0);
		return *this;
	}
	abgr_8u& operator = (bgra_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=(v.a+127.0);
		return *this;
	}
	abgr_8u& operator = (abgr_8s         &v)_{
		r=(v.r+127.0);
		g=(v.g+127.0);
		b=(v.b+127.0);
		a=(v.a+127.0);
		return *this;
	}
	abgr_8u& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_8_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		b=v.b*BIT_16_8_MULT+0.5;
		a=v.a*BIT_16_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		b=v.b*BIT_32_8_MULT+0.5;
		a=v.a*BIT_32_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_8_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		b=v.b*BIT_f_8_MULT+0.5;
		a=v.a*BIT_f_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_8_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_8_MULT+0.5;
		a=v.a*BIT_5_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_8_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		b=v.b*BIT_9_8_MULT+0.5;
		a=v.a*BIT_5_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_8_MULT+0.5;
		a=v.a*BIT_6_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_6_8_MULT+0.5;
		a=v.a*BIT_6_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=v.a*BIT_2_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=v.a*BIT_2_8_MULT+0.5;
		return *this;
	}
	abgr_8u& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_8_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_8_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		b=v.b*BIT_10_8_MULT+0.5;
		a=255;
		return *this;
	}
	abgr_8u& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_8_MULT+0.5;
		g=v.g;
		b=0;
		a=255;
		return *this;
	}
} ;

struct rgba_8s {
	schar r;
	schar g;
	schar b;
	schar a;
	rgba_8s& operator = (rgb332          &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (bgr233          &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (rgb422          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_2_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (bgr224          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_2_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (rgb242          &v)_{
		r=v.r*BIT_2_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (bgr242          &v)_{
		r=v.r*BIT_2_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (rgb565          &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_6_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (bgr565          &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_6_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_5_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=v.a*BIT_1_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (argb1555        &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_5_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=v.a*BIT_1_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_5_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=v.a*BIT_1_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_5_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=v.a*BIT_1_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (rgb484          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (bgr484          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (argb8332        &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=v.a*BIT_4_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (argb_4          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=v.a*BIT_4_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=v.a*BIT_4_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=v.a*BIT_4_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=(v.a+127.0)*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=(v.a+127.0)*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=(v.a+127.0)*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=(v.a+127.0)*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=255;
		return *this;
	}
	rgba_8s& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=v.a*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=v.a*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=v.a*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=v.a*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=v.a*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=v.a*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=v.a*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=v.a*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=v.a*BIT_f_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=v.a*BIT_f_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=v.a*BIT_f_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=v.a*BIT_f_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_8_MULT+ -126.5;
		g=v.g*BIT_9_8_MULT+ -126.5;
		b=v.b*BIT_9_8_MULT+ -126.5;
		a=v.a*BIT_5_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_8_MULT+ -126.5;
		g=v.g*BIT_9_8_MULT+ -126.5;
		b=v.b*BIT_9_8_MULT+ -126.5;
		a=v.a*BIT_5_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_10_8_MULT+ -126.5;
		b=v.b*BIT_6_8_MULT+ -126.5;
		a=v.a*BIT_6_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_10_8_MULT+ -126.5;
		b=v.b*BIT_6_8_MULT+ -126.5;
		a=v.a*BIT_6_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_10_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=v.a*BIT_2_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_10_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=v.a*BIT_2_8_MULT+ -126.5;
		return *this;
	}
	rgba_8s& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_8_MULT+ -126.5;
		g=v.g*BIT_11_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_8_MULT+ -126.5;
		g=v.g*BIT_11_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_12_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_12_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	rgba_8s& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=-127;
		a=255 -126.5;
		return *this;
	}
} ;
struct argb_8s {
	schar a;
	schar r;
	schar g;
	schar b;
	argb_8s& operator = (rgb332          &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (bgr233          &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (rgb422          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_2_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (bgr224          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_2_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (rgb242          &v)_{
		r=v.r*BIT_2_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (bgr242          &v)_{
		r=v.r*BIT_2_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (rgb565          &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_6_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (bgr565          &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_6_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_5_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=v.a*BIT_1_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (argb1555        &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_5_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=v.a*BIT_1_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_5_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=v.a*BIT_1_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_5_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=v.a*BIT_1_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (rgb484          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (bgr484          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (argb8332        &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=v.a*BIT_4_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (argb_4          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=v.a*BIT_4_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=v.a*BIT_4_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=v.a*BIT_4_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=(v.a+127.0)*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=(v.a+127.0)*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=(v.a+127.0)*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=(v.a+127.0)*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=255;
		return *this;
	}
	argb_8s& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=v.a*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=v.a*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=v.a*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=v.a*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=v.a*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=v.a*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=v.a*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=v.a*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=v.a*BIT_f_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=v.a*BIT_f_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=v.a*BIT_f_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=v.a*BIT_f_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_8_MULT+ -126.5;
		g=v.g*BIT_9_8_MULT+ -126.5;
		b=v.b*BIT_9_8_MULT+ -126.5;
		a=v.a*BIT_5_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_8_MULT+ -126.5;
		g=v.g*BIT_9_8_MULT+ -126.5;
		b=v.b*BIT_9_8_MULT+ -126.5;
		a=v.a*BIT_5_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_10_8_MULT+ -126.5;
		b=v.b*BIT_6_8_MULT+ -126.5;
		a=v.a*BIT_6_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_10_8_MULT+ -126.5;
		b=v.b*BIT_6_8_MULT+ -126.5;
		a=v.a*BIT_6_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_10_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=v.a*BIT_2_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_10_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=v.a*BIT_2_8_MULT+ -126.5;
		return *this;
	}
	argb_8s& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_8_MULT+ -126.5;
		g=v.g*BIT_11_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_8_MULT+ -126.5;
		g=v.g*BIT_11_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_12_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_12_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	argb_8s& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=-127;
		a=255 -126.5;
		return *this;
	}
} ;
struct bgra_8s {
	schar b;
	schar g;
	schar r;
	schar a;
	bgra_8s& operator = (rgb332          &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (bgr233          &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (rgb422          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_2_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (bgr224          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_2_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (rgb242          &v)_{
		r=v.r*BIT_2_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (bgr242          &v)_{
		r=v.r*BIT_2_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (rgb565          &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_6_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (bgr565          &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_6_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_5_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=v.a*BIT_1_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (argb1555        &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_5_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=v.a*BIT_1_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_5_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=v.a*BIT_1_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_5_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=v.a*BIT_1_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (rgb484          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (bgr484          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (argb8332        &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=v.a*BIT_4_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (argb_4          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=v.a*BIT_4_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=v.a*BIT_4_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=v.a*BIT_4_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=(v.a+127.0)*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=(v.a+127.0)*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=(v.a+127.0)*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=(v.a+127.0)*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=255;
		return *this;
	}
	bgra_8s& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=v.a*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=v.a*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=v.a*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=v.a*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=v.a*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=v.a*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=v.a*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=v.a*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=v.a*BIT_f_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=v.a*BIT_f_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=v.a*BIT_f_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=v.a*BIT_f_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_8_MULT+ -126.5;
		g=v.g*BIT_9_8_MULT+ -126.5;
		b=v.b*BIT_9_8_MULT+ -126.5;
		a=v.a*BIT_5_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_8_MULT+ -126.5;
		g=v.g*BIT_9_8_MULT+ -126.5;
		b=v.b*BIT_9_8_MULT+ -126.5;
		a=v.a*BIT_5_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_10_8_MULT+ -126.5;
		b=v.b*BIT_6_8_MULT+ -126.5;
		a=v.a*BIT_6_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_10_8_MULT+ -126.5;
		b=v.b*BIT_6_8_MULT+ -126.5;
		a=v.a*BIT_6_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_10_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=v.a*BIT_2_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_10_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=v.a*BIT_2_8_MULT+ -126.5;
		return *this;
	}
	bgra_8s& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_8_MULT+ -126.5;
		g=v.g*BIT_11_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_8_MULT+ -126.5;
		g=v.g*BIT_11_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_12_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_12_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	bgra_8s& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=-127;
		a=255 -126.5;
		return *this;
	}
} ;
struct abgr_8s {
	schar a;
	schar b;
	schar g;
	schar r;
	abgr_8s& operator = (rgb332          &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (bgr233          &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (rgb422          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_2_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (bgr224          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_2_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (rgb242          &v)_{
		r=v.r*BIT_2_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (bgr242          &v)_{
		r=v.r*BIT_2_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (rgb565          &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_6_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (bgr565          &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_6_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_5_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=v.a*BIT_1_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (argb1555        &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_5_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=v.a*BIT_1_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_5_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=v.a*BIT_1_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_8_MULT+ -126.5;
		g=v.g*BIT_5_8_MULT+ -126.5;
		b=v.b*BIT_5_8_MULT+ -126.5;
		a=v.a*BIT_1_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (rgb484          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (bgr484          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (argb8332        &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_8_MULT+ -126.5;
		g=v.g*BIT_3_8_MULT+ -126.5;
		b=v.b*BIT_2_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=v.a*BIT_4_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (argb_4          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=v.a*BIT_4_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=v.a*BIT_4_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_8_MULT+ -126.5;
		g=v.g*BIT_4_8_MULT+ -126.5;
		b=v.b*BIT_4_8_MULT+ -126.5;
		a=v.a*BIT_4_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=v.b*BIT_8_8_MULT+ -126.5;
		a=v.a*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=(v.a+127.0)*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=(v.a+127.0)*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=(v.a+127.0)*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_8_MULT+ -126.5;
		g=(v.g+127.0)*BIT_8_8_MULT+ -126.5;
		b=(v.b+127.0)*BIT_8_8_MULT+ -126.5;
		a=(v.a+127.0)*BIT_8_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=255;
		return *this;
	}
	abgr_8s& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=v.a*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=v.a*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=v.a*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_8_MULT+ -126.5;
		g=v.g*BIT_16_8_MULT+ -126.5;
		b=v.b*BIT_16_8_MULT+ -126.5;
		a=v.a*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_8_MULT+ -126.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+ -126.5;
		b=(v.b+32767.0)*BIT_16_8_MULT+ -126.5;
		a=(v.a+32767.0)*BIT_16_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_8_MULT+ -126.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+ -126.5;
		b=(v.b+2147483647.0)*BIT_32_8_MULT+ -126.5;
		a=(v.a+2147483647.0)*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=v.a*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=v.a*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=v.a*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_8_MULT+ -126.5;
		g=v.g*BIT_32_8_MULT+ -126.5;
		b=v.b*BIT_32_8_MULT+ -126.5;
		a=v.a*BIT_32_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=v.a*BIT_f_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=v.a*BIT_f_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=v.a*BIT_f_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_8_MULT+ -126.5;
		g=v.g*BIT_f_8_MULT+ -126.5;
		b=v.b*BIT_f_8_MULT+ -126.5;
		a=v.a*BIT_f_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_8_MULT+ -126.5;
		g=v.g*BIT_9_8_MULT+ -126.5;
		b=v.b*BIT_9_8_MULT+ -126.5;
		a=v.a*BIT_5_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_8_MULT+ -126.5;
		g=v.g*BIT_9_8_MULT+ -126.5;
		b=v.b*BIT_9_8_MULT+ -126.5;
		a=v.a*BIT_5_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_10_8_MULT+ -126.5;
		b=v.b*BIT_6_8_MULT+ -126.5;
		a=v.a*BIT_6_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_10_8_MULT+ -126.5;
		b=v.b*BIT_6_8_MULT+ -126.5;
		a=v.a*BIT_6_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_10_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=v.a*BIT_2_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_10_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=v.a*BIT_2_8_MULT+ -126.5;
		return *this;
	}
	abgr_8s& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_8_MULT+ -126.5;
		g=v.g*BIT_11_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_8_MULT+ -126.5;
		g=v.g*BIT_11_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_12_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_8_MULT+ -126.5;
		g=v.g*BIT_12_8_MULT+ -126.5;
		b=v.b*BIT_10_8_MULT+ -126.5;
		a=255 -126.5;
		return *this;
	}
	abgr_8s& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_8_MULT+ -126.5;
		g=v.g*BIT_8_8_MULT+ -126.5;
		b=-127;
		a=255 -126.5;
		return *this;
	}
} ;



//		48 bits
//		16 16 16
struct rgb_16u {
	ushort r;
	ushort g;
	ushort b;
	rgb_16u& operator = (rgb332          &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgr233          &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgb422          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_2_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgr224          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_2_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgb242          &v)_{
		r=v.r*BIT_2_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgr242          &v)_{
		r=v.r*BIT_2_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgb565          &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_6_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgr565          &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_6_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (argb1555        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgb484          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgr484          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (argb8332        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (argb_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgb_16u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_16u& operator = (bgr_16u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_16u& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		return *this;
	}
	rgb_16u& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		return *this;
	}
	rgb_16u& operator = (rgba_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_16u& operator = (bgra_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_16u& operator = (argb_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_16u& operator = (abgr_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_16u& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		return *this;
	}
	rgb_16u& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		return *this;
	}
	rgb_16u& operator = (argb_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		return *this;
	}
	rgb_16u& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		return *this;
	}
	rgb_16u& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_16_MULT+0.5;
		g=v.g*BIT_9_16_MULT+0.5;
		b=v.b*BIT_9_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_16_MULT+0.5;
		g=v.g*BIT_9_16_MULT+0.5;
		b=v.b*BIT_9_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_6_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_6_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_16_MULT+0.5;
		g=v.g*BIT_11_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_16_MULT+0.5;
		g=v.g*BIT_11_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_12_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_12_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		return *this;
	}
	rgb_16u& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=0;
		return *this;
	}
} ;
struct bgr_16u {
	ushort b;
	ushort g;
	ushort r;

	bgr_16u& operator = (rgb332          &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgr233          &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgb422          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_2_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgr224          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_2_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgb242          &v)_{
		r=v.r*BIT_2_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgr242          &v)_{
		r=v.r*BIT_2_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgb565          &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_6_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgr565          &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_6_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (argb1555        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgb484          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgr484          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (argb8332        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (argb_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgb_16u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_16u& operator = (bgr_16u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_16u& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		return *this;
	}
	bgr_16u& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		return *this;
	}
	bgr_16u& operator = (rgba_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_16u& operator = (bgra_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_16u& operator = (argb_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_16u& operator = (abgr_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_16u& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		return *this;
	}
	bgr_16u& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		return *this;
	}
	bgr_16u& operator = (argb_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		return *this;
	}
	bgr_16u& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		return *this;
	}
	bgr_16u& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_16_MULT+0.5;
		g=v.g*BIT_9_16_MULT+0.5;
		b=v.b*BIT_9_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_16_MULT+0.5;
		g=v.g*BIT_9_16_MULT+0.5;
		b=v.b*BIT_9_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_6_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_6_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_16_MULT+0.5;
		g=v.g*BIT_11_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_16_MULT+0.5;
		g=v.g*BIT_11_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_12_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_12_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		return *this;
	}
	bgr_16u& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=0;
		return *this;
	}
} ;

struct rgb_16s {
	short r;
	short g;
	short b;
	rgb_16s& operator = (rgb332          &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgr233          &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgb422          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_2_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgr224          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_2_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgb242          &v)_{
		r=v.r*BIT_2_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgr242          &v)_{
		r=v.r*BIT_2_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgb565          &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_6_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgr565          &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_6_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (argb1555        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgb484          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgr484          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (argb8332        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (argb_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_16_MULT -32766.5;
		g=v.g*BIT_9_16_MULT -32766.5;
		b=v.b*BIT_9_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_16_MULT -32766.5;
		g=v.g*BIT_9_16_MULT -32766.5;
		b=v.b*BIT_9_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_6_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_6_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_16_MULT -32766.5;
		g=v.g*BIT_11_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_16_MULT -32766.5;
		g=v.g*BIT_11_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_12_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_12_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		return *this;
	}
	rgb_16s& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=0;
		return *this;
	}
} ;
struct bgr_16s {
	short b;
	short g;
	short r;

	bgr_16s& operator = (rgb332          &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgr233          &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgb422          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_2_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgr224          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_2_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgb242          &v)_{
		r=v.r*BIT_2_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgr242          &v)_{
		r=v.r*BIT_2_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgb565          &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_6_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgr565          &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_6_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (argb1555        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgb484          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgr484          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (argb8332        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (argb_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_16_MULT -32766.5;
		g=v.g*BIT_9_16_MULT -32766.5;
		b=v.b*BIT_9_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_16_MULT -32766.5;
		g=v.g*BIT_9_16_MULT -32766.5;
		b=v.b*BIT_9_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_6_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_6_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_16_MULT -32766.5;
		g=v.g*BIT_11_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_16_MULT -32766.5;
		g=v.g*BIT_11_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_12_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_12_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		return *this;
	}
	bgr_16s& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=0;
		return *this;
	}
} ;



//		64 bits
//		16 16 16 16
struct rgba_16u {
	ushort r;
	ushort g;
	ushort b;
	ushort a;
	rgba_16u& operator = (rgb332          &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (bgr233          &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (rgb422          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_2_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (bgr224          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_2_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (rgb242          &v)_{
		r=v.r*BIT_2_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (bgr242          &v)_{
		r=v.r*BIT_2_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (rgb565          &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_6_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (bgr565          &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_6_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=v.a*BIT_1_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (argb1555        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=v.a*BIT_1_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=v.a*BIT_1_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=v.a*BIT_1_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (rgb484          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (bgr484          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (argb8332        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=v.a*BIT_4_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (argb_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=v.a*BIT_4_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=v.a*BIT_4_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=v.a*BIT_4_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=(v.a+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=(v.a+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=(v.a+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=(v.a+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (rgb_16u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (bgr_16u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=65535;
		return *this;
	}
	rgba_16u& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=65535;
		return *this;
	}
	rgba_16u& operator = (rgba_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_16u& operator = (bgra_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_16u& operator = (argb_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_16u& operator = (abgr_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_16u& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=(v.a+32767.0);
		return *this;
	}
	rgba_16u& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=(v.a+32767.0);
		return *this;
	}
	rgba_16u& operator = (argb_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=(v.a+32767.0);
		return *this;
	}
	rgba_16u& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=(v.a+32767.0);
		return *this;
	}
	rgba_16u& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=v.a*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=v.a*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=v.a*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=v.a*BIT_32_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=v.a*BIT_f_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=v.a*BIT_f_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=v.a*BIT_f_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=v.a*BIT_f_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_16_MULT+0.5;
		g=v.g*BIT_9_16_MULT+0.5;
		b=v.b*BIT_9_16_MULT+0.5;
		a=v.a*BIT_5_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_16_MULT+0.5;
		g=v.g*BIT_9_16_MULT+0.5;
		b=v.b*BIT_9_16_MULT+0.5;
		a=v.a*BIT_5_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_6_16_MULT+0.5;
		a=v.a*BIT_6_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_6_16_MULT+0.5;
		a=v.a*BIT_6_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=v.a*BIT_2_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=v.a*BIT_2_16_MULT+0.5;
		return *this;
	}
	rgba_16u& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_16_MULT+0.5;
		g=v.g*BIT_11_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_16_MULT+0.5;
		g=v.g*BIT_11_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_12_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_12_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=65535;
		return *this;
	}
	rgba_16u& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=0;
		a=65535;
		return *this;
	}
} ;
struct bgra_16u {
	ushort b;
	ushort g;
	ushort r;
	ushort a;
	bgra_16u& operator = (rgb332          &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (bgr233          &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (rgb422          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_2_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (bgr224          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_2_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (rgb242          &v)_{
		r=v.r*BIT_2_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (bgr242          &v)_{
		r=v.r*BIT_2_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (rgb565          &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_6_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (bgr565          &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_6_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=v.a*BIT_1_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (argb1555        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=v.a*BIT_1_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=v.a*BIT_1_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=v.a*BIT_1_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (rgb484          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (bgr484          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (argb8332        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=v.a*BIT_4_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (argb_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=v.a*BIT_4_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=v.a*BIT_4_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=v.a*BIT_4_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=(v.a+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=(v.a+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=(v.a+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=(v.a+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (rgb_16u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (bgr_16u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=65535;
		return *this;
	}
	bgra_16u& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=65535;
		return *this;
	}
	bgra_16u& operator = (rgba_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra_16u& operator = (bgra_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra_16u& operator = (argb_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra_16u& operator = (abgr_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra_16u& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=(v.a+32767.0);
		return *this;
	}
	bgra_16u& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=(v.a+32767.0);
		return *this;
	}
	bgra_16u& operator = (argb_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=(v.a+32767.0);
		return *this;
	}
	bgra_16u& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=(v.a+32767.0);
		return *this;
	}
	bgra_16u& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=v.a*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=v.a*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=v.a*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=v.a*BIT_32_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=v.a*BIT_f_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=v.a*BIT_f_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=v.a*BIT_f_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=v.a*BIT_f_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_16_MULT+0.5;
		g=v.g*BIT_9_16_MULT+0.5;
		b=v.b*BIT_9_16_MULT+0.5;
		a=v.a*BIT_5_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_16_MULT+0.5;
		g=v.g*BIT_9_16_MULT+0.5;
		b=v.b*BIT_9_16_MULT+0.5;
		a=v.a*BIT_5_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_6_16_MULT+0.5;
		a=v.a*BIT_6_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_6_16_MULT+0.5;
		a=v.a*BIT_6_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=v.a*BIT_2_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=v.a*BIT_2_16_MULT+0.5;
		return *this;
	}
	bgra_16u& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_16_MULT+0.5;
		g=v.g*BIT_11_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_16_MULT+0.5;
		g=v.g*BIT_11_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_12_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_12_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=65535;
		return *this;
	}
	bgra_16u& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=0;
		a=65535;
		return *this;
	}
} ;

struct argb_16u {
	ushort a;
	ushort r;
	ushort g;
	ushort b;
	argb_16u& operator = (rgb332          &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (bgr233          &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (rgb422          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_2_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (bgr224          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_2_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (rgb242          &v)_{
		r=v.r*BIT_2_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (bgr242          &v)_{
		r=v.r*BIT_2_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (rgb565          &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_6_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (bgr565          &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_6_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=v.a*BIT_1_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (argb1555        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=v.a*BIT_1_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=v.a*BIT_1_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=v.a*BIT_1_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (rgb484          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (bgr484          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (argb8332        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=v.a*BIT_4_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (argb_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=v.a*BIT_4_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=v.a*BIT_4_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=v.a*BIT_4_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=(v.a+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=(v.a+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=(v.a+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=(v.a+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (rgb_16u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=65535;
		return *this;
	}
	argb_16u& operator = (bgr_16u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=65535;
		return *this;
	}
	argb_16u& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=65535;
		return *this;
	}
	argb_16u& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=65535;
		return *this;
	}
	argb_16u& operator = (rgba_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb_16u& operator = (bgra_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb_16u& operator = (argb_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb_16u& operator = (abgr_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb_16u& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=(v.a+32767.0);
		return *this;
	}
	argb_16u& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=(v.a+32767.0);
		return *this;
	}
	argb_16u& operator = (argb_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=(v.a+32767.0);
		return *this;
	}
	argb_16u& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=(v.a+32767.0);
		return *this;
	}
	argb_16u& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=v.a*BIT_32_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=v.a*BIT_32_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=v.a*BIT_32_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=v.a*BIT_32_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=v.a*BIT_f_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=v.a*BIT_f_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=v.a*BIT_f_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=v.a*BIT_f_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_16_MULT+0.5;
		g=v.g*BIT_9_16_MULT+0.5;
		b=v.b*BIT_9_16_MULT+0.5;
		a=v.a*BIT_5_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_16_MULT+0.5;
		g=v.g*BIT_9_16_MULT+0.5;
		b=v.b*BIT_9_16_MULT+0.5;
		a=v.a*BIT_5_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_6_16_MULT+0.5;
		a=v.a*BIT_6_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_6_16_MULT+0.5;
		a=v.a*BIT_6_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=v.a*BIT_2_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=v.a*BIT_2_16_MULT+0.5;
		return *this;
	}
	argb_16u& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_16_MULT+0.5;
		g=v.g*BIT_11_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_16_MULT+0.5;
		g=v.g*BIT_11_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_12_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_12_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=65535;
		return *this;
	}
	argb_16u& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=0;
		a=65535;
		return *this;
	}
} ;
struct abgr_16u {
	ushort a;
	ushort b;
	ushort g;
	ushort r;
	abgr_16u& operator = (rgb332          &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (bgr233          &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (rgb422          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_2_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (bgr224          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_2_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (rgb242          &v)_{
		r=v.r*BIT_2_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (bgr242          &v)_{
		r=v.r*BIT_2_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (rgb565          &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_6_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (bgr565          &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_6_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=v.a*BIT_1_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (argb1555        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=v.a*BIT_1_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=v.a*BIT_1_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_16_MULT+0.5;
		g=v.g*BIT_5_16_MULT+0.5;
		b=v.b*BIT_5_16_MULT+0.5;
		a=v.a*BIT_1_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (rgb484          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (bgr484          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (argb8332        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_16_MULT+0.5;
		g=v.g*BIT_3_16_MULT+0.5;
		b=v.b*BIT_2_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=v.a*BIT_4_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (argb_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=v.a*BIT_4_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=v.a*BIT_4_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_16_MULT+0.5;
		g=v.g*BIT_4_16_MULT+0.5;
		b=v.b*BIT_4_16_MULT+0.5;
		a=v.a*BIT_4_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=v.b*BIT_8_16_MULT+0.5;
		a=v.a*BIT_8_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=(v.a+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=(v.a+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=(v.a+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT+0.5;
		g=(v.g+127.0)*BIT_8_16_MULT+0.5;
		b=(v.b+127.0)*BIT_8_16_MULT+0.5;
		a=(v.a+127.0)*BIT_8_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (rgb_16u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (bgr_16u         &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=65535;
		return *this;
	}
	abgr_16u& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=65535;
		return *this;
	}
	abgr_16u& operator = (rgba_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr_16u& operator = (bgra_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr_16u& operator = (argb_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr_16u& operator = (abgr_16u        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr_16u& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=(v.a+32767.0);
		return *this;
	}
	abgr_16u& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=(v.a+32767.0);
		return *this;
	}
	abgr_16u& operator = (argb_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=(v.a+32767.0);
		return *this;
	}
	abgr_16u& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0);
		g=(v.g+32767.0);
		b=(v.b+32767.0);
		a=(v.a+32767.0);
		return *this;
	}
	abgr_16u& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=v.a*BIT_32_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=v.a*BIT_32_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=v.a*BIT_32_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_16_MULT+0.5;
		g=v.g*BIT_32_16_MULT+0.5;
		b=v.b*BIT_32_16_MULT+0.5;
		a=v.a*BIT_32_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=v.a*BIT_f_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=v.a*BIT_f_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=v.a*BIT_f_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_16_MULT+0.5;
		g=v.g*BIT_f_16_MULT+0.5;
		b=v.b*BIT_f_16_MULT+0.5;
		a=v.a*BIT_f_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_16_MULT+0.5;
		g=v.g*BIT_9_16_MULT+0.5;
		b=v.b*BIT_9_16_MULT+0.5;
		a=v.a*BIT_5_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_16_MULT+0.5;
		g=v.g*BIT_9_16_MULT+0.5;
		b=v.b*BIT_9_16_MULT+0.5;
		a=v.a*BIT_5_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_6_16_MULT+0.5;
		a=v.a*BIT_6_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_6_16_MULT+0.5;
		a=v.a*BIT_6_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=v.a*BIT_2_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_10_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=v.a*BIT_2_16_MULT+0.5;
		return *this;
	}
	abgr_16u& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_16_MULT+0.5;
		g=v.g*BIT_11_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_16_MULT+0.5;
		g=v.g*BIT_11_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_12_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT+0.5;
		g=v.g*BIT_12_16_MULT+0.5;
		b=v.b*BIT_10_16_MULT+0.5;
		a=65535;
		return *this;
	}
	abgr_16u& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_16_MULT+0.5;
		g=v.g*BIT_8_16_MULT+0.5;
		b=0;
		a=65535;
		return *this;
	}
} ;

struct rgba_16s {
	short r;
	short g;
	short b;
	short a;
	rgba_16s& operator = (rgb332          &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (bgr233          &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (rgb422          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_2_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (bgr224          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_2_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (rgb242          &v)_{
		r=v.r*BIT_2_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (bgr242          &v)_{
		r=v.r*BIT_2_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (rgb565          &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_6_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (bgr565          &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_6_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=v.a*BIT_1_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (argb1555        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=v.a*BIT_1_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=v.a*BIT_1_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=v.a*BIT_1_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (rgb484          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (bgr484          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (argb8332        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=v.a*BIT_4_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (argb_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=v.a*BIT_4_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=v.a*BIT_4_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=v.a*BIT_4_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=(v.a+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=(v.a+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=(v.a+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=(v.a+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=v.a*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=v.a*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=v.a*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=v.a*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=(v.a+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=(v.a+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=(v.a+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=(v.a+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=v.a*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=v.a*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=v.a*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=v.a*BIT_32_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=v.a*BIT_f_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=v.a*BIT_f_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=v.a*BIT_f_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=v.a*BIT_f_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_16_MULT -32766.5;
		g=v.g*BIT_9_16_MULT -32766.5;
		b=v.b*BIT_9_16_MULT -32766.5;
		a=v.a*BIT_5_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_16_MULT -32766.5;
		g=v.g*BIT_9_16_MULT -32766.5;
		b=v.b*BIT_9_16_MULT -32766.5;
		a=v.a*BIT_5_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_6_16_MULT -32766.5;
		a=v.a*BIT_6_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_6_16_MULT -32766.5;
		a=v.a*BIT_6_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=v.a*BIT_2_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=v.a*BIT_2_16_MULT -32766.5;
		return *this;
	}
	rgba_16s& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_16_MULT -32766.5;
		g=v.g*BIT_11_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_16_MULT -32766.5;
		g=v.g*BIT_11_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_12_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_12_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	rgba_16s& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=-32767;
		a=32767;
		return *this;
	}
} ;
struct bgra_16s {
	short b;
	short g;
	short r;
	short a;
	bgra_16s& operator = (rgb332          &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (bgr233          &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (rgb422          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_2_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (bgr224          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_2_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (rgb242          &v)_{
		r=v.r*BIT_2_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (bgr242          &v)_{
		r=v.r*BIT_2_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (rgb565          &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_6_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (bgr565          &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_6_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=v.a*BIT_1_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (argb1555        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=v.a*BIT_1_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=v.a*BIT_1_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=v.a*BIT_1_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (rgb484          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (bgr484          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (argb8332        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=v.a*BIT_4_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (argb_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=v.a*BIT_4_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=v.a*BIT_4_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=v.a*BIT_4_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=(v.a+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=(v.a+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=(v.a+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=(v.a+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=v.a*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=v.a*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=v.a*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=v.a*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=(v.a+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=(v.a+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=(v.a+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=(v.a+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=v.a*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=v.a*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=v.a*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=v.a*BIT_32_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=v.a*BIT_f_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=v.a*BIT_f_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=v.a*BIT_f_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=v.a*BIT_f_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_16_MULT -32766.5;
		g=v.g*BIT_9_16_MULT -32766.5;
		b=v.b*BIT_9_16_MULT -32766.5;
		a=v.a*BIT_5_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_16_MULT -32766.5;
		g=v.g*BIT_9_16_MULT -32766.5;
		b=v.b*BIT_9_16_MULT -32766.5;
		a=v.a*BIT_5_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_6_16_MULT -32766.5;
		a=v.a*BIT_6_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_6_16_MULT -32766.5;
		a=v.a*BIT_6_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=v.a*BIT_2_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=v.a*BIT_2_16_MULT -32766.5;
		return *this;
	}
	bgra_16s& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_16_MULT -32766.5;
		g=v.g*BIT_11_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_16_MULT -32766.5;
		g=v.g*BIT_11_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_12_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_12_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	bgra_16s& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=-32767;
		a=32767;
		return *this;
	}
} ;

struct argb_16s {
	short a;
	short r;
	short g;
	short b;
	argb_16s& operator = (rgb332          &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (bgr233          &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (rgb422          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_2_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (bgr224          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_2_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (rgb242          &v)_{
		r=v.r*BIT_2_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (bgr242          &v)_{
		r=v.r*BIT_2_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (rgb565          &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_6_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (bgr565          &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_6_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=v.a*BIT_1_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (argb1555        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=v.a*BIT_1_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=v.a*BIT_1_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=v.a*BIT_1_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (rgb484          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (bgr484          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (argb8332        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=v.a*BIT_4_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (argb_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=v.a*BIT_4_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=v.a*BIT_4_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=v.a*BIT_4_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=(v.a+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=(v.a+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=(v.a+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=(v.a+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=v.a*BIT_16_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=v.a*BIT_16_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=v.a*BIT_16_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=v.a*BIT_16_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=(v.a+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=(v.a+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=(v.a+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=(v.a+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=v.a*BIT_32_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=v.a*BIT_32_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=v.a*BIT_32_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=v.a*BIT_32_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=v.a*BIT_f_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=v.a*BIT_f_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=v.a*BIT_f_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=v.a*BIT_f_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_16_MULT -32766.5;
		g=v.g*BIT_9_16_MULT -32766.5;
		b=v.b*BIT_9_16_MULT -32766.5;
		a=v.a*BIT_5_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_16_MULT -32766.5;
		g=v.g*BIT_9_16_MULT -32766.5;
		b=v.b*BIT_9_16_MULT -32766.5;
		a=v.a*BIT_5_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_6_16_MULT -32766.5;
		a=v.a*BIT_6_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_6_16_MULT -32766.5;
		a=v.a*BIT_6_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=v.a*BIT_2_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=v.a*BIT_2_16_MULT -32766.5;
		return *this;
	}
	argb_16s& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_16_MULT -32766.5;
		g=v.g*BIT_11_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_16_MULT -32766.5;
		g=v.g*BIT_11_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_12_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_12_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	argb_16s& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=-32767;
		a=32767;
		return *this;
	}
} ;
struct abgr_16s {
	short a;
	short b;
	short g;
	short r;
	abgr_16s& operator = (rgb332          &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (bgr233          &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (rgb422          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_2_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (bgr224          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_2_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (rgb242          &v)_{
		r=v.r*BIT_2_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (bgr242          &v)_{
		r=v.r*BIT_2_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (rgb565          &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_6_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (bgr565          &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_6_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=v.a*BIT_1_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (argb1555        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=v.a*BIT_1_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=v.a*BIT_1_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_16_MULT -32766.5;
		g=v.g*BIT_5_16_MULT -32766.5;
		b=v.b*BIT_5_16_MULT -32766.5;
		a=v.a*BIT_1_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (rgb484          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (bgr484          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (argb8332        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_16_MULT -32766.5;
		g=v.g*BIT_3_16_MULT -32766.5;
		b=v.b*BIT_2_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=v.a*BIT_4_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (argb_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=v.a*BIT_4_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=v.a*BIT_4_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_16_MULT -32766.5;
		g=v.g*BIT_4_16_MULT -32766.5;
		b=v.b*BIT_4_16_MULT -32766.5;
		a=v.a*BIT_4_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=v.b*BIT_8_16_MULT -32766.5;
		a=v.a*BIT_8_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=(v.a+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=(v.a+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=(v.a+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_16_MULT -32766.5;
		g=(v.g+127.0)*BIT_8_16_MULT -32766.5;
		b=(v.b+127.0)*BIT_8_16_MULT -32766.5;
		a=(v.a+127.0)*BIT_8_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=v.a*BIT_16_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=v.a*BIT_16_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=v.a*BIT_16_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_16_MULT -32766.5;
		g=v.g*BIT_16_16_MULT -32766.5;
		b=v.b*BIT_16_16_MULT -32766.5;
		a=v.a*BIT_16_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=(v.a+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=(v.a+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=(v.a+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_16_MULT -32766.5;
		g=(v.g+32767.0)*BIT_16_16_MULT -32766.5;
		b=(v.b+32767.0)*BIT_16_16_MULT -32766.5;
		a=(v.a+32767.0)*BIT_16_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_16_MULT -32766.5;
		g=(v.g+2147483647.0)*BIT_32_16_MULT -32766.5;
		b=(v.b+2147483647.0)*BIT_32_16_MULT -32766.5;
		a=(v.a+2147483647.0)*BIT_32_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=v.a*BIT_32_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=v.a*BIT_32_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=v.a*BIT_32_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_16_MULT -32766.5;
		g=v.g*BIT_32_16_MULT -32766.5;
		b=v.b*BIT_32_16_MULT -32766.5;
		a=v.a*BIT_32_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=v.a*BIT_f_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=v.a*BIT_f_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=v.a*BIT_f_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_16_MULT -32766.5;
		g=v.g*BIT_f_16_MULT -32766.5;
		b=v.b*BIT_f_16_MULT -32766.5;
		a=v.a*BIT_f_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_16_MULT -32766.5;
		g=v.g*BIT_9_16_MULT -32766.5;
		b=v.b*BIT_9_16_MULT -32766.5;
		a=v.a*BIT_5_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_16_MULT -32766.5;
		g=v.g*BIT_9_16_MULT -32766.5;
		b=v.b*BIT_9_16_MULT -32766.5;
		a=v.a*BIT_5_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_6_16_MULT -32766.5;
		a=v.a*BIT_6_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_6_16_MULT -32766.5;
		a=v.a*BIT_6_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=v.a*BIT_2_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_10_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=v.a*BIT_2_16_MULT -32766.5;
		return *this;
	}
	abgr_16s& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_16_MULT -32766.5;
		g=v.g*BIT_11_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_16_MULT -32766.5;
		g=v.g*BIT_11_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_12_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_16_MULT -32766.5;
		g=v.g*BIT_12_16_MULT -32766.5;
		b=v.b*BIT_10_16_MULT -32766.5;
		a=32767;
		return *this;
	}
	abgr_16s& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_16_MULT -32766.5;
		g=v.g*BIT_8_16_MULT -32766.5;
		b=-32767;
		a=32767;
		return *this;
	}
} ;



// test for 32 bits
//int
struct rgb_32si {
	int r;
	int g;
	int b;
	rgb_32si& operator = (rgb332          &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgr233          &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgb422          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_2_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgr224          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_2_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgb242          &v)_{
		r=v.r*BIT_2_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgr242          &v)_{
		r=v.r*BIT_2_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgb565          &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_6_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgr565          &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_6_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (argb1555        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgb484          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgr484          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (argb8332        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (argb_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_32_MULT -2147483646.5;
		g=v.g*BIT_9_32_MULT -2147483646.5;
		b=v.b*BIT_9_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_32_MULT -2147483646.5;
		g=v.g*BIT_9_32_MULT -2147483646.5;
		b=v.b*BIT_9_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_6_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_6_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_32_MULT -2147483646.5;
		g=v.g*BIT_11_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_32_MULT -2147483646.5;
		g=v.g*BIT_11_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_12_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_12_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		return *this;
	}
	rgb_32si& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=0;
		return *this;
	}
} ;
struct bgr_32si {
	int b;
	int g;
	int r;

	bgr_32si& operator = (rgb332          &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgr233          &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgb422          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_2_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgr224          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_2_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgb242          &v)_{
		r=v.r*BIT_2_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgr242          &v)_{
		r=v.r*BIT_2_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgb565          &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_6_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgr565          &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_6_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (argb1555        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgb484          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgr484          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (argb8332        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (argb_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_32_MULT -2147483646.5;
		g=v.g*BIT_9_32_MULT -2147483646.5;
		b=v.b*BIT_9_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_32_MULT -2147483646.5;
		g=v.g*BIT_9_32_MULT -2147483646.5;
		b=v.b*BIT_9_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_6_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_6_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_32_MULT -2147483646.5;
		g=v.g*BIT_11_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_32_MULT -2147483646.5;
		g=v.g*BIT_11_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_12_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_12_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		return *this;
	}
	bgr_32si& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=0;
		return *this;
	}
} ;

//uint
struct rgb_32ui {
	uint r;
	uint g;
	uint b;
	rgb_32ui& operator = (rgb332          &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgr233          &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgb422          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_2_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgr224          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_2_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgb242          &v)_{
		r=v.r*BIT_2_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgr242          &v)_{
		r=v.r*BIT_2_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgb565          &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_6_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgr565          &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_6_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (argb1555        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgb484          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgr484          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (argb8332        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (argb_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		return *this;
	}
	rgb_32ui& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		return *this;
	}
	rgb_32ui& operator = (rgb_32ui        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_32ui& operator = (bgr_32ui        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_32ui& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		return *this;
	}
	rgb_32ui& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		return *this;
	}
	rgb_32ui& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		return *this;
	}
	rgb_32ui& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		return *this;
	}
	rgb_32ui& operator = (rgba_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_32ui& operator = (bgra_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_32ui& operator = (argb_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_32ui& operator = (abgr_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_32ui& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_32_MULT+0.5;
		g=v.g*BIT_9_32_MULT+0.5;
		b=v.b*BIT_9_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_32_MULT+0.5;
		g=v.g*BIT_9_32_MULT+0.5;
		b=v.b*BIT_9_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_6_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_6_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_32_MULT+0.5;
		g=v.g*BIT_11_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_32_MULT+0.5;
		g=v.g*BIT_11_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_12_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_12_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		return *this;
	}
	rgb_32ui& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=0;
		return *this;
	}
} ;
struct bgr_32ui {
	uint b;
	uint g;
	uint r;

	bgr_32ui& operator = (rgb332          &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgr233          &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgb422          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_2_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgr224          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_2_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgb242          &v)_{
		r=v.r*BIT_2_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgr242          &v)_{
		r=v.r*BIT_2_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgb565          &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_6_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgr565          &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_6_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (argb1555        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgb484          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgr484          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (argb8332        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (argb_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		return *this;
	}
	bgr_32ui& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		return *this;
	}
	bgr_32ui& operator = (rgb_32ui        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_32ui& operator = (bgr_32ui        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_32ui& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		return *this;
	}
	bgr_32ui& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		return *this;
	}
	bgr_32ui& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		return *this;
	}
	bgr_32ui& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		return *this;
	}
	bgr_32ui& operator = (rgba_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_32ui& operator = (bgra_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_32ui& operator = (argb_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_32ui& operator = (abgr_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_32ui& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_32_MULT+0.5;
		g=v.g*BIT_9_32_MULT+0.5;
		b=v.b*BIT_9_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_32_MULT+0.5;
		g=v.g*BIT_9_32_MULT+0.5;
		b=v.b*BIT_9_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_6_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_6_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_32_MULT+0.5;
		g=v.g*BIT_11_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_32_MULT+0.5;
		g=v.g*BIT_11_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_12_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_12_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		return *this;
	}
	bgr_32ui& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=0;
		return *this;
	}
} ;

//float
struct rgb_32f {
	float r;
	float g;
	float b;
	rgb_32f& operator = (rgb332          &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgr233          &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgb422          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_2_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgr224          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_2_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgb242          &v)_{
		r=v.r*BIT_2_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgr242          &v)_{
		r=v.r*BIT_2_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgb565          &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_6_f_MULT;
		b=v.b*BIT_5_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgr565          &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_6_f_MULT;
		b=v.b*BIT_5_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		return *this;
	}
	rgb_32f& operator = (argb1555        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		return *this;
	}
	rgb_32f& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgb484          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_4_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgr484          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_4_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	rgb_32f& operator = (argb8332        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	rgb_32f& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		return *this;
	}
	rgb_32f& operator = (argb_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		return *this;
	}
	rgb_32f& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		return *this;
	}
	rgb_32f& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		return *this;
	}
	rgb_32f& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		return *this;
	}
	rgb_32f& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		return *this;
	}
	rgb_32f& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		return *this;
	}
	rgb_32f& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		return *this;
	}
	rgb_32f& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	rgb_32f& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	rgb_32f& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	rgb_32f& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	rgb_32f& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		return *this;
	}
	rgb_32f& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		return *this;
	}
	rgb_32f& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		return *this;
	}
	rgb_32f& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		return *this;
	}
	rgb_32f& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_f_MULT;
		g=v.g*BIT_9_f_MULT;
		b=v.b*BIT_9_f_MULT;
		return *this;
	}
	rgb_32f& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_f_MULT;
		g=v.g*BIT_9_f_MULT;
		b=v.b*BIT_9_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_6_f_MULT;
		return *this;
	}
	rgb_32f& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_6_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_10_f_MULT;
		return *this;
	}
	rgb_32f& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_10_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_f_MULT;
		g=v.g*BIT_11_f_MULT;
		b=v.b*BIT_10_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_f_MULT;
		g=v.g*BIT_11_f_MULT;
		b=v.b*BIT_10_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_12_f_MULT;
		b=v.b*BIT_10_f_MULT;
		return *this;
	}
	rgb_32f& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_12_f_MULT;
		b=v.b*BIT_10_f_MULT;
		return *this;
	}
	rgb_32f& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=0;
		return *this;
	}
} ;
struct bgr_32f {
	float b;
	float g;
	float r;

	bgr_32f& operator = (rgb332          &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgr233          &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgb422          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_2_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgr224          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_2_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgb242          &v)_{
		r=v.r*BIT_2_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgr242          &v)_{
		r=v.r*BIT_2_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgb565          &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_6_f_MULT;
		b=v.b*BIT_5_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgr565          &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_6_f_MULT;
		b=v.b*BIT_5_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		return *this;
	}
	bgr_32f& operator = (argb1555        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		return *this;
	}
	bgr_32f& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgb484          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_4_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgr484          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_4_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	bgr_32f& operator = (argb8332        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	bgr_32f& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		return *this;
	}
	bgr_32f& operator = (argb_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		return *this;
	}
	bgr_32f& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		return *this;
	}
	bgr_32f& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		return *this;
	}
	bgr_32f& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		return *this;
	}
	bgr_32f& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		return *this;
	}
	bgr_32f& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		return *this;
	}
	bgr_32f& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		return *this;
	}
	bgr_32f& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	bgr_32f& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	bgr_32f& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	bgr_32f& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	bgr_32f& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		return *this;
	}
	bgr_32f& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		return *this;
	}
	bgr_32f& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		return *this;
	}
	bgr_32f& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		return *this;
	}
	bgr_32f& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_f_MULT;
		g=v.g*BIT_9_f_MULT;
		b=v.b*BIT_9_f_MULT;
		return *this;
	}
	bgr_32f& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_f_MULT;
		g=v.g*BIT_9_f_MULT;
		b=v.b*BIT_9_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_6_f_MULT;
		return *this;
	}
	bgr_32f& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_6_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_10_f_MULT;
		return *this;
	}
	bgr_32f& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_10_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_f_MULT;
		g=v.g*BIT_11_f_MULT;
		b=v.b*BIT_10_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_f_MULT;
		g=v.g*BIT_11_f_MULT;
		b=v.b*BIT_10_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_12_f_MULT;
		b=v.b*BIT_10_f_MULT;
		return *this;
	}
	bgr_32f& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_12_f_MULT;
		b=v.b*BIT_10_f_MULT;
		return *this;
	}
	bgr_32f& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=0;
		return *this;
	}
} ;



//		128 bits
//		32 32 32 32
//int
struct rgba_32si {
	int r;
	int g;
	int b;
	int a;
	rgba_32si& operator = (rgb332          &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (bgr233          &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (rgb422          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_2_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (bgr224          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_2_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (rgb242          &v)_{
		r=v.r*BIT_2_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (bgr242          &v)_{
		r=v.r*BIT_2_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (rgb565          &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_6_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (bgr565          &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_6_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=v.a*BIT_1_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (argb1555        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=v.a*BIT_1_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=v.a*BIT_1_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=v.a*BIT_1_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (rgb484          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (bgr484          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (argb8332        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=v.a*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (argb_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=v.a*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=v.a*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=v.a*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=(v.a+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=(v.a+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=(v.a+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=(v.a+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=v.a*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=v.a*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=v.a*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=v.a*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=(v.a+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=(v.a+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=(v.a+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=(v.a+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=(v.a+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=(v.a+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=(v.a+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=(v.a+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=v.a*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=v.a*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=v.a*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=v.a*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=v.a*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=v.a*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=v.a*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=v.a*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_32_MULT -2147483646.5;
		g=v.g*BIT_9_32_MULT -2147483646.5;
		b=v.b*BIT_9_32_MULT -2147483646.5;
		a=v.a*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_32_MULT -2147483646.5;
		g=v.g*BIT_9_32_MULT -2147483646.5;
		b=v.b*BIT_9_32_MULT -2147483646.5;
		a=v.a*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_6_32_MULT -2147483646.5;
		a=v.a*BIT_6_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_6_32_MULT -2147483646.5;
		a=v.a*BIT_6_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=v.a*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=v.a*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	rgba_32si& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_32_MULT -2147483646.5;
		g=v.g*BIT_11_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_32_MULT -2147483646.5;
		g=v.g*BIT_11_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_12_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_12_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	rgba_32si& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=-2147483647;
		a=2147483647;
		return *this;
	}
} ;
struct bgra_32si {
	int b;
	int g;
	int r;
	int a;
	bgra_32si& operator = (rgb332          &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (bgr233          &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (rgb422          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_2_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (bgr224          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_2_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (rgb242          &v)_{
		r=v.r*BIT_2_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (bgr242          &v)_{
		r=v.r*BIT_2_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (rgb565          &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_6_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (bgr565          &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_6_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=v.a*BIT_1_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (argb1555        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=v.a*BIT_1_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=v.a*BIT_1_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=v.a*BIT_1_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (rgb484          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (bgr484          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (argb8332        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=v.a*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (argb_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=v.a*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=v.a*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=v.a*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=(v.a+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=(v.a+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=(v.a+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=(v.a+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=v.a*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=v.a*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=v.a*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=v.a*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=(v.a+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=(v.a+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=(v.a+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=(v.a+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=(v.a+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=(v.a+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=(v.a+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=(v.a+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=v.a*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=v.a*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=v.a*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=v.a*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=v.a*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=v.a*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=v.a*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=v.a*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_32_MULT -2147483646.5;
		g=v.g*BIT_9_32_MULT -2147483646.5;
		b=v.b*BIT_9_32_MULT -2147483646.5;
		a=v.a*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_32_MULT -2147483646.5;
		g=v.g*BIT_9_32_MULT -2147483646.5;
		b=v.b*BIT_9_32_MULT -2147483646.5;
		a=v.a*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_6_32_MULT -2147483646.5;
		a=v.a*BIT_6_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_6_32_MULT -2147483646.5;
		a=v.a*BIT_6_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=v.a*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=v.a*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	bgra_32si& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_32_MULT -2147483646.5;
		g=v.g*BIT_11_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_32_MULT -2147483646.5;
		g=v.g*BIT_11_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_12_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_12_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	bgra_32si& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=-2147483647;
		a=2147483647;
		return *this;
	}
} ;

struct argb_32si {
	int a;
	int r;
	int g;
	int b;
	argb_32si& operator = (rgb332          &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (bgr233          &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (rgb422          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_2_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (bgr224          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_2_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (rgb242          &v)_{
		r=v.r*BIT_2_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (bgr242          &v)_{
		r=v.r*BIT_2_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (rgb565          &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_6_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (bgr565          &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_6_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=v.a*BIT_1_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (argb1555        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=v.a*BIT_1_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=v.a*BIT_1_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=v.a*BIT_1_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (rgb484          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (bgr484          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (argb8332        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=v.a*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (argb_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=v.a*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=v.a*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=v.a*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=(v.a+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=(v.a+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=(v.a+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=(v.a+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=v.a*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=v.a*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=v.a*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=v.a*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=(v.a+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=(v.a+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=(v.a+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=(v.a+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=(v.a+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=(v.a+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=(v.a+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=(v.a+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=v.a*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=v.a*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=v.a*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=v.a*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=v.a*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=v.a*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=v.a*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=v.a*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_32_MULT -2147483646.5;
		g=v.g*BIT_9_32_MULT -2147483646.5;
		b=v.b*BIT_9_32_MULT -2147483646.5;
		a=v.a*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_32_MULT -2147483646.5;
		g=v.g*BIT_9_32_MULT -2147483646.5;
		b=v.b*BIT_9_32_MULT -2147483646.5;
		a=v.a*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_6_32_MULT -2147483646.5;
		a=v.a*BIT_6_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_6_32_MULT -2147483646.5;
		a=v.a*BIT_6_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=v.a*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=v.a*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	argb_32si& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_32_MULT -2147483646.5;
		g=v.g*BIT_11_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_32_MULT -2147483646.5;
		g=v.g*BIT_11_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_12_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_12_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	argb_32si& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=-2147483647;
		a=2147483647;
		return *this;
	}
} ;
struct abgr_32si {
	int a;
	int b;
	int g;
	int r;
	abgr_32si& operator = (rgb332          &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (bgr233          &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (rgb422          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_2_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (bgr224          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_2_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (rgb242          &v)_{
		r=v.r*BIT_2_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (bgr242          &v)_{
		r=v.r*BIT_2_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (rgb565          &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_6_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (bgr565          &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_6_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=v.a*BIT_1_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (argb1555        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=v.a*BIT_1_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=v.a*BIT_1_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_32_MULT -2147483646.5;
		g=v.g*BIT_5_32_MULT -2147483646.5;
		b=v.b*BIT_5_32_MULT -2147483646.5;
		a=v.a*BIT_1_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (rgb484          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (bgr484          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (argb8332        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_32_MULT -2147483646.5;
		g=v.g*BIT_3_32_MULT -2147483646.5;
		b=v.b*BIT_2_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=v.a*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (argb_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=v.a*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=v.a*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_32_MULT -2147483646.5;
		g=v.g*BIT_4_32_MULT -2147483646.5;
		b=v.b*BIT_4_32_MULT -2147483646.5;
		a=v.a*BIT_4_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=v.b*BIT_8_32_MULT -2147483646.5;
		a=v.a*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=(v.a+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=(v.a+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=(v.a+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT -2147483646.5;
		g=(v.g+127.0)*BIT_8_32_MULT -2147483646.5;
		b=(v.b+127.0)*BIT_8_32_MULT -2147483646.5;
		a=(v.a+127.0)*BIT_8_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=v.a*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=v.a*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=v.a*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_32_MULT -2147483646.5;
		g=v.g*BIT_16_32_MULT -2147483646.5;
		b=v.b*BIT_16_32_MULT -2147483646.5;
		a=v.a*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=(v.a+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=(v.a+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=(v.a+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT -2147483646.5;
		g=(v.g+32767.0)*BIT_16_32_MULT -2147483646.5;
		b=(v.b+32767.0)*BIT_16_32_MULT -2147483646.5;
		a=(v.a+32767.0)*BIT_16_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=(v.a+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=(v.a+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=(v.a+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		g=(v.g+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		b=(v.b+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		a=(v.a+2147483647.0)*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=v.a*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=v.a*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=v.a*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_32_MULT -2147483646.5;
		g=v.g*BIT_32_32_MULT -2147483646.5;
		b=v.b*BIT_32_32_MULT -2147483646.5;
		a=v.a*BIT_32_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=v.a*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=v.a*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=v.a*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_32_MULT -2147483646.5;
		g=v.g*BIT_f_32_MULT -2147483646.5;
		b=v.b*BIT_f_32_MULT -2147483646.5;
		a=v.a*BIT_f_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_32_MULT -2147483646.5;
		g=v.g*BIT_9_32_MULT -2147483646.5;
		b=v.b*BIT_9_32_MULT -2147483646.5;
		a=v.a*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_32_MULT -2147483646.5;
		g=v.g*BIT_9_32_MULT -2147483646.5;
		b=v.b*BIT_9_32_MULT -2147483646.5;
		a=v.a*BIT_5_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_6_32_MULT -2147483646.5;
		a=v.a*BIT_6_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_6_32_MULT -2147483646.5;
		a=v.a*BIT_6_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=v.a*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_10_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=v.a*BIT_2_32_MULT -2147483646.5;
		return *this;
	}
	abgr_32si& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_32_MULT -2147483646.5;
		g=v.g*BIT_11_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_32_MULT -2147483646.5;
		g=v.g*BIT_11_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_12_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT -2147483646.5;
		g=v.g*BIT_12_32_MULT -2147483646.5;
		b=v.b*BIT_10_32_MULT -2147483646.5;
		a=2147483647;
		return *this;
	}
	abgr_32si& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_32_MULT -2147483646.5;
		g=v.g*BIT_8_32_MULT -2147483646.5;
		b=-2147483647;
		a=2147483647;
		return *this;
	}
} ;


//uint
struct rgba_32ui {
	uint r;
	uint g;
	uint b;
	uint a;
	rgba_32ui& operator = (rgb332          &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (bgr233          &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (rgb422          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_2_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (bgr224          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_2_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (rgb242          &v)_{
		r=v.r*BIT_2_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (bgr242          &v)_{
		r=v.r*BIT_2_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (rgb565          &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_6_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (bgr565          &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_6_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=v.a*BIT_1_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (argb1555        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=v.a*BIT_1_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=v.a*BIT_1_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=v.a*BIT_1_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (rgb484          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (bgr484          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (argb8332        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=v.a*BIT_4_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (argb_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=v.a*BIT_4_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=v.a*BIT_4_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=v.a*BIT_4_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=(v.a+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=(v.a+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=(v.a+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=(v.a+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=v.a*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=v.a*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=v.a*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=v.a*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (rgb_32ui        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (bgr_32ui        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=(v.a+2147483647.0);
		return *this;
	}
	rgba_32ui& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=(v.a+2147483647.0);
		return *this;
	}
	rgba_32ui& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=(v.a+2147483647.0);
		return *this;
	}
	rgba_32ui& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=(v.a+2147483647.0);
		return *this;
	}
	rgba_32ui& operator = (rgba_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_32ui& operator = (bgra_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_32ui& operator = (argb_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_32ui& operator = (abgr_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_32ui& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=v.a*BIT_f_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=v.a*BIT_f_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=v.a*BIT_f_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=v.a*BIT_f_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_32_MULT+0.5;
		g=v.g*BIT_9_32_MULT+0.5;
		b=v.b*BIT_9_32_MULT+0.5;
		a=v.a*BIT_5_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_32_MULT+0.5;
		g=v.g*BIT_9_32_MULT+0.5;
		b=v.b*BIT_9_32_MULT+0.5;
		a=v.a*BIT_5_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_6_32_MULT+0.5;
		a=v.a*BIT_6_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_6_32_MULT+0.5;
		a=v.a*BIT_6_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=v.a*BIT_2_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=v.a*BIT_2_32_MULT+0.5;
		return *this;
	}
	rgba_32ui& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_32_MULT+0.5;
		g=v.g*BIT_11_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_32_MULT+0.5;
		g=v.g*BIT_11_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_12_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_12_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	rgba_32ui& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=0;
		a=4294967295;
		return *this;
	}
} ;
struct bgra_32ui {
	uint b;
	uint g;
	uint r;
	uint a;
	bgra_32ui& operator = (rgb332          &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (bgr233          &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (rgb422          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_2_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (bgr224          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_2_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (rgb242          &v)_{
		r=v.r*BIT_2_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (bgr242          &v)_{
		r=v.r*BIT_2_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (rgb565          &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_6_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (bgr565          &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_6_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=v.a*BIT_1_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (argb1555        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=v.a*BIT_1_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=v.a*BIT_1_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=v.a*BIT_1_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (rgb484          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (bgr484          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (argb8332        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=v.a*BIT_4_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (argb_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=v.a*BIT_4_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=v.a*BIT_4_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=v.a*BIT_4_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=(v.a+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=(v.a+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=(v.a+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=(v.a+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=v.a*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=v.a*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=v.a*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=v.a*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (rgb_32ui        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (bgr_32ui        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=(v.a+2147483647.0);
		return *this;
	}
	bgra_32ui& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=(v.a+2147483647.0);
		return *this;
	}
	bgra_32ui& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=(v.a+2147483647.0);
		return *this;
	}
	bgra_32ui& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=(v.a+2147483647.0);
		return *this;
	}
	bgra_32ui& operator = (rgba_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra_32ui& operator = (bgra_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra_32ui& operator = (argb_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra_32ui& operator = (abgr_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	bgra_32ui& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=v.a*BIT_f_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=v.a*BIT_f_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=v.a*BIT_f_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=v.a*BIT_f_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_32_MULT+0.5;
		g=v.g*BIT_9_32_MULT+0.5;
		b=v.b*BIT_9_32_MULT+0.5;
		a=v.a*BIT_5_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_32_MULT+0.5;
		g=v.g*BIT_9_32_MULT+0.5;
		b=v.b*BIT_9_32_MULT+0.5;
		a=v.a*BIT_5_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_6_32_MULT+0.5;
		a=v.a*BIT_6_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_6_32_MULT+0.5;
		a=v.a*BIT_6_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=v.a*BIT_2_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=v.a*BIT_2_32_MULT+0.5;
		return *this;
	}
	bgra_32ui& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_32_MULT+0.5;
		g=v.g*BIT_11_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_32_MULT+0.5;
		g=v.g*BIT_11_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_12_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_12_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	bgra_32ui& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=0;
		a=4294967295;
		return *this;
	}
} ;
struct argb_32ui {
	uint a;
	uint r;
	uint g;
	uint b;
	argb_32ui& operator = (rgb332          &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (bgr233          &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (rgb422          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_2_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (bgr224          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_2_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (rgb242          &v)_{
		r=v.r*BIT_2_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (bgr242          &v)_{
		r=v.r*BIT_2_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (rgb565          &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_6_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (bgr565          &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_6_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=v.a*BIT_1_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (argb1555        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=v.a*BIT_1_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=v.a*BIT_1_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=v.a*BIT_1_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (rgb484          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (bgr484          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (argb8332        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=v.a*BIT_4_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (argb_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=v.a*BIT_4_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=v.a*BIT_4_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=v.a*BIT_4_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=(v.a+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=(v.a+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=(v.a+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=(v.a+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=v.a*BIT_16_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=v.a*BIT_16_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=v.a*BIT_16_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=v.a*BIT_16_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (rgb_32ui        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (bgr_32ui        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=(v.a+2147483647.0);
		return *this;
	}
	argb_32ui& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=(v.a+2147483647.0);
		return *this;
	}
	argb_32ui& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=(v.a+2147483647.0);
		return *this;
	}
	argb_32ui& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=(v.a+2147483647.0);
		return *this;
	}
	argb_32ui& operator = (rgba_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb_32ui& operator = (bgra_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb_32ui& operator = (argb_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb_32ui& operator = (abgr_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb_32ui& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=v.a*BIT_f_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=v.a*BIT_f_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=v.a*BIT_f_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=v.a*BIT_f_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_32_MULT+0.5;
		g=v.g*BIT_9_32_MULT+0.5;
		b=v.b*BIT_9_32_MULT+0.5;
		a=v.a*BIT_5_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_32_MULT+0.5;
		g=v.g*BIT_9_32_MULT+0.5;
		b=v.b*BIT_9_32_MULT+0.5;
		a=v.a*BIT_5_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_6_32_MULT+0.5;
		a=v.a*BIT_6_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_6_32_MULT+0.5;
		a=v.a*BIT_6_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=v.a*BIT_2_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=v.a*BIT_2_32_MULT+0.5;
		return *this;
	}
	argb_32ui& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_32_MULT+0.5;
		g=v.g*BIT_11_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_32_MULT+0.5;
		g=v.g*BIT_11_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_12_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_12_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	argb_32ui& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=0;
		a=4294967295;
		return *this;
	}
} ;
struct abgr_32ui {
	uint a;
	uint b;
	uint g;
	uint r;
	abgr_32ui& operator = (rgb332          &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (bgr233          &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (rgb422          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_2_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (bgr224          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_2_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (rgb242          &v)_{
		r=v.r*BIT_2_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (bgr242          &v)_{
		r=v.r*BIT_2_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (rgb565          &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_6_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (bgr565          &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_6_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=v.a*BIT_1_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (argb1555        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=v.a*BIT_1_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=v.a*BIT_1_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_32_MULT+0.5;
		g=v.g*BIT_5_32_MULT+0.5;
		b=v.b*BIT_5_32_MULT+0.5;
		a=v.a*BIT_1_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (rgb484          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (bgr484          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (argb8332        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_32_MULT+0.5;
		g=v.g*BIT_3_32_MULT+0.5;
		b=v.b*BIT_2_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=v.a*BIT_4_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (argb_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=v.a*BIT_4_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=v.a*BIT_4_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_32_MULT+0.5;
		g=v.g*BIT_4_32_MULT+0.5;
		b=v.b*BIT_4_32_MULT+0.5;
		a=v.a*BIT_4_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=v.b*BIT_8_32_MULT+0.5;
		a=v.a*BIT_8_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=(v.a+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=(v.a+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=(v.a+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_32_MULT+0.5;
		g=(v.g+127.0)*BIT_8_32_MULT+0.5;
		b=(v.b+127.0)*BIT_8_32_MULT+0.5;
		a=(v.a+127.0)*BIT_8_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=v.a*BIT_16_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=v.a*BIT_16_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=v.a*BIT_16_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_32_MULT+0.5;
		g=v.g*BIT_16_32_MULT+0.5;
		b=v.b*BIT_16_32_MULT+0.5;
		a=v.a*BIT_16_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_32_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_32_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_32_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (rgb_32ui        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (bgr_32ui        &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=(v.a+2147483647.0);
		return *this;
	}
	abgr_32ui& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=(v.a+2147483647.0);
		return *this;
	}
	abgr_32ui& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=(v.a+2147483647.0);
		return *this;
	}
	abgr_32ui& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0);
		g=(v.g+2147483647.0);
		b=(v.b+2147483647.0);
		a=(v.a+2147483647.0);
		return *this;
	}
	abgr_32ui& operator = (rgba_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr_32ui& operator = (bgra_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr_32ui& operator = (argb_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr_32ui& operator = (abgr_32ui       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr_32ui& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=v.a*BIT_f_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=v.a*BIT_f_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=v.a*BIT_f_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_32_MULT+0.5;
		g=v.g*BIT_f_32_MULT+0.5;
		b=v.b*BIT_f_32_MULT+0.5;
		a=v.a*BIT_f_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_32_MULT+0.5;
		g=v.g*BIT_9_32_MULT+0.5;
		b=v.b*BIT_9_32_MULT+0.5;
		a=v.a*BIT_5_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_32_MULT+0.5;
		g=v.g*BIT_9_32_MULT+0.5;
		b=v.b*BIT_9_32_MULT+0.5;
		a=v.a*BIT_5_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_6_32_MULT+0.5;
		a=v.a*BIT_6_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_6_32_MULT+0.5;
		a=v.a*BIT_6_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=v.a*BIT_2_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_10_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=v.a*BIT_2_32_MULT+0.5;
		return *this;
	}
	abgr_32ui& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_32_MULT+0.5;
		g=v.g*BIT_11_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_32_MULT+0.5;
		g=v.g*BIT_11_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_12_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_32_MULT+0.5;
		g=v.g*BIT_12_32_MULT+0.5;
		b=v.b*BIT_10_32_MULT+0.5;
		a=4294967295;
		return *this;
	}
	abgr_32ui& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_32_MULT+0.5;
		g=v.g*BIT_8_32_MULT+0.5;
		b=0;
		a=4294967295;
		return *this;
	}
} ;

//float
struct rgba_32f {
	float r;
	float g;
	float b;
	float a;
	rgba_32f& operator = (rgb332          &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (bgr233          &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (rgb422          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_2_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (bgr224          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_2_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (rgb242          &v)_{
		r=v.r*BIT_2_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (bgr242          &v)_{
		r=v.r*BIT_2_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (rgb565          &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_6_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (bgr565          &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_6_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=v.a;
		return *this;
	}
	rgba_32f& operator = (argb1555        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=v.a;
		return *this;
	}
	rgba_32f& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=v.a;
		return *this;
	}
	rgba_32f& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=v.a;
		return *this;
	}
	rgba_32f& operator = (rgb484          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (bgr484          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	rgba_32f& operator = (argb8332        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	rgba_32f& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	rgba_32f& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	rgba_32f& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=v.a*BIT_4_f_MULT;
		return *this;
	}
	rgba_32f& operator = (argb_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=v.a*BIT_4_f_MULT;
		return *this;
	}
	rgba_32f& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=v.a*BIT_4_f_MULT;
		return *this;
	}
	rgba_32f& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=v.a*BIT_4_f_MULT;
		return *this;
	}
	rgba_32f& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	rgba_32f& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	rgba_32f& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	rgba_32f& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	rgba_32f& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=(v.a+127.0)*BIT_8_f_MULT;
		return *this;
	}
	rgba_32f& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=(v.a+127.0)*BIT_8_f_MULT;
		return *this;
	}
	rgba_32f& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=(v.a+127.0)*BIT_8_f_MULT;
		return *this;
	}
	rgba_32f& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=(v.a+127.0)*BIT_8_f_MULT;
		return *this;
	}
	rgba_32f& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=v.a*BIT_16_f_MULT;
		return *this;
	}
	rgba_32f& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=v.a*BIT_16_f_MULT;
		return *this;
	}
	rgba_32f& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=v.a*BIT_16_f_MULT;
		return *this;
	}
	rgba_32f& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=v.a*BIT_16_f_MULT;
		return *this;
	}
	rgba_32f& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=(v.a+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	rgba_32f& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=(v.a+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	rgba_32f& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=(v.a+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	rgba_32f& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=(v.a+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	rgba_32f& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=1;
		return *this;
	}
	rgba_32f& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=(v.a+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	rgba_32f& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=(v.a+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	rgba_32f& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=(v.a+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	rgba_32f& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=(v.a+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	rgba_32f& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	rgba_32f& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	rgba_32f& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	rgba_32f& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	rgba_32f& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=v.a*BIT_f_f_MULT;
		return *this;
	}
	rgba_32f& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=v.a*BIT_f_f_MULT;
		return *this;
	}
	rgba_32f& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=v.a*BIT_f_f_MULT;
		return *this;
	}
	rgba_32f& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=v.a*BIT_f_f_MULT;
		return *this;
	}
	rgba_32f& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_f_MULT;
		g=v.g*BIT_9_f_MULT;
		b=v.b*BIT_9_f_MULT;
		return *this;
	}
	rgba_32f& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_f_MULT;
		g=v.g*BIT_9_f_MULT;
		b=v.b*BIT_9_f_MULT;
		return *this;
	}
	rgba_32f& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_6_f_MULT;
		return *this;
	}
	rgba_32f& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_6_f_MULT;
		return *this;
	}
	rgba_32f& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_10_f_MULT;
		return *this;
	}
	rgba_32f& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_10_f_MULT;
		return *this;
	}
	rgba_32f& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_f_MULT;
		g=v.g*BIT_11_f_MULT;
		b=v.b*BIT_10_f_MULT;
		return *this;
	}
	rgba_32f& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_f_MULT;
		g=v.g*BIT_11_f_MULT;
		b=v.b*BIT_10_f_MULT;
		return *this;
	}
	rgba_32f& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_12_f_MULT;
		b=v.b*BIT_10_f_MULT;
		return *this;
	}
	rgba_32f& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_12_f_MULT;
		b=v.b*BIT_10_f_MULT;
		return *this;
	}
	rgba_32f& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=0;
		return *this;
	}
};
struct bgra_32f {
	float b;
	float g;
	float r;
	float a;
	bgra_32f& operator = (rgb332          &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (bgr233          &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (rgb422          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_2_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (bgr224          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_2_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (rgb242          &v)_{
		r=v.r*BIT_2_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (bgr242          &v)_{
		r=v.r*BIT_2_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (rgb565          &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_6_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (bgr565          &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_6_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=v.a*BIT_1_f_MULT;
		return *this;
	}
	bgra_32f& operator = (argb1555        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=v.a*BIT_1_f_MULT;
		return *this;
	}
	bgra_32f& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=v.a*BIT_1_f_MULT;
		return *this;
	}
	bgra_32f& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=v.a*BIT_1_f_MULT;
		return *this;
	}
	bgra_32f& operator = (rgb484          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (bgr484          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	bgra_32f& operator = (argb8332        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	bgra_32f& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	bgra_32f& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	bgra_32f& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=v.a*BIT_4_f_MULT;
		return *this;
	}
	bgra_32f& operator = (argb_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=v.a*BIT_4_f_MULT;
		return *this;
	}
	bgra_32f& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=v.a*BIT_4_f_MULT;
		return *this;
	}
	bgra_32f& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=v.a*BIT_4_f_MULT;
		return *this;
	}
	bgra_32f& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_4_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	bgra_32f& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	bgra_32f& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	bgra_32f& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	bgra_32f& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=(v.a+127.0)*BIT_8_f_MULT;
		return *this;
	}
	bgra_32f& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=(v.a+127.0)*BIT_8_f_MULT;
		return *this;
	}
	bgra_32f& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=(v.a+127.0)*BIT_8_f_MULT;
		return *this;
	}
	bgra_32f& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=(v.a+127.0)*BIT_8_f_MULT;
		return *this;
	}
	bgra_32f& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=v.a*BIT_16_f_MULT;
		return *this;
	}
	bgra_32f& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=v.a*BIT_16_f_MULT;
		return *this;
	}
	bgra_32f& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=v.a*BIT_16_f_MULT;
		return *this;
	}
	bgra_32f& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=v.a*BIT_16_f_MULT;
		return *this;
	}
	bgra_32f& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=(v.a+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	bgra_32f& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=(v.a+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	bgra_32f& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=(v.a+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	bgra_32f& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=(v.a+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	bgra_32f& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=(v.a+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	bgra_32f& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=(v.a+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	bgra_32f& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=(v.a+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	bgra_32f& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=(v.a+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	bgra_32f& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	bgra_32f& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	bgra_32f& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	bgra_32f& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	bgra_32f& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	bgra_32f& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=v.a*BIT_f_f_MULT;
		return *this;
	}
	bgra_32f& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=v.a*BIT_f_f_MULT;
		return *this;
	}
	bgra_32f& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=v.a*BIT_f_f_MULT;
		return *this;
	}
	bgra_32f& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_f_MULT;
		g=v.g*BIT_9_f_MULT;
		b=v.b*BIT_9_f_MULT;
		a=v.a*BIT_5_f_MULT;
		return *this;
	}
	bgra_32f& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_f_MULT;
		g=v.g*BIT_9_f_MULT;
		b=v.b*BIT_9_f_MULT;
		a=v.a*BIT_5_f_MULT;
		return *this;
	}
	bgra_32f& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_6_f_MULT;
		a=v.a*BIT_6_f_MULT;
		return *this;
	}
	bgra_32f& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_6_f_MULT;
		a=v.a*BIT_6_f_MULT;
		return *this;
	}
	bgra_32f& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_10_f_MULT;
		a=v.a*BIT_2_f_MULT;
		return *this;
	}
	bgra_32f& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_10_f_MULT;
		a=v.a*BIT_2_f_MULT;
		return *this;
	}
	bgra_32f& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_f_MULT;
		g=v.g*BIT_11_f_MULT;
		b=v.b*BIT_10_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_f_MULT;
		g=v.g*BIT_11_f_MULT;
		b=v.b*BIT_10_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_12_f_MULT;
		b=v.b*BIT_10_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_12_f_MULT;
		b=v.b*BIT_10_f_MULT;
		a=1.0;
		return *this;
	}
	bgra_32f& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=0;
		a=1.0;
		return *this;
	}
};
struct argb_32f {
	float a;
	float r;
	float g;
	float b;
	argb_32f& operator = (rgb332          &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (bgr233          &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (rgb422          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_2_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (bgr224          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_2_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (rgb242          &v)_{
		r=v.r*BIT_2_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (bgr242          &v)_{
		r=v.r*BIT_2_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (rgb565          &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_6_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (bgr565          &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_6_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=v.a*BIT_1_f_MULT;
		return *this;
	}
	argb_32f& operator = (argb1555        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=v.a*BIT_1_f_MULT;
		return *this;
	}
	argb_32f& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=v.a*BIT_1_f_MULT;
		return *this;
	}
	argb_32f& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=v.a*BIT_1_f_MULT;
		return *this;
	}
	argb_32f& operator = (rgb484          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (bgr484          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	argb_32f& operator = (argb8332        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	argb_32f& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	argb_32f& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	argb_32f& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=v.a*BIT_4_f_MULT;
		return *this;
	}
	argb_32f& operator = (argb_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=v.a*BIT_4_f_MULT;
		return *this;
	}
	argb_32f& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=v.a*BIT_4_f_MULT;
		return *this;
	}
	argb_32f& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=v.a*BIT_4_f_MULT;
		return *this;
	}
	argb_32f& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_4_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	argb_32f& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	argb_32f& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	argb_32f& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	argb_32f& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=(v.a+127.0)*BIT_8_f_MULT;
		return *this;
	}
	argb_32f& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=(v.a+127.0)*BIT_8_f_MULT;
		return *this;
	}
	argb_32f& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=(v.a+127.0)*BIT_8_f_MULT;
		return *this;
	}
	argb_32f& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=(v.a+127.0)*BIT_8_f_MULT;
		return *this;
	}
	argb_32f& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=v.a*BIT_16_f_MULT;
		return *this;
	}
	argb_32f& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=v.a*BIT_16_f_MULT;
		return *this;
	}
	argb_32f& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=v.a*BIT_16_f_MULT;
		return *this;
	}
	argb_32f& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=v.a*BIT_16_f_MULT;
		return *this;
	}
	argb_32f& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=(v.a+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	argb_32f& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=(v.a+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	argb_32f& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=(v.a+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	argb_32f& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=(v.a+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	argb_32f& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=(v.a+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	argb_32f& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=(v.a+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	argb_32f& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=(v.a+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	argb_32f& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=(v.a+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	argb_32f& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	argb_32f& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	argb_32f& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	argb_32f& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	argb_32f& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	argb_32f& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=v.a*BIT_f_f_MULT;
		return *this;
	}
	argb_32f& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=v.a*BIT_f_f_MULT;
		return *this;
	}
	argb_32f& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=v.a*BIT_f_f_MULT;
		return *this;
	}
	argb_32f& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_f_MULT;
		g=v.g*BIT_9_f_MULT;
		b=v.b*BIT_9_f_MULT;
		a=v.a*BIT_5_f_MULT;
		return *this;
	}
	argb_32f& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_f_MULT;
		g=v.g*BIT_9_f_MULT;
		b=v.b*BIT_9_f_MULT;
		a=v.a*BIT_5_f_MULT;
		return *this;
	}
	argb_32f& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_6_f_MULT;
		a=v.a*BIT_6_f_MULT;
		return *this;
	}
	argb_32f& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_6_f_MULT;
		a=v.a*BIT_6_f_MULT;
		return *this;
	}
	argb_32f& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_10_f_MULT;
		a=v.a*BIT_2_f_MULT;
		return *this;
	}
	argb_32f& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_10_f_MULT;
		a=v.a*BIT_2_f_MULT;
		return *this;
	}
	argb_32f& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_f_MULT;
		g=v.g*BIT_11_f_MULT;
		b=v.b*BIT_10_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_f_MULT;
		g=v.g*BIT_11_f_MULT;
		b=v.b*BIT_10_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_12_f_MULT;
		b=v.b*BIT_10_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_12_f_MULT;
		b=v.b*BIT_10_f_MULT;
		a=1.0;
		return *this;
	}
	argb_32f& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=0;
		a=1.0;
		return *this;
	}
};
struct abgr_32f {
	float a;
	float b;
	float g;
	float r;
	abgr_32f& operator = (rgb332          &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (bgr233          &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (rgb422          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_2_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (bgr224          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_2_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (rgb242          &v)_{
		r=v.r*BIT_2_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (bgr242          &v)_{
		r=v.r*BIT_2_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (rgb565          &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_6_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (bgr565          &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_6_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=v.a*BIT_1_f_MULT;
		return *this;
	}
	abgr_32f& operator = (argb1555        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=v.a*BIT_1_f_MULT;
		return *this;
	}
	abgr_32f& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=v.a*BIT_1_f_MULT;
		return *this;
	}
	abgr_32f& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_f_MULT;
		g=v.g*BIT_5_f_MULT;
		b=v.b*BIT_5_f_MULT;
		a=v.a*BIT_1_f_MULT;
		return *this;
	}
	abgr_32f& operator = (rgb484          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (bgr484          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	abgr_32f& operator = (argb8332        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	abgr_32f& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	abgr_32f& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_f_MULT;
		g=v.g*BIT_3_f_MULT;
		b=v.b*BIT_2_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	abgr_32f& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=v.a*BIT_4_f_MULT;
		return *this;
	}
	abgr_32f& operator = (argb_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=v.a*BIT_4_f_MULT;
		return *this;
	}
	abgr_32f& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=v.a*BIT_4_f_MULT;
		return *this;
	}
	abgr_32f& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_f_MULT;
		g=v.g*BIT_4_f_MULT;
		b=v.b*BIT_4_f_MULT;
		a=v.a*BIT_4_f_MULT;
		return *this;
	}
	abgr_32f& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_4_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	abgr_32f& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	abgr_32f& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	abgr_32f& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=v.b*BIT_8_f_MULT;
		a=v.a*BIT_8_f_MULT;
		return *this;
	}
	abgr_32f& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=(v.a+127.0)*BIT_8_f_MULT;
		return *this;
	}
	abgr_32f& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=(v.a+127.0)*BIT_8_f_MULT;
		return *this;
	}
	abgr_32f& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=(v.a+127.0)*BIT_8_f_MULT;
		return *this;
	}
	abgr_32f& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_f_MULT;
		g=(v.g+127.0)*BIT_8_f_MULT;
		b=(v.b+127.0)*BIT_8_f_MULT;
		a=(v.a+127.0)*BIT_8_f_MULT;
		return *this;
	}
	abgr_32f& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=v.a*BIT_16_f_MULT;
		return *this;
	}
	abgr_32f& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=v.a*BIT_16_f_MULT;
		return *this;
	}
	abgr_32f& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=v.a*BIT_16_f_MULT;
		return *this;
	}
	abgr_32f& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_f_MULT;
		g=v.g*BIT_16_f_MULT;
		b=v.b*BIT_16_f_MULT;
		a=v.a*BIT_16_f_MULT;
		return *this;
	}
	abgr_32f& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=(v.a+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	abgr_32f& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=(v.a+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	abgr_32f& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=(v.a+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	abgr_32f& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_f_MULT;
		g=(v.g+32767.0)*BIT_16_f_MULT;
		b=(v.b+32767.0)*BIT_16_f_MULT;
		a=(v.a+32767.0)*BIT_16_f_MULT;
		return *this;
	}
	abgr_32f& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=(v.a+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	abgr_32f& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=(v.a+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	abgr_32f& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=(v.a+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	abgr_32f& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_f_MULT;
		g=(v.g+2147483647.0)*BIT_32_f_MULT;
		b=(v.b+2147483647.0)*BIT_32_f_MULT;
		a=(v.a+2147483647.0)*BIT_32_f_MULT;
		return *this;
	}
	abgr_32f& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	abgr_32f& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	abgr_32f& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	abgr_32f& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_f_MULT;
		g=v.g*BIT_32_f_MULT;
		b=v.b*BIT_32_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	abgr_32f& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=v.a*BIT_32_f_MULT;
		return *this;
	}
	abgr_32f& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=v.a*BIT_f_f_MULT;
		return *this;
	}
	abgr_32f& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=v.a*BIT_f_f_MULT;
		return *this;
	}
	abgr_32f& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_f_MULT;
		g=v.g*BIT_f_f_MULT;
		b=v.b*BIT_f_f_MULT;
		a=v.a*BIT_f_f_MULT;
		return *this;
	}
	abgr_32f& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_f_MULT;
		g=v.g*BIT_9_f_MULT;
		b=v.b*BIT_9_f_MULT;
		a=v.a*BIT_5_f_MULT;
		return *this;
	}
	abgr_32f& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_f_MULT;
		g=v.g*BIT_9_f_MULT;
		b=v.b*BIT_9_f_MULT;
		a=v.a*BIT_5_f_MULT;
		return *this;
	}
	abgr_32f& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_6_f_MULT;
		a=v.a*BIT_6_f_MULT;
		return *this;
	}
	abgr_32f& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_6_f_MULT;
		a=v.a*BIT_6_f_MULT;
		return *this;
	}
	abgr_32f& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_10_f_MULT;
		a=v.a*BIT_2_f_MULT;
		return *this;
	}
	abgr_32f& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_10_f_MULT;
		b=v.b*BIT_10_f_MULT;
		a=v.a*BIT_2_f_MULT;
		return *this;
	}
	abgr_32f& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_f_MULT;
		g=v.g*BIT_11_f_MULT;
		b=v.b*BIT_10_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_f_MULT;
		g=v.g*BIT_11_f_MULT;
		b=v.b*BIT_10_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_12_f_MULT;
		b=v.b*BIT_10_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_f_MULT;
		g=v.g*BIT_12_f_MULT;
		b=v.b*BIT_10_f_MULT;
		a=1.0;
		return *this;
	}
	abgr_32f& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_f_MULT;
		g=v.g*BIT_8_f_MULT;
		b=0;
		a=1.0;
		return *this;
	}
} ;




struct rgba_9995 {
	ushort r:9;
	ushort g:9;
	ushort b:9;
	ushort a:5;
	rgba_9995& operator = (rgb332          &v)_{
		r=v.r*BIT_3_9_MULT+0.5;
		g=v.g*BIT_3_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (bgr233          &v)_{
		r=v.r*BIT_3_9_MULT+0.5;
		g=v.g*BIT_3_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (rgb422          &v)_{
		r=v.r*BIT_4_9_MULT+0.5;
		g=v.g*BIT_2_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (bgr224          &v)_{
		r=v.r*BIT_4_9_MULT+0.5;
		g=v.g*BIT_2_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (rgb242          &v)_{
		r=v.r*BIT_2_9_MULT+0.5;
		g=v.g*BIT_4_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (bgr242          &v)_{
		r=v.r*BIT_2_9_MULT+0.5;
		g=v.g*BIT_4_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (rgb565          &v)_{
		r=v.r*BIT_5_9_MULT+0.5;
		g=v.g*BIT_6_9_MULT+0.5;
		b=v.b*BIT_5_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (bgr565          &v)_{
		r=v.r*BIT_5_9_MULT+0.5;
		g=v.g*BIT_6_9_MULT+0.5;
		b=v.b*BIT_5_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_9_MULT+0.5;
		g=v.g*BIT_5_9_MULT+0.5;
		b=v.b*BIT_5_9_MULT+0.5;
		a=v.a*BIT_1_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (argb1555        &v)_{
		r=v.r*BIT_5_9_MULT+0.5;
		g=v.g*BIT_5_9_MULT+0.5;
		b=v.b*BIT_5_9_MULT+0.5;
		a=v.a*BIT_1_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_9_MULT+0.5;
		g=v.g*BIT_5_9_MULT+0.5;
		b=v.b*BIT_5_9_MULT+0.5;
		a=v.a*BIT_1_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_9_MULT+0.5;
		g=v.g*BIT_5_9_MULT+0.5;
		b=v.b*BIT_5_9_MULT+0.5;
		a=v.a*BIT_1_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (rgb484          &v)_{
		r=v.r*BIT_4_9_MULT+0.5;
		g=v.g*BIT_8_9_MULT+0.5;
		b=v.b*BIT_4_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (bgr484          &v)_{
		r=v.r*BIT_4_9_MULT+0.5;
		g=v.g*BIT_8_9_MULT+0.5;
		b=v.b*BIT_4_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_9_MULT+0.5;
		g=v.g*BIT_3_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=v.a*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (argb8332        &v)_{
		r=v.r*BIT_3_9_MULT+0.5;
		g=v.g*BIT_3_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=v.a*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_9_MULT+0.5;
		g=v.g*BIT_3_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=v.a*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_9_MULT+0.5;
		g=v.g*BIT_3_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=v.a*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_9_MULT+0.5;
		g=v.g*BIT_4_9_MULT+0.5;
		b=v.b*BIT_4_9_MULT+0.5;
		a=v.a*BIT_4_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (argb_4          &v)_{
		r=v.r*BIT_4_9_MULT+0.5;
		g=v.g*BIT_4_9_MULT+0.5;
		b=v.b*BIT_4_9_MULT+0.5;
		a=v.a*BIT_4_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_9_MULT+0.5;
		g=v.g*BIT_4_9_MULT+0.5;
		b=v.b*BIT_4_9_MULT+0.5;
		a=v.a*BIT_4_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_9_MULT+0.5;
		g=v.g*BIT_4_9_MULT+0.5;
		b=v.b*BIT_4_9_MULT+0.5;
		a=v.a*BIT_4_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_9_MULT+0.5;
		g=v.g*BIT_8_9_MULT+0.5;
		b=v.b*BIT_8_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_9_MULT+0.5;
		g=v.g*BIT_8_9_MULT+0.5;
		b=v.b*BIT_8_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_9_MULT+0.5;
		g=(v.g+127.0)*BIT_8_9_MULT+0.5;
		b=(v.b+127.0)*BIT_8_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_9_MULT+0.5;
		g=(v.g+127.0)*BIT_8_9_MULT+0.5;
		b=(v.b+127.0)*BIT_8_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_9_MULT+0.5;
		g=v.g*BIT_8_9_MULT+0.5;
		b=v.b*BIT_8_9_MULT+0.5;
		a=v.a*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_9_MULT+0.5;
		g=v.g*BIT_8_9_MULT+0.5;
		b=v.b*BIT_8_9_MULT+0.5;
		a=v.a*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_9_MULT+0.5;
		g=v.g*BIT_8_9_MULT+0.5;
		b=v.b*BIT_8_9_MULT+0.5;
		a=v.a*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_9_MULT+0.5;
		g=v.g*BIT_8_9_MULT+0.5;
		b=v.b*BIT_8_9_MULT+0.5;
		a=v.a*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_9_MULT+0.5;
		g=(v.g+127.0)*BIT_8_9_MULT+0.5;
		b=(v.b+127.0)*BIT_8_9_MULT+0.5;
		a=(v.a+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_9_MULT+0.5;
		g=(v.g+127.0)*BIT_8_9_MULT+0.5;
		b=(v.b+127.0)*BIT_8_9_MULT+0.5;
		a=(v.a+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_9_MULT+0.5;
		g=(v.g+127.0)*BIT_8_9_MULT+0.5;
		b=(v.b+127.0)*BIT_8_9_MULT+0.5;
		a=(v.a+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_9_MULT+0.5;
		g=(v.g+127.0)*BIT_8_9_MULT+0.5;
		b=(v.b+127.0)*BIT_8_9_MULT+0.5;
		a=(v.a+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_9_MULT+0.5;
		g=v.g*BIT_16_9_MULT+0.5;
		b=v.b*BIT_16_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_9_MULT+0.5;
		g=v.g*BIT_16_9_MULT+0.5;
		b=v.b*BIT_16_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_9_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_9_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_9_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_9_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_9_MULT+0.5;
		g=v.g*BIT_16_9_MULT+0.5;
		b=v.b*BIT_16_9_MULT+0.5;
		a=v.a*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_9_MULT+0.5;
		g=v.g*BIT_16_9_MULT+0.5;
		b=v.b*BIT_16_9_MULT+0.5;
		a=v.a*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_9_MULT+0.5;
		g=v.g*BIT_16_9_MULT+0.5;
		b=v.b*BIT_16_9_MULT+0.5;
		a=v.a*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_9_MULT+0.5;
		g=v.g*BIT_16_9_MULT+0.5;
		b=v.b*BIT_16_9_MULT+0.5;
		a=v.a*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_9_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_9_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_9_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_9_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_9_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_9_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_9_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_9_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_9_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_9_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_9_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_9_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_9_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_9_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_9_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_9_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_9_MULT+0.5;
		g=v.g*BIT_32_9_MULT+0.5;
		b=v.b*BIT_32_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_9_MULT+0.5;
		g=v.g*BIT_32_9_MULT+0.5;
		b=v.b*BIT_32_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_9_MULT+0.5;
		g=v.g*BIT_f_9_MULT+0.5;
		b=v.b*BIT_f_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_9_MULT+0.5;
		g=v.g*BIT_f_9_MULT+0.5;
		b=v.b*BIT_f_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_9_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_9_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_9_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_9_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_9_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_9_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_9_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_9_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_9_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_9_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_9_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_9_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_9_MULT+0.5;
		g=v.g*BIT_32_9_MULT+0.5;
		b=v.b*BIT_32_9_MULT+0.5;
		a=v.a*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_9_MULT+0.5;
		g=v.g*BIT_32_9_MULT+0.5;
		b=v.b*BIT_32_9_MULT+0.5;
		a=v.a*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_9_MULT+0.5;
		g=v.g*BIT_32_9_MULT+0.5;
		b=v.b*BIT_32_9_MULT+0.5;
		a=v.a*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_9_MULT+0.5;
		g=v.g*BIT_32_9_MULT+0.5;
		b=v.b*BIT_32_9_MULT+0.5;
		a=v.a*BIT_32_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_9_MULT+0.5;
		g=v.g*BIT_f_9_MULT+0.5;
		b=v.b*BIT_f_9_MULT+0.5;
		a=v.a*BIT_f_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_9_MULT+0.5;
		g=v.g*BIT_f_9_MULT+0.5;
		b=v.b*BIT_f_9_MULT+0.5;
		a=v.a*BIT_f_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_9_MULT+0.5;
		g=v.g*BIT_f_9_MULT+0.5;
		b=v.b*BIT_f_9_MULT+0.5;
		a=v.a*BIT_f_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_9_MULT+0.5;
		g=v.g*BIT_f_9_MULT+0.5;
		b=v.b*BIT_f_9_MULT+0.5;
		a=v.a*BIT_f_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (rgba_9995       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_9995& operator = (argb_5999       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_9995& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_9_MULT+0.5;
		g=v.g*BIT_10_9_MULT+0.5;
		b=v.b*BIT_6_9_MULT+0.5;
		a=v.a*BIT_6_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_9_MULT+0.5;
		g=v.g*BIT_10_9_MULT+0.5;
		b=v.b*BIT_6_9_MULT+0.5;
		a=v.a*BIT_6_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_9_MULT+0.5;
		g=v.g*BIT_10_9_MULT+0.5;
		b=v.b*BIT_10_9_MULT+0.5;
		a=v.a*BIT_2_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_9_MULT+0.5;
		g=v.g*BIT_10_9_MULT+0.5;
		b=v.b*BIT_10_9_MULT+0.5;
		a=v.a*BIT_2_5_MULT+0.5;
		return *this;
	}
	rgba_9995& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_9_MULT+0.5;
		g=v.g*BIT_11_9_MULT+0.5;
		b=v.b*BIT_10_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_9_MULT+0.5;
		g=v.g*BIT_11_9_MULT+0.5;
		b=v.b*BIT_10_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_9_MULT+0.5;
		g=v.g*BIT_12_9_MULT+0.5;
		b=v.b*BIT_10_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_9_MULT+0.5;
		g=v.g*BIT_12_9_MULT+0.5;
		b=v.b*BIT_10_9_MULT+0.5;
		a=31;
		return *this;
	}
	rgba_9995& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_9_MULT+0.5;
		g=v.g*BIT_8_9_MULT+0.5;
		b=0;
		a=31;
		return *this;
	}
};
struct 	argb_5999{
	ushort a:5;
	ushort b:9;
	ushort g:9;
	ushort r:9;
	argb_5999& operator = (rgb332          &v)_{
		r=v.r*BIT_3_9_MULT+0.5;
		g=v.g*BIT_3_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (bgr233          &v)_{
		r=v.r*BIT_3_9_MULT+0.5;
		g=v.g*BIT_3_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (rgb422          &v)_{
		r=v.r*BIT_4_9_MULT+0.5;
		g=v.g*BIT_2_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (bgr224          &v)_{
		r=v.r*BIT_4_9_MULT+0.5;
		g=v.g*BIT_2_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (rgb242          &v)_{
		r=v.r*BIT_2_9_MULT+0.5;
		g=v.g*BIT_4_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (bgr242          &v)_{
		r=v.r*BIT_2_9_MULT+0.5;
		g=v.g*BIT_4_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (rgb565          &v)_{
		r=v.r*BIT_5_9_MULT+0.5;
		g=v.g*BIT_6_9_MULT+0.5;
		b=v.b*BIT_5_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (bgr565          &v)_{
		r=v.r*BIT_5_9_MULT+0.5;
		g=v.g*BIT_6_9_MULT+0.5;
		b=v.b*BIT_5_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_9_MULT+0.5;
		g=v.g*BIT_5_9_MULT+0.5;
		b=v.b*BIT_5_9_MULT+0.5;
		a=v.a*BIT_1_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (argb1555        &v)_{
		r=v.r*BIT_5_9_MULT+0.5;
		g=v.g*BIT_5_9_MULT+0.5;
		b=v.b*BIT_5_9_MULT+0.5;
		a=v.a*BIT_1_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_9_MULT+0.5;
		g=v.g*BIT_5_9_MULT+0.5;
		b=v.b*BIT_5_9_MULT+0.5;
		a=v.a*BIT_1_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_9_MULT+0.5;
		g=v.g*BIT_5_9_MULT+0.5;
		b=v.b*BIT_5_9_MULT+0.5;
		a=v.a*BIT_1_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (rgb484          &v)_{
		r=v.r*BIT_4_9_MULT+0.5;
		g=v.g*BIT_8_9_MULT+0.5;
		b=v.b*BIT_4_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (bgr484          &v)_{
		r=v.r*BIT_4_9_MULT+0.5;
		g=v.g*BIT_8_9_MULT+0.5;
		b=v.b*BIT_4_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_9_MULT+0.5;
		g=v.g*BIT_3_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=v.a*BIT_8_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (argb8332        &v)_{
		r=v.r*BIT_3_9_MULT+0.5;
		g=v.g*BIT_3_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=v.a*BIT_8_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_9_MULT+0.5;
		g=v.g*BIT_3_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=v.a*BIT_8_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_9_MULT+0.5;
		g=v.g*BIT_3_9_MULT+0.5;
		b=v.b*BIT_2_9_MULT+0.5;
		a=v.a*BIT_8_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_9_MULT+0.5;
		g=v.g*BIT_4_9_MULT+0.5;
		b=v.b*BIT_4_9_MULT+0.5;
		a=v.a*BIT_4_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (argb_4          &v)_{
		r=v.r*BIT_4_9_MULT+0.5;
		g=v.g*BIT_4_9_MULT+0.5;
		b=v.b*BIT_4_9_MULT+0.5;
		a=v.a*BIT_4_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_9_MULT+0.5;
		g=v.g*BIT_4_9_MULT+0.5;
		b=v.b*BIT_4_9_MULT+0.5;
		a=v.a*BIT_4_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_9_MULT+0.5;
		g=v.g*BIT_4_9_MULT+0.5;
		b=v.b*BIT_4_9_MULT+0.5;
		a=v.a*BIT_4_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_9_MULT+0.5;
		g=v.g*BIT_8_9_MULT+0.5;
		b=v.b*BIT_8_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_9_MULT+0.5;
		g=v.g*BIT_8_9_MULT+0.5;
		b=v.b*BIT_8_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_9_MULT+0.5;
		g=(v.g+127.0)*BIT_8_9_MULT+0.5;
		b=(v.b+127.0)*BIT_8_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_9_MULT+0.5;
		g=(v.g+127.0)*BIT_8_9_MULT+0.5;
		b=(v.b+127.0)*BIT_8_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_9_MULT+0.5;
		g=v.g*BIT_8_9_MULT+0.5;
		b=v.b*BIT_8_9_MULT+0.5;
		a=v.a*BIT_8_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_9_MULT+0.5;
		g=v.g*BIT_8_9_MULT+0.5;
		b=v.b*BIT_8_9_MULT+0.5;
		a=v.a*BIT_8_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_9_MULT+0.5;
		g=v.g*BIT_8_9_MULT+0.5;
		b=v.b*BIT_8_9_MULT+0.5;
		a=v.a*BIT_8_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_9_MULT+0.5;
		g=v.g*BIT_8_9_MULT+0.5;
		b=v.b*BIT_8_9_MULT+0.5;
		a=v.a*BIT_8_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_9_MULT+0.5;
		g=(v.g+127.0)*BIT_8_9_MULT+0.5;
		b=(v.b+127.0)*BIT_8_9_MULT+0.5;
		a=(v.a+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_9_MULT+0.5;
		g=(v.g+127.0)*BIT_8_9_MULT+0.5;
		b=(v.b+127.0)*BIT_8_9_MULT+0.5;
		a=(v.a+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_9_MULT+0.5;
		g=(v.g+127.0)*BIT_8_9_MULT+0.5;
		b=(v.b+127.0)*BIT_8_9_MULT+0.5;
		a=(v.a+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_9_MULT+0.5;
		g=(v.g+127.0)*BIT_8_9_MULT+0.5;
		b=(v.b+127.0)*BIT_8_9_MULT+0.5;
		a=(v.a+127.0)*BIT_8_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_9_MULT+0.5;
		g=v.g*BIT_16_9_MULT+0.5;
		b=v.b*BIT_16_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_9_MULT+0.5;
		g=v.g*BIT_16_9_MULT+0.5;
		b=v.b*BIT_16_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_9_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_9_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_9_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_9_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_9_MULT+0.5;
		g=v.g*BIT_16_9_MULT+0.5;
		b=v.b*BIT_16_9_MULT+0.5;
		a=v.a*BIT_16_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_9_MULT+0.5;
		g=v.g*BIT_16_9_MULT+0.5;
		b=v.b*BIT_16_9_MULT+0.5;
		a=v.a*BIT_16_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_9_MULT+0.5;
		g=v.g*BIT_16_9_MULT+0.5;
		b=v.b*BIT_16_9_MULT+0.5;
		a=v.a*BIT_16_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_9_MULT+0.5;
		g=v.g*BIT_16_9_MULT+0.5;
		b=v.b*BIT_16_9_MULT+0.5;
		a=v.a*BIT_16_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_9_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_9_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_9_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_9_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_9_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_9_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_9_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_9_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_9_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_9_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_9_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_9_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_9_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_9_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_9_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_9_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_9_MULT+0.5;
		g=v.g*BIT_32_9_MULT+0.5;
		b=v.b*BIT_32_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_9_MULT+0.5;
		g=v.g*BIT_32_9_MULT+0.5;
		b=v.b*BIT_32_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_9_MULT+0.5;
		g=v.g*BIT_f_9_MULT+0.5;
		b=v.b*BIT_f_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_9_MULT+0.5;
		g=v.g*BIT_f_9_MULT+0.5;
		b=v.b*BIT_f_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_9_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_9_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_9_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_9_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_9_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_9_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_9_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_9_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_9_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_9_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_9_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_9_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_9_MULT+0.5;
		g=v.g*BIT_32_9_MULT+0.5;
		b=v.b*BIT_32_9_MULT+0.5;
		a=v.a*BIT_32_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_9_MULT+0.5;
		g=v.g*BIT_32_9_MULT+0.5;
		b=v.b*BIT_32_9_MULT+0.5;
		a=v.a*BIT_32_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_9_MULT+0.5;
		g=v.g*BIT_32_9_MULT+0.5;
		b=v.b*BIT_32_9_MULT+0.5;
		a=v.a*BIT_32_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_9_MULT+0.5;
		g=v.g*BIT_32_9_MULT+0.5;
		b=v.b*BIT_32_9_MULT+0.5;
		a=v.a*BIT_32_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_9_MULT+0.5;
		g=v.g*BIT_f_9_MULT+0.5;
		b=v.b*BIT_f_9_MULT+0.5;
		a=v.a*BIT_f_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_9_MULT+0.5;
		g=v.g*BIT_f_9_MULT+0.5;
		b=v.b*BIT_f_9_MULT+0.5;
		a=v.a*BIT_f_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_9_MULT+0.5;
		g=v.g*BIT_f_9_MULT+0.5;
		b=v.b*BIT_f_9_MULT+0.5;
		a=v.a*BIT_f_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_9_MULT+0.5;
		g=v.g*BIT_f_9_MULT+0.5;
		b=v.b*BIT_f_9_MULT+0.5;
		a=v.a*BIT_f_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (rgba_9995       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb_5999& operator = (argb_5999       &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	argb_5999& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_9_MULT+0.5;
		g=v.g*BIT_10_9_MULT+0.5;
		b=v.b*BIT_6_9_MULT+0.5;
		a=v.a*BIT_6_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_9_MULT+0.5;
		g=v.g*BIT_10_9_MULT+0.5;
		b=v.b*BIT_6_9_MULT+0.5;
		a=v.a*BIT_6_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_9_MULT+0.5;
		g=v.g*BIT_10_9_MULT+0.5;
		b=v.b*BIT_10_9_MULT+0.5;
		a=v.a*BIT_2_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_9_MULT+0.5;
		g=v.g*BIT_10_9_MULT+0.5;
		b=v.b*BIT_10_9_MULT+0.5;
		a=v.a*BIT_2_5_MULT+0.5;
		return *this;
	}
	argb_5999& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_9_MULT+0.5;
		g=v.g*BIT_11_9_MULT+0.5;
		b=v.b*BIT_10_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_9_MULT+0.5;
		g=v.g*BIT_11_9_MULT+0.5;
		b=v.b*BIT_10_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_9_MULT+0.5;
		g=v.g*BIT_12_9_MULT+0.5;
		b=v.b*BIT_10_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_9_MULT+0.5;
		g=v.g*BIT_12_9_MULT+0.5;
		b=v.b*BIT_10_9_MULT+0.5;
		a=31;
		return *this;
	}
	argb_5999& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_9_MULT+0.5;
		g=v.g*BIT_8_9_MULT+0.5;
		b=0;
		a=31;
		return *this;
	}
};

struct 	rgba_10_10_6_6 {
	ushort r:10;
	ushort g:10;
	ushort b:6;
	ushort a:6;
	rgba_10_10_6_6& operator = (rgb332          &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgr233          &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgb422          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_2_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgr224          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_2_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgb242          &v)_{
		r=v.r*BIT_2_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgr242          &v)_{
		r=v.r*BIT_2_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgb565          &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_6_10_MULT+0.5;
		b=v.b*BIT_5_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgr565          &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_6_10_MULT+0.5;
		b=v.b*BIT_5_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_10_MULT+0.5;
		b=v.b*BIT_5_6_MULT+0.5;
		a=v.a*BIT_1_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (argb1555        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_10_MULT+0.5;
		b=v.b*BIT_5_6_MULT+0.5;
		a=v.a*BIT_1_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_10_MULT+0.5;
		b=v.b*BIT_5_6_MULT+0.5;
		a=v.a*BIT_1_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_10_MULT+0.5;
		b=v.b*BIT_5_6_MULT+0.5;
		a=v.a*BIT_1_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgb484          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_4_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgr484          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_4_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=v.a*BIT_8_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (argb8332        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=v.a*BIT_8_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=v.a*BIT_8_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=v.a*BIT_8_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_4_6_MULT+0.5;
		a=v.a*BIT_4_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (argb_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_4_6_MULT+0.5;
		a=v.a*BIT_4_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_4_6_MULT+0.5;
		a=v.a*BIT_4_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_4_6_MULT+0.5;
		a=v.a*BIT_4_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_6_MULT+0.5;
		a=v.a*BIT_8_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_6_MULT+0.5;
		a=v.a*BIT_8_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_6_MULT+0.5;
		a=v.a*BIT_8_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_6_MULT+0.5;
		a=v.a*BIT_8_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_6_MULT+0.5;
		a=(v.a+127.0)*BIT_8_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_6_MULT+0.5;
		a=(v.a+127.0)*BIT_8_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_6_MULT+0.5;
		a=(v.a+127.0)*BIT_8_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_6_MULT+0.5;
		a=(v.a+127.0)*BIT_8_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_6_MULT+0.5;
		a=v.a*BIT_16_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_6_MULT+0.5;
		a=v.a*BIT_16_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_6_MULT+0.5;
		a=v.a*BIT_16_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_6_MULT+0.5;
		a=v.a*BIT_16_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_6_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_6_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_6_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_6_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_6_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_6_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_6_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_6_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_6_MULT+0.5;
		a=v.a*BIT_32_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_6_MULT+0.5;
		a=v.a*BIT_32_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_6_MULT+0.5;
		a=v.a*BIT_32_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_6_MULT+0.5;
		a=v.a*BIT_32_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_6_MULT+0.5;
		a=v.a*BIT_f_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_6_MULT+0.5;
		a=v.a*BIT_f_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_6_MULT+0.5;
		a=v.a*BIT_f_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_6_MULT+0.5;
		a=v.a*BIT_f_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_10_MULT+0.5;
		g=v.g*BIT_9_10_MULT+0.5;
		b=v.b*BIT_9_6_MULT+0.5;
		a=v.a*BIT_5_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_10_MULT+0.5;
		g=v.g*BIT_9_10_MULT+0.5;
		b=v.b*BIT_9_6_MULT+0.5;
		a=v.a*BIT_5_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgba_10_10_6_6  &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_10_10_6_6& operator = (abgr_10_10_6_6  &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgba_10_10_10_2 &v)_{
		r=v.r;
		g=v.g;
		b=v.b*BIT_10_6_MULT+0.5;
		a=v.a*BIT_2_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (abgr_2_10_10_10 &v)_{
		r=v.r;
		g=v.g;
		b=v.b*BIT_10_6_MULT+0.5;
		a=v.a*BIT_2_6_MULT+0.5;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_10_MULT+0.5;
		g=v.g*BIT_11_10_MULT+0.5;
		b=v.b*BIT_10_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_10_MULT+0.5;
		g=v.g*BIT_11_10_MULT+0.5;
		b=v.b*BIT_10_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (rgb_10_12_10    &v)_{
		r=v.r;
		g=v.g*BIT_12_10_MULT+0.5;
		b=v.b*BIT_10_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (bgr_10_12_10    &v)_{
		r=v.r;
		g=v.g*BIT_12_10_MULT+0.5;
		b=v.b*BIT_10_6_MULT+0.5;
		a=63;
		return *this;
	}
	rgba_10_10_6_6& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=0;
		a=63;
		return *this;
	}
};
struct 	abgr_10_10_6_6{
	ushort a:6;
	ushort b:6;
	ushort g:10;
	ushort r:10;
	abgr_10_10_6_6& operator = (rgb332          &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgr233          &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgb422          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_2_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgr224          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_2_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgb242          &v)_{
		r=v.r*BIT_2_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgr242          &v)_{
		r=v.r*BIT_2_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgb565          &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_6_10_MULT+0.5;
		b=v.b*BIT_5_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgr565          &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_6_10_MULT+0.5;
		b=v.b*BIT_5_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_10_MULT+0.5;
		b=v.b*BIT_5_6_MULT+0.5;
		a=v.a*BIT_1_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (argb1555        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_10_MULT+0.5;
		b=v.b*BIT_5_6_MULT+0.5;
		a=v.a*BIT_1_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_10_MULT+0.5;
		b=v.b*BIT_5_6_MULT+0.5;
		a=v.a*BIT_1_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_10_MULT+0.5;
		b=v.b*BIT_5_6_MULT+0.5;
		a=v.a*BIT_1_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgb484          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_4_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgr484          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_4_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=v.a*BIT_8_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (argb8332        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=v.a*BIT_8_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=v.a*BIT_8_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_6_MULT+0.5;
		a=v.a*BIT_8_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_4_6_MULT+0.5;
		a=v.a*BIT_4_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (argb_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_4_6_MULT+0.5;
		a=v.a*BIT_4_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_4_6_MULT+0.5;
		a=v.a*BIT_4_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_4_6_MULT+0.5;
		a=v.a*BIT_4_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_6_MULT+0.5;
		a=v.a*BIT_8_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_6_MULT+0.5;
		a=v.a*BIT_8_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_6_MULT+0.5;
		a=v.a*BIT_8_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_6_MULT+0.5;
		a=v.a*BIT_8_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_6_MULT+0.5;
		a=(v.a+127.0)*BIT_8_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_6_MULT+0.5;
		a=(v.a+127.0)*BIT_8_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_6_MULT+0.5;
		a=(v.a+127.0)*BIT_8_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_6_MULT+0.5;
		a=(v.a+127.0)*BIT_8_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_6_MULT+0.5;
		a=v.a*BIT_16_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_6_MULT+0.5;
		a=v.a*BIT_16_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_6_MULT+0.5;
		a=v.a*BIT_16_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_6_MULT+0.5;
		a=v.a*BIT_16_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_6_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_6_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_6_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_6_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_6_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_6_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_6_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_6_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_6_MULT+0.5;
		a=v.a*BIT_32_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_6_MULT+0.5;
		a=v.a*BIT_32_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_6_MULT+0.5;
		a=v.a*BIT_32_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_6_MULT+0.5;
		a=v.a*BIT_32_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_6_MULT+0.5;
		a=v.a*BIT_f_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_6_MULT+0.5;
		a=v.a*BIT_f_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_6_MULT+0.5;
		a=v.a*BIT_f_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_6_MULT+0.5;
		a=v.a*BIT_f_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_10_MULT+0.5;
		g=v.g*BIT_9_10_MULT+0.5;
		b=v.b*BIT_9_6_MULT+0.5;
		a=v.a*BIT_5_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_10_MULT+0.5;
		g=v.g*BIT_9_10_MULT+0.5;
		b=v.b*BIT_9_6_MULT+0.5;
		a=v.a*BIT_5_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgba_10_10_6_6  &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr_10_10_6_6& operator = (abgr_10_10_6_6  &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgba_10_10_10_2 &v)_{
		r=v.r;
		g=v.g;
		b=v.b*BIT_10_6_MULT+0.5;
		a=v.a*BIT_2_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (abgr_2_10_10_10 &v)_{
		r=v.r;
		g=v.g;
		b=v.b*BIT_10_6_MULT+0.5;
		a=v.a*BIT_2_6_MULT+0.5;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_10_MULT+0.5;
		g=v.g*BIT_11_10_MULT+0.5;
		b=v.b*BIT_10_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_10_MULT+0.5;
		g=v.g*BIT_11_10_MULT+0.5;
		b=v.b*BIT_10_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (rgb_10_12_10    &v)_{
		r=v.r;
		g=v.g*BIT_12_10_MULT+0.5;
		b=v.b*BIT_10_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (bgr_10_12_10    &v)_{
		r=v.r;
		g=v.g*BIT_12_10_MULT+0.5;
		b=v.b*BIT_10_6_MULT+0.5;
		a=63;
		return *this;
	}
	abgr_10_10_6_6& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=0;
		a=63;
		return *this;
	}
};

struct 	rgba_10_10_10_2 {
	ushort r:10;
	ushort g:10;
	ushort b:10;
	ushort a:2;
	rgba_10_10_10_2& operator = (rgb332          &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgr233          &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgb422          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_2_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgr224          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_2_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgb242          &v)_{
		r=v.r*BIT_2_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgr242          &v)_{
		r=v.r*BIT_2_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgb565          &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_6_10_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgr565          &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_6_10_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_10_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		a=v.a*BIT_1_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (argb1555        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_10_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		a=v.a*BIT_1_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_10_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		a=v.a*BIT_1_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_10_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		a=v.a*BIT_1_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgb484          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgr484          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		a=v.a*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (argb8332        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		a=v.a*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		a=v.a*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		a=v.a*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		a=v.a*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (argb_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		a=v.a*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		a=v.a*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		a=v.a*BIT_4_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		a=v.a*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		a=v.a*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		a=v.a*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		a=v.a*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		a=(v.a+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		a=(v.a+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		a=(v.a+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		a=(v.a+127.0)*BIT_8_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		a=v.a*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		a=v.a*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		a=v.a*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		a=v.a*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		a=(v.a+32767.0)*BIT_16_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		a=(v.a+2147483647.0)*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		a=v.a*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		a=v.a*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		a=v.a*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		a=v.a*BIT_32_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		a=v.a*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		a=v.a*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		a=v.a*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		a=v.a*BIT_f_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_10_MULT+0.5;
		g=v.g*BIT_9_10_MULT+0.5;
		b=v.b*BIT_9_10_MULT+0.5;
		a=v.a*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_10_MULT+0.5;
		g=v.g*BIT_9_10_MULT+0.5;
		b=v.b*BIT_9_10_MULT+0.5;
		a=v.a*BIT_5_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgba_10_10_6_6  &v)_{
		r=v.r;
		g=v.g;
		b=v.b*BIT_6_10_MULT+0.5;
		a=v.a*BIT_6_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (abgr_10_10_6_6  &v)_{
		r=v.r;
		g=v.g;
		b=v.b*BIT_6_10_MULT+0.5;
		a=v.a*BIT_6_2_MULT+0.5;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgba_10_10_10_2 &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_10_10_10_2& operator = (abgr_2_10_10_10 &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		a=v.a;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_10_MULT+0.5;
		g=v.g*BIT_11_10_MULT+0.5;
		b=v.b;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_10_MULT+0.5;
		g=v.g*BIT_11_10_MULT+0.5;
		b=v.b;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (rgb_10_12_10    &v)_{
		r=v.r;
		g=v.g*BIT_12_10_MULT+0.5;
		b=v.b;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (bgr_10_12_10    &v)_{
		r=v.r;
		g=v.g*BIT_12_10_MULT+0.5;
		b=v.b;
		a=3;
		return *this;
	}
	rgba_10_10_10_2& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=0;
		a=3;
		return *this;
	}
};
struct 	abgr_2_10_10_10{
	ushort a:2;
	ushort b:10;
	ushort g:10;
	ushort r:10;
	abgr_2_10_10_10& operator = (rgb332          &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgr233          &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgb422          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_2_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgr224          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_2_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgb242          &v)_{
		r=v.r*BIT_2_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgr242          &v)_{
		r=v.r*BIT_2_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgb565          &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_6_10_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgr565          &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_6_10_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_10_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (argb1555        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_10_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_10_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_10_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgb484          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgr484          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (argb8332        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_10_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (argb_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_10_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_10_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_10_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_10_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_10_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_10_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_10_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_10_MULT+0.5;
		g=v.g*BIT_9_10_MULT+0.5;
		b=v.b*BIT_9_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_10_MULT+0.5;
		g=v.g*BIT_9_10_MULT+0.5;
		b=v.b*BIT_9_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgba_10_10_6_6  &v)_{
		r=v.r;
		g=v.g;
		b=v.b*BIT_6_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (abgr_10_10_6_6  &v)_{
		r=v.r;
		g=v.g;
		b=v.b*BIT_6_10_MULT+0.5;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgba_10_10_10_2 &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	abgr_2_10_10_10& operator = (abgr_2_10_10_10 &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_10_MULT+0.5;
		g=v.g*BIT_11_10_MULT+0.5;
		b=v.b;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_10_MULT+0.5;
		g=v.g*BIT_11_10_MULT+0.5;
		b=v.b;
		return *this;
	}
	abgr_2_10_10_10& operator = (rgb_10_12_10    &v)_{
		r=v.r;
		g=v.g*BIT_12_10_MULT+0.5;
		b=v.b;
		return *this;
	}
	abgr_2_10_10_10& operator = (bgr_10_12_10    &v)_{
		r=v.r;
		g=v.g*BIT_12_10_MULT+0.5;
		b=v.b;
		return *this;
	}
	abgr_2_10_10_10& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_10_MULT+0.5;
		g=v.g*BIT_8_10_MULT+0.5;
		b=0;
		return *this;
	}
};

struct 	rgb_11_11_10{
	ushort r:11;
	ushort g:11;
	ushort b:10;
	rgb_11_11_10& operator = (rgb332          &v)_{
		r=v.r*BIT_3_11_MULT+0.5;
		g=v.g*BIT_3_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgr233          &v)_{
		r=v.r*BIT_3_11_MULT+0.5;
		g=v.g*BIT_3_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgb422          &v)_{
		r=v.r*BIT_4_11_MULT+0.5;
		g=v.g*BIT_2_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgr224          &v)_{
		r=v.r*BIT_4_11_MULT+0.5;
		g=v.g*BIT_2_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgb242          &v)_{
		r=v.r*BIT_2_11_MULT+0.5;
		g=v.g*BIT_4_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgr242          &v)_{
		r=v.r*BIT_2_11_MULT+0.5;
		g=v.g*BIT_4_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgb565          &v)_{
		r=v.r*BIT_5_11_MULT+0.5;
		g=v.g*BIT_6_11_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgr565          &v)_{
		r=v.r*BIT_5_11_MULT+0.5;
		g=v.g*BIT_6_11_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_11_MULT+0.5;
		g=v.g*BIT_5_11_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (argb1555        &v)_{
		r=v.r*BIT_5_11_MULT+0.5;
		g=v.g*BIT_5_11_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_11_MULT+0.5;
		g=v.g*BIT_5_11_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_11_MULT+0.5;
		g=v.g*BIT_5_11_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgb484          &v)_{
		r=v.r*BIT_4_11_MULT+0.5;
		g=v.g*BIT_8_11_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgr484          &v)_{
		r=v.r*BIT_4_11_MULT+0.5;
		g=v.g*BIT_8_11_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_11_MULT+0.5;
		g=v.g*BIT_3_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (argb8332        &v)_{
		r=v.r*BIT_3_11_MULT+0.5;
		g=v.g*BIT_3_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_11_MULT+0.5;
		g=v.g*BIT_3_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_11_MULT+0.5;
		g=v.g*BIT_3_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_11_MULT+0.5;
		g=v.g*BIT_4_11_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (argb_4          &v)_{
		r=v.r*BIT_4_11_MULT+0.5;
		g=v.g*BIT_4_11_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_11_MULT+0.5;
		g=v.g*BIT_4_11_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_11_MULT+0.5;
		g=v.g*BIT_4_11_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_11_MULT+0.5;
		g=v.g*BIT_8_11_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_11_MULT+0.5;
		g=v.g*BIT_8_11_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_11_MULT+0.5;
		g=(v.g+127.0)*BIT_8_11_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_11_MULT+0.5;
		g=(v.g+127.0)*BIT_8_11_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_11_MULT+0.5;
		g=v.g*BIT_8_11_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_11_MULT+0.5;
		g=v.g*BIT_8_11_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_11_MULT+0.5;
		g=v.g*BIT_8_11_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_11_MULT+0.5;
		g=v.g*BIT_8_11_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_11_MULT+0.5;
		g=(v.g+127.0)*BIT_8_11_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_11_MULT+0.5;
		g=(v.g+127.0)*BIT_8_11_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_11_MULT+0.5;
		g=(v.g+127.0)*BIT_8_11_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_11_MULT+0.5;
		g=(v.g+127.0)*BIT_8_11_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_11_MULT+0.5;
		g=v.g*BIT_16_11_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_11_MULT+0.5;
		g=v.g*BIT_16_11_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_11_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_11_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_11_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_11_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_11_MULT+0.5;
		g=v.g*BIT_16_11_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_11_MULT+0.5;
		g=v.g*BIT_16_11_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_11_MULT+0.5;
		g=v.g*BIT_16_11_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_11_MULT+0.5;
		g=v.g*BIT_16_11_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_11_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_11_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_11_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_11_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_11_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_11_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_11_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_11_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_11_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_11_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_11_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_11_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_11_MULT+0.5;
		g=v.g*BIT_32_11_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_11_MULT+0.5;
		g=v.g*BIT_32_11_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_11_MULT+0.5;
		g=v.g*BIT_f_11_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_11_MULT+0.5;
		g=v.g*BIT_f_11_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_11_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_11_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_11_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_11_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_11_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_11_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_11_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_11_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_11_MULT+0.5;
		g=v.g*BIT_32_11_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_11_MULT+0.5;
		g=v.g*BIT_32_11_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_11_MULT+0.5;
		g=v.g*BIT_32_11_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_11_MULT+0.5;
		g=v.g*BIT_32_11_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_11_MULT+0.5;
		g=v.g*BIT_f_11_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_11_MULT+0.5;
		g=v.g*BIT_f_11_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_11_MULT+0.5;
		g=v.g*BIT_f_11_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_11_MULT+0.5;
		g=v.g*BIT_f_11_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_11_MULT+0.5;
		g=v.g*BIT_9_11_MULT+0.5;
		b=v.b*BIT_9_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_11_MULT+0.5;
		g=v.g*BIT_9_11_MULT+0.5;
		b=v.b*BIT_9_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_11_MULT+0.5;
		g=v.g*BIT_10_11_MULT+0.5;
		b=v.b*BIT_6_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_11_MULT+0.5;
		g=v.g*BIT_10_11_MULT+0.5;
		b=v.b*BIT_6_10_MULT+0.5;
		return *this;
	}
	rgb_11_11_10& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_11_MULT+0.5;
		g=v.g*BIT_10_11_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb_11_11_10& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_11_MULT+0.5;
		g=v.g*BIT_10_11_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb_11_11_10& operator = (rgb_11_11_10    &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_11_11_10& operator = (bgr_10_11_11    &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_11_11_10& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_11_MULT+0.5;
		g=v.g*BIT_12_11_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb_11_11_10& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_11_MULT+0.5;
		g=v.g*BIT_12_11_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb_11_11_10& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_11_MULT+0.5;
		g=v.g*BIT_8_11_MULT+0.5;
		b=0;
		return *this;
	}
};
struct 	bgr_10_11_11{
	ushort b:10;
	ushort g:11;
	ushort r:11;
	bgr_10_11_11& operator = (rgb332          &v)_{
		r=v.r*BIT_3_11_MULT+0.5;
		g=v.g*BIT_3_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgr233          &v)_{
		r=v.r*BIT_3_11_MULT+0.5;
		g=v.g*BIT_3_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgb422          &v)_{
		r=v.r*BIT_4_11_MULT+0.5;
		g=v.g*BIT_2_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgr224          &v)_{
		r=v.r*BIT_4_11_MULT+0.5;
		g=v.g*BIT_2_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgb242          &v)_{
		r=v.r*BIT_2_11_MULT+0.5;
		g=v.g*BIT_4_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgr242          &v)_{
		r=v.r*BIT_2_11_MULT+0.5;
		g=v.g*BIT_4_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgb565          &v)_{
		r=v.r*BIT_5_11_MULT+0.5;
		g=v.g*BIT_6_11_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgr565          &v)_{
		r=v.r*BIT_5_11_MULT+0.5;
		g=v.g*BIT_6_11_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_11_MULT+0.5;
		g=v.g*BIT_5_11_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (argb1555        &v)_{
		r=v.r*BIT_5_11_MULT+0.5;
		g=v.g*BIT_5_11_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_11_MULT+0.5;
		g=v.g*BIT_5_11_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_11_MULT+0.5;
		g=v.g*BIT_5_11_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgb484          &v)_{
		r=v.r*BIT_4_11_MULT+0.5;
		g=v.g*BIT_8_11_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgr484          &v)_{
		r=v.r*BIT_4_11_MULT+0.5;
		g=v.g*BIT_8_11_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_11_MULT+0.5;
		g=v.g*BIT_3_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (argb8332        &v)_{
		r=v.r*BIT_3_11_MULT+0.5;
		g=v.g*BIT_3_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_11_MULT+0.5;
		g=v.g*BIT_3_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_11_MULT+0.5;
		g=v.g*BIT_3_11_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_11_MULT+0.5;
		g=v.g*BIT_4_11_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (argb_4          &v)_{
		r=v.r*BIT_4_11_MULT+0.5;
		g=v.g*BIT_4_11_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_11_MULT+0.5;
		g=v.g*BIT_4_11_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_11_MULT+0.5;
		g=v.g*BIT_4_11_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_11_MULT+0.5;
		g=v.g*BIT_8_11_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_11_MULT+0.5;
		g=v.g*BIT_8_11_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_11_MULT+0.5;
		g=(v.g+127.0)*BIT_8_11_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_11_MULT+0.5;
		g=(v.g+127.0)*BIT_8_11_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_11_MULT+0.5;
		g=v.g*BIT_8_11_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_11_MULT+0.5;
		g=v.g*BIT_8_11_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_11_MULT+0.5;
		g=v.g*BIT_8_11_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_11_MULT+0.5;
		g=v.g*BIT_8_11_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_11_MULT+0.5;
		g=(v.g+127.0)*BIT_8_11_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_11_MULT+0.5;
		g=(v.g+127.0)*BIT_8_11_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_11_MULT+0.5;
		g=(v.g+127.0)*BIT_8_11_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_11_MULT+0.5;
		g=(v.g+127.0)*BIT_8_11_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_11_MULT+0.5;
		g=v.g*BIT_16_11_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_11_MULT+0.5;
		g=v.g*BIT_16_11_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_11_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_11_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_11_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_11_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_11_MULT+0.5;
		g=v.g*BIT_16_11_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_11_MULT+0.5;
		g=v.g*BIT_16_11_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_11_MULT+0.5;
		g=v.g*BIT_16_11_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_11_MULT+0.5;
		g=v.g*BIT_16_11_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_11_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_11_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_11_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_11_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_11_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_11_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_11_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_11_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_11_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_11_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_11_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_11_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_11_MULT+0.5;
		g=v.g*BIT_32_11_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_11_MULT+0.5;
		g=v.g*BIT_32_11_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_11_MULT+0.5;
		g=v.g*BIT_f_11_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_11_MULT+0.5;
		g=v.g*BIT_f_11_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_11_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_11_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_11_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_11_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_11_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_11_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_11_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_11_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_11_MULT+0.5;
		g=v.g*BIT_32_11_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_11_MULT+0.5;
		g=v.g*BIT_32_11_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_11_MULT+0.5;
		g=v.g*BIT_32_11_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_11_MULT+0.5;
		g=v.g*BIT_32_11_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_11_MULT+0.5;
		g=v.g*BIT_f_11_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_11_MULT+0.5;
		g=v.g*BIT_f_11_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_11_MULT+0.5;
		g=v.g*BIT_f_11_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_11_MULT+0.5;
		g=v.g*BIT_f_11_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_11_MULT+0.5;
		g=v.g*BIT_9_11_MULT+0.5;
		b=v.b*BIT_9_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_11_MULT+0.5;
		g=v.g*BIT_9_11_MULT+0.5;
		b=v.b*BIT_9_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_11_MULT+0.5;
		g=v.g*BIT_10_11_MULT+0.5;
		b=v.b*BIT_6_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_11_MULT+0.5;
		g=v.g*BIT_10_11_MULT+0.5;
		b=v.b*BIT_6_10_MULT+0.5;
		return *this;
	}
	bgr_10_11_11& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_11_MULT+0.5;
		g=v.g*BIT_10_11_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr_10_11_11& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_11_MULT+0.5;
		g=v.g*BIT_10_11_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr_10_11_11& operator = (rgb_11_11_10    &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_10_11_11& operator = (bgr_10_11_11    &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_10_11_11& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_11_MULT+0.5;
		g=v.g*BIT_12_11_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr_10_11_11& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_11_MULT+0.5;
		g=v.g*BIT_12_11_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr_10_11_11& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_11_MULT+0.5;
		g=v.g*BIT_8_11_MULT+0.5;
		b=0;
		return *this;
	}
};

struct 	rgb_10_12_10{
	ushort b:9;
	ushort g:9;
	ushort r:9;
	rgb_10_12_10& operator = (rgb332          &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgr233          &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgb422          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_2_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgr224          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_2_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgb242          &v)_{
		r=v.r*BIT_2_10_MULT+0.5;
		g=v.g*BIT_4_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgr242          &v)_{
		r=v.r*BIT_2_10_MULT+0.5;
		g=v.g*BIT_4_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgb565          &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_6_12_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgr565          &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_6_12_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_12_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (argb1555        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_12_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_12_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_12_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgb484          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_8_12_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgr484          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_8_12_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (argb8332        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_12_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (argb_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_12_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_12_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_12_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_12_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_12_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_12_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_12_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_12_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_12_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_12_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_12_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_12_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_12_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_12_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_12_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_12_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_12_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_12_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_12_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_12_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_12_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_12_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_12_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_12_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_12_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_12_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_12_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_12_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_12_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_12_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_12_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_12_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_12_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_12_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_12_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_12_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_12_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_12_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_12_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_12_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_12_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_12_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_12_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_12_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_12_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_10_MULT+0.5;
		g=v.g*BIT_9_12_MULT+0.5;
		b=v.b*BIT_9_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_10_MULT+0.5;
		g=v.g*BIT_9_12_MULT+0.5;
		b=v.b*BIT_9_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgba_10_10_6_6  &v)_{
		r=v.r;
		g=v.g*BIT_10_12_MULT+0.5;
		b=v.b*BIT_6_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (abgr_10_10_6_6  &v)_{
		r=v.r;
		g=v.g*BIT_10_12_MULT+0.5;
		b=v.b*BIT_6_10_MULT+0.5;
		return *this;
	}
	rgb_10_12_10& operator = (rgba_10_10_10_2 &v)_{
		r=v.r;
		g=v.g*BIT_10_12_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb_10_12_10& operator = (abgr_2_10_10_10 &v)_{
		r=v.r;
		g=v.g*BIT_10_12_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb_10_12_10& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_10_MULT+0.5;
		g=v.g*BIT_11_12_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb_10_12_10& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_10_MULT+0.5;
		g=v.g*BIT_11_12_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb_10_12_10& operator = (rgb_10_12_10    &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	rgb_10_12_10& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_12_MULT+0.5;
		g=v.g*BIT_12_10_MULT+0.5;
		b=v.b;
		return *this;
	}
	rgb_10_12_10& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_10_MULT+0.5;
		g=v.g*BIT_8_12_MULT+0.5;
		b=0;
		return *this;
	}
};
struct 	bgr_10_12_10{
	ushort r:10;
	ushort g:12;
	ushort b:10;
	bgr_10_12_10& operator = (rgb332          &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgr233          &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgb422          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_2_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgr224          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_2_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgb242          &v)_{
		r=v.r*BIT_2_10_MULT+0.5;
		g=v.g*BIT_4_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgr242          &v)_{
		r=v.r*BIT_2_10_MULT+0.5;
		g=v.g*BIT_4_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgb565          &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_6_12_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgr565          &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_6_12_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_12_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (argb1555        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_12_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_12_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_10_MULT+0.5;
		g=v.g*BIT_5_12_MULT+0.5;
		b=v.b*BIT_5_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgb484          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_8_12_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgr484          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_8_12_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (argb8332        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_10_MULT+0.5;
		g=v.g*BIT_3_12_MULT+0.5;
		b=v.b*BIT_2_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_12_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (argb_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_12_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_12_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_10_MULT+0.5;
		g=v.g*BIT_4_12_MULT+0.5;
		b=v.b*BIT_4_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_12_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_12_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_12_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_12_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_12_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_12_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_12_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_10_MULT+0.5;
		g=v.g*BIT_8_12_MULT+0.5;
		b=v.b*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_12_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_12_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_12_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_10_MULT+0.5;
		g=(v.g+127.0)*BIT_8_12_MULT+0.5;
		b=(v.b+127.0)*BIT_8_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_12_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_12_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_12_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_12_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_12_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_12_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_12_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_10_MULT+0.5;
		g=v.g*BIT_16_12_MULT+0.5;
		b=v.b*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_12_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_12_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_12_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_10_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_12_MULT+0.5;
		b=(v.b+32767.0)*BIT_16_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_12_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_12_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_12_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_12_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_12_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_12_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_12_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_12_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_12_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_10_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_12_MULT+0.5;
		b=(v.b+2147483647.0)*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_12_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_12_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_12_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_10_MULT+0.5;
		g=v.g*BIT_32_12_MULT+0.5;
		b=v.b*BIT_32_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_12_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_12_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_12_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_10_MULT+0.5;
		g=v.g*BIT_f_12_MULT+0.5;
		b=v.b*BIT_f_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_10_MULT+0.5;
		g=v.g*BIT_9_12_MULT+0.5;
		b=v.b*BIT_9_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_10_MULT+0.5;
		g=v.g*BIT_9_12_MULT+0.5;
		b=v.b*BIT_9_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgba_10_10_6_6  &v)_{
		r=v.r;
		g=v.g*BIT_10_12_MULT+0.5;
		b=v.b*BIT_6_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (abgr_10_10_6_6  &v)_{
		r=v.r;
		g=v.g*BIT_10_12_MULT+0.5;
		b=v.b*BIT_6_10_MULT+0.5;
		return *this;
	}
	bgr_10_12_10& operator = (rgba_10_10_10_2 &v)_{
		r=v.r;
		g=v.g*BIT_10_12_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr_10_12_10& operator = (abgr_2_10_10_10 &v)_{
		r=v.r;
		g=v.g*BIT_10_12_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr_10_12_10& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_10_MULT+0.5;
		g=v.g*BIT_11_12_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr_10_12_10& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_10_MULT+0.5;
		g=v.g*BIT_11_12_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr_10_12_10& operator = (rgb_10_12_10    &v)_{
		r=v.r;
		g=v.g;
		b=v.b;
		return *this;
	}
	bgr_10_12_10& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_12_MULT+0.5;
		g=v.g*BIT_12_10_MULT+0.5;
		b=v.b;
		return *this;
	}
	bgr_10_12_10& operator = (rg_24_8         &v)_{
		r=v.r*BIT_24_10_MULT+0.5;
		g=v.g*BIT_8_12_MULT+0.5;
		b=0;
		return *this;
	}
};

struct 	rg_24_8 {
	uint r:24;
	uint g:8;
	rg_24_8& operator = (rgb332          &v)_{
		r=v.r*BIT_2_24_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgr233          &v)_{
		r=v.r*BIT_3_24_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgb422          &v)_{
		r=v.r*BIT_4_24_MULT+0.5;
		g=v.g*BIT_2_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgr224          &v)_{
		r=v.r*BIT_4_24_MULT+0.5;
		g=v.g*BIT_2_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgb242          &v)_{
		r=v.r*BIT_2_24_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgr242          &v)_{
		r=v.r*BIT_2_24_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgb565          &v)_{
		r=v.r*BIT_5_24_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgr565          &v)_{
		r=v.r*BIT_5_24_MULT+0.5;
		g=v.g*BIT_6_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgba5551        &v)_{
		r=v.r*BIT_5_24_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (argb1555        &v)_{
		r=v.r*BIT_5_24_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgra5551        &v)_{
		r=v.r*BIT_5_24_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (abgr1555        &v)_{
		r=v.r*BIT_5_24_MULT+0.5;
		g=v.g*BIT_5_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgb484          &v)_{
		r=v.r*BIT_4_24_MULT+0.5;
		g=v.g;
		return *this;
	}
	rg_24_8& operator = (bgr484          &v)_{
		r=v.r*BIT_4_24_MULT+0.5;
		g=v.g;
		return *this;
	}
	rg_24_8& operator = (rgba3328        &v)_{
		r=v.r*BIT_3_24_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (argb8332        &v)_{
		r=v.r*BIT_3_24_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgra2338        &v)_{
		r=v.r*BIT_3_24_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (abgr8233        &v)_{
		r=v.r*BIT_3_24_MULT+0.5;
		g=v.g*BIT_3_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgba_4          &v)_{
		r=v.r*BIT_4_24_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (argb_4          &v)_{
		r=v.r*BIT_4_24_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgra_4          &v)_{
		r=v.r*BIT_4_24_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (abgr_4          &v)_{
		r=v.r*BIT_4_24_MULT+0.5;
		g=v.g*BIT_4_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgb_8u          &v)_{
		r=v.r*BIT_8_24_MULT+0.5;
		g=v.g;
		return *this;
	}
	rg_24_8& operator = (bgr_8u          &v)_{
		r=v.r*BIT_8_24_MULT+0.5;
		g=v.g;
		return *this;
	}
	rg_24_8& operator = (rgb_8s          &v)_{
		r=(v.r+127.0)*BIT_8_24_MULT+0.5;
		g=(v.g+127.0);
		return *this;
	}
	rg_24_8& operator = (bgr_8s          &v)_{
		r=(v.r+127.0)*BIT_8_24_MULT+0.5;
		g=(v.g+127.0);
		return *this;
	}
	rg_24_8& operator = (rgba_8u         &v)_{
		r=v.r*BIT_8_24_MULT+0.5;
		g=v.g;
		return *this;
	}
	rg_24_8& operator = (argb_8u         &v)_{
		r=v.r*BIT_8_24_MULT+0.5;
		g=v.g;
		return *this;
	}
	rg_24_8& operator = (bgra_8u         &v)_{
		r=v.r*BIT_8_24_MULT+0.5;
		g=v.g;
		return *this;
	}
	rg_24_8& operator = (abgr_8u         &v)_{
		r=v.r*BIT_8_24_MULT+0.5;
		g=v.g;
		return *this;
	}
	rg_24_8& operator = (rgba_8s         &v)_{
		r=(v.r+127.0)*BIT_8_24_MULT+0.5;
		g=(v.g+127.0);
		return *this;
	}
	rg_24_8& operator = (argb_8s         &v)_{
		r=(v.r+127.0)*BIT_8_24_MULT+0.5;
		g=(v.g+127.0);
		return *this;
	}
	rg_24_8& operator = (bgra_8s         &v)_{
		r=(v.r+127.0)*BIT_8_24_MULT+0.5;
		g=(v.g+127.0);
		return *this;
	}
	rg_24_8& operator = (abgr_8s         &v)_{
		r=(v.r+127.0)*BIT_8_24_MULT+0.5;
		g=(v.g+127.0);
		return *this;
	}
	rg_24_8& operator = (rgb_16u         &v)_{
		r=v.r*BIT_16_24_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgr_16u         &v)_{
		r=v.r*BIT_16_24_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgb_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_24_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgr_16s         &v)_{
		r=(v.r+32767.0)*BIT_16_24_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgba_16u        &v)_{
		r=v.r*BIT_16_24_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgra_16u        &v)_{
		r=v.r*BIT_16_24_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (argb_16u        &v)_{
		r=v.r*BIT_16_24_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (abgr_16u        &v)_{
		r=v.r*BIT_16_24_MULT+0.5;
		g=v.g*BIT_16_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgba_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_24_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgra_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_24_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (argb_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_24_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (abgr_16s        &v)_{
		r=(v.r+32767.0)*BIT_16_24_MULT+0.5;
		g=(v.g+32767.0)*BIT_16_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgb_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_24_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgr_32si        &v)_{
		r=(v.r+2147483647.0)*BIT_32_24_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgb_32ui        &v)_{
		r=v.r*BIT_32_24_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgr_32ui        &v)_{
		r=v.r*BIT_32_24_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgb_32f         &v)_{
		r=v.r*BIT_f_24_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgr_32f         &v)_{
		r=v.r*BIT_f_24_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgba_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_24_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgra_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_24_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (argb_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_24_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (abgr_32si       &v)_{
		r=(v.r+2147483647.0)*BIT_32_24_MULT+0.5;
		g=(v.g+2147483647.0)*BIT_32_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgba_32ui       &v)_{
		r=v.r*BIT_32_24_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgra_32ui       &v)_{
		r=v.r*BIT_32_24_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (argb_32ui       &v)_{
		r=v.r*BIT_32_24_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (abgr_32ui       &v)_{
		r=v.r*BIT_32_24_MULT+0.5;
		g=v.g*BIT_32_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgba_32f        &v)_{
		r=v.r*BIT_f_24_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgra_32f        &v)_{
		r=v.r*BIT_f_24_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (argb_32f        &v)_{
		r=v.r*BIT_f_24_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (abgr_32f        &v)_{
		r=v.r*BIT_f_24_MULT+0.5;
		g=v.g*BIT_f_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgba_9995       &v)_{
		r=v.r*BIT_9_24_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (argb_5999       &v)_{
		r=v.r*BIT_9_24_MULT+0.5;
		g=v.g*BIT_9_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgba_10_10_6_6  &v)_{
		r=v.r*BIT_10_24_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (abgr_10_10_6_6  &v)_{
		r=v.r*BIT_10_24_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgba_10_10_10_2 &v)_{
		r=v.r*BIT_10_24_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (abgr_2_10_10_10 &v)_{
		r=v.r*BIT_10_24_MULT+0.5;
		g=v.g*BIT_10_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgb_11_11_10    &v)_{
		r=v.r*BIT_11_24_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgr_10_11_11    &v)_{
		r=v.r*BIT_11_24_MULT+0.5;
		g=v.g*BIT_11_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rgb_10_12_10    &v)_{
		r=v.r*BIT_10_24_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (bgr_10_12_10    &v)_{
		r=v.r*BIT_10_24_MULT+0.5;
		g=v.g*BIT_12_8_MULT+0.5;
		return *this;
	}
	rg_24_8& operator = (rg_24_8         &v)_{
		r=v.r;
		g=v.g;
		return *this;
	}
};


*/






