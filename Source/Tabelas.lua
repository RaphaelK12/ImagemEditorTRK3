	



-- 0 unsigned bitfield, 1 unsigned, 2 signed, 3 float, 4 half, 5 rgba_9995f, 6 = rgb_11_11_10f
t = {
{	i = true;	t="r_8u"           ,f="DF_L_8u"           ,glf="DF_L_8u"   			,	alpha = false	,p=1,	b={8}              	,a = ""					,	glsif = "GL_IFORMAT_RED"	, glfm = "GL_FORMAT_RED"	,	GLType = "GL_UNSIGNED_BYTE" 				,	v="+128"       	,	v2="-128"       	,s="	uchar r;" },
{	i = false;	t="r_8s"           ,f="DF_L_8s"           ,glf="DF_L_8s"   			,	alpha = false	,p=2,	b={8}              	,a = ""					,	glsif = "GL_IFORMAT_RED"	, glfm = "GL_FORMAT_RED"	,	GLType = "GL_BYTE"							,	v="-128"       	,	v2="+128"       	,s="	schar r;" },
{	i = true;	t="r_16u"          ,f="DF_L_16u"          ,glf="DF_L_16u"  			,	alpha = false	,p=1,	b={16}             	,a = ""					,	glsif = "GL_IFORMAT_RED"	, glfm = "GL_FORMAT_RED"	,	GLType = "GL_UNSIGNED_SHORT"				,	v="+32768"     	,	v2="-32768"     	,s="	ushort r;" },
{	i = false;	t="r_16s"          ,f="DF_L_16s"          ,glf="DF_L_16s"  			,	alpha = false	,p=2,	b={16}             	,a = ""					,	glsif = "GL_IFORMAT_RED"	, glfm = "GL_FORMAT_RED"	,	GLType = "GL_SHORT" 						,	v="-32768"     	,	v2="+32768"     	,s="	short r;" },
{	i = true;	t="r_16f"          ,f="DF_L_16f"          ,glf="DF_L_16f"  			,	alpha = false	,p=4,	b={"f"}            	,a = ""					,	glsif = "GL_IFORMAT_RED"	, glfm = "GL_FORMAT_RED"	,	GLType = "GL_HALF_FLOAT"					,	v=""           	,	v2=""           	,s="	half r;" },
{	i = true;	t="r_32u"          ,f="DF_L_32u"          ,glf="DF_L_32u"  			,	alpha = false	,p=1,	b={32}             	,a = ""					,	glsif = "GL_IFORMAT_RED"	, glfm = "GL_FORMAT_RED"	,	GLType = "GL_UNSIGNED_INT"					,	v="+2147483648"	,	v2="-2147483648"	,s="	uint r;" },
{	i = false;	t="r_32s"          ,f="DF_L_32s"          ,glf="DF_L_32s"  			,	alpha = false	,p=2,	b={32}             	,a = ""					,	glsif = "GL_IFORMAT_RED"	, glfm = "GL_FORMAT_RED"	,	GLType = "GL_INT"							,	v="-2147483648"	,	v2="+2147483648"	,s="	int r;" },
{	i = true;	t="r_32f"          ,f="DF_L_32f"          ,glf="DF_L_32f"  			,	alpha = false	,p=3,	b={"f"}            	,a = ""					,	glsif = "GL_IFORMAT_RED"	, glfm = "GL_FORMAT_RED"	,	GLType = "GL_FLOAT" 						,	v=""           	,	v2=""           	,s="	float r;" },
{	i = false;	t="r_64f"          ,f="DF_L_64f"          ,glf="DF_L_64f"  			,	alpha = false	,p=3,	b={"f"}            	,a = ""					,	glsif = "GL_IFORMAT_RED"	, glfm = "GL_FORMAT_RED"	,	GLType = "GL_DOUBLE"						,	v=""           	,	v2=""           	,s="	double r;" },
{	i = true;	t="rg_8u"          ,f="DF_LA_8u"          ,glf="DF_LA_8u"  			,	alpha = true	,p=1,	b={8,8}            	,a = ""					, 	glsif = "GL_IFORMAT_RG" 	, glfm = "GL_FORMAT_RG" 	,	GLType = "GL_UNSIGNED_BYTE" 				,	v="+128"       	,	v2="-128"       	,s="	union{\n		struct{\n			uchar r;\n			uchar g;\n		};\n		ushort val;\n	};" },
{	i = false;	t="rg_8s"          ,f="DF_LA_8s"          ,glf="DF_LA_8s"  			,	alpha = true	,p=2,	b={8,8}            	,a = ""					,	glsif = "GL_IFORMAT_RG" 	, glfm = "GL_FORMAT_RG" 	,	GLType = "GL_BYTE"							,	v="-128"       	,	v2="+128"       	,s="	union{\n		struct{\n			schar r;\n			schar g;\n		};\n		ushort val;\n	};" },
{	i = true;	t="rg_16u"         ,f="DF_LA_16u"         ,glf="DF_LA_16u" 			,	alpha = true	,p=1,	b={16,16}          	,a = ""					,	glsif = "GL_IFORMAT_RG" 	, glfm = "GL_FORMAT_RG" 	,	GLType = "GL_UNSIGNED_SHORT"				,	v="+32768"     	,	v2="-32768"     	,s="	union{\n		struct{\n			ushort r;\n			ushort g;\n		};\n		uint val;\n	};" },
{	i = false;	t="rg_16s"         ,f="DF_LA_16s"         ,glf="DF_LA_16s" 			,	alpha = true	,p=2,	b={16,16}          	,a = ""					,	glsif = "GL_IFORMAT_RG" 	, glfm = "GL_FORMAT_RG" 	,	GLType = "GL_SHORT" 						,	v="-32768"     	,	v2="+32768"     	,s="	union{\n		struct{\n			short r;\n			short g;\n		};\n		uint val;\n	};" },
{	i = true;	t="rg_16f"         ,f="DF_LA_16f"         ,glf="DF_LA_16f" 			,	alpha = true	,p=4,	b={"f","f"}        	,a = ""					,	glsif = "GL_IFORMAT_RG" 	, glfm = "GL_FORMAT_RG" 	,	GLType = "GL_HALF_FLOAT"					,	v=""           	,	v2=""           	,s="	union{\n		struct{\n			half r;\n			half g;\n		};\n		uint val;\n	};" },
{	i = true;	t="rg_32u"         ,f="DF_LA_32u"         ,glf="DF_LA_32u" 			,	alpha = true	,p=1,	b={32,32}          	,a = ""					,	glsif = "GL_IFORMAT_RG" 	, glfm = "GL_FORMAT_RG" 	,	GLType = "GL_UNSIGNED_INT"					,	v="+2147483648"	,	v2="-2147483648"	,s="	union{\n		struct{\n			uint r;\n			uint g;\n		};\n		uint val[2];\n	};" },
{	i = false;	t="rg_32s"         ,f="DF_LA_32s"         ,glf="DF_LA_32s" 			,	alpha = true	,p=2,	b={32,32}          	,a = ""					,	glsif = "GL_IFORMAT_RG" 	, glfm = "GL_FORMAT_RG" 	,	GLType = "GL_INT"							,	v="-2147483648"	,	v2="+2147483648"	,s="	union{\n		struct{\n			int r;\n			int g;\n		};\n		uint val[2];\n	};" },
{	i = true;	t="rg_32f"         ,f="DF_LA_32f"         ,glf="DF_LA_32f" 			,	alpha = true	,p=3,	b={"f","f"}        	,a = ""					,	glsif = "GL_IFORMAT_RG" 	, glfm = "GL_FORMAT_RG" 	,	GLType = "GL_FLOAT" 						,	v=""           	,	v2=""           	,s="	union{\n		struct{\n			float r;\n			float g;\n		};\n		uint val[2];\n	};" },
{	i = false;	t="rg_64f"         ,f="DF_LA_64f"         ,glf="DF_LA_64f" 			,	alpha = true	,p=3,	b={"f","f"}        	,a = ""					,	glsif = "GL_IFORMAT_RG" 	, glfm = "GL_FORMAT_RG" 	,	GLType = "GL_DOUBLE"						,	v=""           	,	v2=""           	,s="	union{\n		struct{\n			double r;\n			double g;\n		};\n		uint val[4];\n	};" },
{	i = true;	t="rgb_8u"         ,f="DF_RGB_8u"         ,glf="DF_RGB_8u" 			,	alpha = false	,p=1,	b={8,8,8}          	,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_RGB"	,	GLType = "GL_UNSIGNED_BYTE" 				,	v="+128"       	,	v2="-128"       	,s="	uchar r;\n	uchar g;\n	uchar b;" },
{	i = true;	t="bgr_8u"         ,f="DF_BGR_8u"         ,glf="DF_BGR_8u" 			,	alpha = false	,p=1,	b={8,8,8}          	,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_BGR"	,	GLType = "GL_UNSIGNED_BYTE" 				,	v="+128"       	,	v2="-128"       	,s="	uchar b;\n	uchar g;\n	uchar r;" },
{	i = false;	t="rgb_8s"         ,f="DF_RGB_8s"         ,glf="DF_RGB_8s" 			,	alpha = false	,p=2,	b={8,8,8}          	,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_RGB"	,	GLType = "GL_BYTE"							,	v="-128"       	,	v2="+128"       	,s="	schar r;\n	schar g;\n	schar b;" },
{	i = false;	t="bgr_8s"         ,f="DF_BGR_8s"         ,glf="DF_BGR_8s" 			,	alpha = false	,p=2,	b={8,8,8}          	,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_BGR"	,	GLType = "GL_BYTE"							,	v="-128"       	,	v2="+128"       	,s="	schar b;\n	schar g;\n	schar r;" },
{	i = true;	t="rgb_16u"        ,f="DF_RGB_16u"        ,glf="DF_RGB_16u"			,	alpha = false	,p=1,	b={16,16,16}       	,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_RGB"	,	GLType = "GL_UNSIGNED_SHORT"				,	v="+32768"     	,	v2="-32768"     	,s="	ushort r;\n	ushort g;\n	ushort b;" },
{	i = true;	t="bgr_16u"        ,f="DF_BGR_16u"        ,glf="DF_BGR_16u"			,	alpha = false	,p=1,	b={16,16,16}       	,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_BGR"	,	GLType = "GL_UNSIGNED_SHORT"				,	v="+32768"     	,	v2="-32768"     	,s="	ushort b;\n	ushort g;\n	ushort r;" },
{	i = false;	t="rgb_16s"        ,f="DF_RGB_16s"        ,glf="DF_RGB_16s"			,	alpha = false	,p=2,	b={16,16,16}       	,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_RGB"	,	GLType = "GL_SHORT" 						,	v="-32768"     	,	v2="+32768"     	,s="	short r;\n	short g;\n	short b;" },
{	i = false;	t="bgr_16s"        ,f="DF_BGR_16s"        ,glf="DF_BGR_16s"			,	alpha = false	,p=2,	b={16,16,16}       	,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_BGR"	,	GLType = "GL_SHORT" 						,	v="-32768"     	,	v2="+32768"     	,s="	short b;\n	short g;\n	short r;" },
{	i = true;	t="rgb_16f"        ,f="DF_RGB_16f"        ,glf="DF_RGB_16f"			,	alpha = false	,p=4,	b={"f","f","f"}    	,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_RGB"	,	GLType = "GL_HALF_FLOAT"					,	v=""           	,	v2=""           	,s="	half r;\n	half g;\n	half b;" },
{	i = true;	t="bgr_16f"        ,f="DF_BGR_16f"        ,glf="DF_BGR_16f"			,	alpha = false	,p=4,	b={"f","f","f"}    	,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_BGR"	,	GLType = "GL_HALF_FLOAT"					,	v=""           	,	v2=""           	,s="	half b;\n	half g;\n	half r;" },
{	i = true;	t="rgb_32u"        ,f="DF_RGB_32u"        ,glf="DF_RGB_32u"			,	alpha = false	,p=1,	b={32,32,32}       	,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_RGB"	,	GLType = "GL_UNSIGNED_INT"					,	v="+2147483648"	,	v2="-2147483648"	,s="	uint r;\n	uint g;\n	uint b;" },
{	i = true;	t="bgr_32u"        ,f="DF_BGR_32u"        ,glf="DF_BGR_32u"			,	alpha = false	,p=1,	b={32,32,32}       	,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_BGR"	,	GLType = "GL_UNSIGNED_INT"					,	v="+2147483648"	,	v2="-2147483648"	,s="	uint b;\n	uint g;\n	uint r;" },
{	i = false;	t="rgb_32s"        ,f="DF_RGB_32s"        ,glf="DF_RGB_32s"			,	alpha = false	,p=2,	b={32,32,32}       	,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_RGB"	,	GLType = "GL_INT"							,	v="-2147483648"	,	v2="+2147483648"	,s="	int r;\n	int g;\n	int b;" },
{	i = false;	t="bgr_32s"        ,f="DF_BGR_32s"        ,glf="DF_BGR_32s"			,	alpha = false	,p=2,	b={32,32,32}       	,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_BGR"	,	GLType = "GL_INT"							,	v="-2147483648"	,	v2="+2147483648"	,s="	int b;\n	int g;\n	int r;" },
{	i = true;	t="rgb_32f"        ,f="DF_RGB_32f"        ,glf="DF_RGB_32f"			,	alpha = false	,p=3,	b={"f","f","f"}    	,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_RGB"	,	GLType = "GL_FLOAT" 						,	v=""           	,	v2=""           	,s="	float r;\n	float g;\n	float b;" },
{	i = true;	t="bgr_32f"        ,f="DF_BGR_32f"        ,glf="DF_BGR_32f"			,	alpha = false	,p=3,	b={"f","f","f"}    	,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_BGR"	,	GLType = "GL_FLOAT" 						,	v=""           	,	v2=""           	,s="	float b;\n	float g;\n	float r;" },
{	i = false;	t="rgb_64f"        ,f="DF_RGB_64f"        ,glf="DF_RGB_64f"			,	alpha = false	,p=3,	b={"f","f","f"}    	,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_RGB"	,	GLType = "GL_DOUBLE"						,	v=""           	,	v2=""           	,s="	double r;\n	double g;\n	double b;" },
{	i = false;	t="bgr_64f"        ,f="DF_BGR_64f"        ,glf="DF_BGR_64f"			,	alpha = false	,p=3,	b={"f","f","f"}    	,a = ""					,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_NONE"	,	GLType = "GL_DOUBLE"						,	v=""           	,	v2=""           	,s="	double b;\n	double g;\n	double r;" },
{	i = true;	t="rgba_8u"        ,f="DF_RGBA_8u"        ,glf="DF_RGBA_8u"			,	alpha = true	,p=1,	b={8,8,8,8}        	,a = tostring((2^8)-1)	,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_RGBA"	,	GLType = "GL_UNSIGNED_BYTE" 				,	v="+128"       	,	v2="-128"       	,s="	union{\n		struct{\n			uchar r;\n			uchar g;\n			uchar b;\n			uchar a;\n		};\n		uint val;\n	};" },
{	i = true;	t="argb_8u"        ,f="DF_ARGB_8u"        ,glf="DF_ARGB_8u"			,	alpha = true	,p=1,	b={8,8,8,8}        	,a = tostring((2^8)-1)	,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_BGRA"	,	GLType = "GL_UNSIGNED_INT_8_8_8_8_REV"		,	v="+128"       	,	v2="-128"       	,s="	union{\n		struct{\n			uchar a;\n			uchar r;\n			uchar g;\n			uchar b;\n		};\n		uint val;\n	};" },
{	i = true;	t="bgra_8u"        ,f="DF_BGRA_8u"        ,glf="DF_BGRA_8u"			,	alpha = true	,p=1,	b={8,8,8,8}        	,a = tostring((2^8)-1)	,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_BGRA"	,	GLType = "GL_UNSIGNED_BYTE" 				,	v="+128"       	,	v2="-128"       	,s="	union{\n		struct{\n			uchar b;\n			uchar g;\n			uchar r;\n			uchar a;\n		};\n		uint val;\n	};" },
{	i = true;	t="abgr_8u"        ,f="DF_ABGR_8u"        ,glf="DF_ABGR_8u"			,	alpha = true	,p=1,	b={8,8,8,8}        	,a = tostring((2^8)-1)	,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_RGBA"	,	GLType = "GL_UNSIGNED_INT_8_8_8_8_REV"		,	v="+128"       	,	v2="-128"       	,s="	union{\n		struct{\n			uchar a;\n			uchar b;\n			uchar g;\n			uchar r;\n		};\n		uint val;\n	};" },
{	i = false;	t="rgba_8s"        ,f="DF_RGBA_8s"        ,glf="DF_RGBA_8s"			,	alpha = true	,p=2,	b={8,8,8,8}        	,a = "127"				,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_RGBA"	,	GLType = "GL_BYTE"							,	v="-128"       	,	v2="+128"       	,s="	union{\n		struct{\n			schar r;\n			schar g;\n			schar b;\n			schar a;\n		};\n		uint val;\n	};" },
{	i = false;	t="argb_8s"        ,f="DF_ARGB_8s"        ,glf="DF_RGBA_8s"			,	alpha = true	,p=2,	b={8,8,8,8}        	,a = "127"				,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_NONE"	,	GLType = "GL_BYTE"							,	v="-128"       	,	v2="+128"       	,s="	union{\n		struct{\n			schar a;\n			schar r;\n			schar g;\n			schar b;\n		};\n		uint val;\n	};" },
{	i = false;	t="bgra_8s"        ,f="DF_BGRA_8s"        ,glf="DF_BGRA_8s"			,	alpha = true	,p=2,	b={8,8,8,8}        	,a = "127"				,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_BGRA"	,	GLType = "GL_BYTE"							,	v="-128"       	,	v2="+128"       	,s="	union{\n		struct{\n			schar b;\n			schar g;\n			schar r;\n			schar a;\n		};\n		uint val;\n	};" },
{	i = false;	t="abgr_8s"        ,f="DF_ABGR_8s"        ,glf="DF_ABGR_8s" 		,	alpha = true	,p=2,	b={8,8,8,8}        	,a = "127"				,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_NONE"	,	GLType = "GL_BYTE"							,	v="-128"       	,	v2="+128"       	,s="	union{\n		struct{\n			schar a;\n			schar b;\n			schar g;\n			schar r;\n		};\n		uint val;\n	};" },
{	i = true;	t="rgba_16u"       ,f="DF_RGBA_16u"       ,glf="DF_RGBA_16u"		,	alpha = true	,p=1,	b={16,16,16,16}    	,a = tostring((2^16)-1)	,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_RGBA"	,	GLType = "GL_UNSIGNED_SHORT"				,	v="+32768"     	,	v2="-32768"     	,s="	union{\n		struct{\n			ushort r;\n			ushort g;\n			ushort b;\n			ushort a;\n		};\n		ulong val;\n	};" },
{	i = true;	t="bgra_16u"       ,f="DF_BGRA_16u"       ,glf="DF_BGRA_16u"		,	alpha = true	,p=1,	b={16,16,16,16}    	,a = tostring((2^16)-1)	,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_BGRA"	,	GLType = "GL_UNSIGNED_SHORT"				,	v="+32768"     	,	v2="-32768"     	,s="	union{\n		struct{\n			ushort b;\n			ushort g;\n			ushort r;\n			ushort a;\n		};\n		ulong val;\n	};" },
{	i = true;	t="argb_16u"       ,f="DF_ARGB_16u"       ,glf="DF_RGBA_16u"		,	alpha = true	,p=1,	b={16,16,16,16}    	,a = tostring((2^16)-1)	,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_NONE"	,	GLType = "GL_UNSIGNED_SHORT"				,	v="+32768"     	,	v2="-32768"     	,s="	union{\n		struct{\n			ushort a;\n			ushort r;\n			ushort g;\n			ushort b;\n		};\n		ulong val;\n	};" },
{	i = true;	t="abgr_16u"       ,f="DF_ABGR_16u"       ,glf="DF_RGBA_16u"		,	alpha = true	,p=1,	b={16,16,16,16}    	,a = tostring((2^16)-1)	,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_NONE"	,	GLType = "GL_UNSIGNED_SHORT"				,	v="+32768"     	,	v2="-32768"     	,s="	union{\n		struct{\n			ushort a;\n			ushort b;\n			ushort g;\n			ushort r;\n		};\n		ulong val;\n	};" },
{	i = false;	t="rgba_16s"       ,f="DF_RGBA_16s"       ,glf="DF_RGBA_16s"		,	alpha = true	,p=2,	b={16,16,16,16}    	,a = "32767"			,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_RGBA"	,	GLType = "GL_SHORT" 						,	v="-32768"     	,	v2="+32768"     	,s="	union{\n		struct{\n			short r;\n			short g;\n			short b;\n			short a;\n		};\n		ulong val;\n	};" },
{	i = false;	t="bgra_16s"       ,f="DF_BGRA_16s"       ,glf="DF_BGRA_16s"		,	alpha = true	,p=2,	b={16,16,16,16}    	,a = "32767"			,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_BGRA"	,	GLType = "GL_SHORT" 						,	v="-32768"     	,	v2="+32768"     	,s="	union{\n		struct{\n			short b;\n			short g;\n			short r;\n			short a;\n		};\n		ulong val;\n	};" },
{	i = false;	t="argb_16s"       ,f="DF_ARGB_16s"       ,glf="DF_RGBA_16s"		,	alpha = true	,p=2,	b={16,16,16,16}    	,a = "32767"			,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_NONE"	,	GLType = "GL_SHORT" 						,	v="-32768"     	,	v2="+32768"     	,s="	union{\n		struct{\n			short a;\n			short r;\n			short g;\n			short b;\n		};\n		ulong val;\n	};" },
{	i = false;	t="abgr_16s"       ,f="DF_ABGR_16s"       ,glf="DF_RGBA_16s"		,	alpha = true	,p=2,	b={16,16,16,16}    	,a = "32767"			,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_NONE"	,	GLType = "GL_SHORT" 						,	v="-32768"     	,	v2="+32768"     	,s="	union{\n		struct{\n			short a;\n			short b;\n			short g;\n			short r;\n		};\n		ulong val;\n	};" },
{	i = true;	t="rgba_16f"       ,f="DF_RGBA_16f"       ,glf="DF_RGBA_16f"		,	alpha = true	,p=4,	b={"f","f","f","f"}	,a = ""					,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_RGBA"	,	GLType = "GL_HALF_FLOAT"					,	v=""           	,	v2=""           	,s="	union{\n		struct{\n			half r;\n			half g;\n			half b;\n			half a;\n		};\n		ulong val;\n	};" },
{	i = true;	t="bgra_16f"       ,f="DF_BGRA_16f"       ,glf="DF_BGRA_16f"		,	alpha = true	,p=4,	b={"f","f","f","f"}	,a = ""					,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_BGRA"	,	GLType = "GL_HALF_FLOAT"					,	v=""           	,	v2=""           	,s="	union{\n		struct{\n			half b;\n			half g;\n			half r;\n			half a;\n		};\n		ulong val;\n	};" },
{	i = true;	t="argb_16f"       ,f="DF_ARGB_16f"       ,glf="DF_RGBA_16f"		,	alpha = true	,p=4,	b={"f","f","f","f"}	,a = ""					,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_NONE"	,	GLType = "GL_HALF_FLOAT"					,	v=""           	,	v2=""           	,s="	union{\n		struct{\n			half a;\n			half r;\n			half g;\n			half b;\n		};\n		ulong val;\n	};" },
{	i = true;	t="abgr_16f"       ,f="DF_ABGR_16f"       ,glf="DF_RGBA_16f"		,	alpha = true	,p=4,	b={"f","f","f","f"}	,a = ""					,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_NONE"	,	GLType = "GL_HALF_FLOAT"					,	v=""           	,	v2=""           	,s="	union{\n		struct{\n			half a;\n			half b;\n			half g;\n			half r;\n		};\n		ulong val;\n	};" },
{	i = true;	t="rgba_32u"       ,f="DF_RGBA_32u"       ,glf="DF_RGBA_32u" 		,	alpha = true	,p=1,	b={32,32,32,32}    	,a = tostring((2^32)-1)	,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_RGBA"	,	GLType = "GL_UNSIGNED_INT"					,	v="+2147483648"	,	v2="-2147483648"	,s="	uint r;\n	uint g;\n	uint b;\n	uint a;" },
{	i = true;	t="bgra_32u"       ,f="DF_BGRA_32u"       ,glf="DF_BGRA_32u" 		,	alpha = true	,p=1,	b={32,32,32,32}    	,a = tostring((2^32)-1)	,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_BGRA"	,	GLType = "GL_UNSIGNED_INT"					,	v="+2147483648"	,	v2="-2147483648"	,s="	uint b;\n	uint g;\n	uint r;\n	uint a;" },
{	i = true;	t="argb_32u"       ,f="DF_ARGB_32u"       ,glf="DF_RGBA_32u"		,	alpha = true	,p=1,	b={32,32,32,32}    	,a = tostring((2^32)-1)	,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_NONE"	,	GLType = "GL_UNSIGNED_INT"					,	v="+2147483648"	,	v2="-2147483648"	,s="	uint a;\n	uint r;\n	uint g;\n	uint b;" },
{	i = true;	t="abgr_32u"       ,f="DF_ABGR_32u"       ,glf="DF_RGBA_32u"		,	alpha = true	,p=1,	b={32,32,32,32}    	,a = tostring((2^32)-1)	,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_NONE"	,	GLType = "GL_UNSIGNED_INT"					,	v="+2147483648"	,	v2="-2147483648"	,s="	uint a;\n	uint b;\n	uint g;\n	uint r;" },
{	i = false;	t="rgba_32s"       ,f="DF_RGBA_32s"       ,glf="DF_RGBA_32s" 		,	alpha = true	,p=2,	b={32,32,32,32}    	,a = "2147483647"		,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_RGBA"	,	GLType = "GL_INT"							,	v="-2147483648"	,	v2="+2147483648"	,s="	int r;\n	int g;\n	int b;\n	int a;" },
{	i = false;	t="bgra_32s"       ,f="DF_BGRA_32s"       ,glf="DF_BGRA_32s" 		,	alpha = true	,p=2,	b={32,32,32,32}    	,a = "2147483647"		,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_BGRA"	,	GLType = "GL_INT"							,	v="-2147483648"	,	v2="+2147483648"	,s="	int b;\n	int g;\n	int r;\n	int a;" },
{	i = false;	t="argb_32s"       ,f="DF_ARGB_32s"       ,glf="DF_RGBA_32s"		,	alpha = true	,p=2,	b={32,32,32,32}    	,a = "2147483647"		,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_NONE"	,	GLType = "GL_INT"							,	v="-2147483648"	,	v2="+2147483648"	,s="	int a;\n	int r;\n	int g;\n	int b;" },
{	i = false;	t="abgr_32s"       ,f="DF_ABGR_32s"       ,glf="DF_RGBA_32s"		,	alpha = true	,p=2,	b={32,32,32,32}    	,a = "2147483647"		,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_NONE"	,	GLType = "GL_INT"							,	v="-2147483648"	,	v2="+2147483648"	,s="	int a;\n	int b;\n	int g;\n	int r;" },
{	i = true;	t="rgba_32f"       ,f="DF_RGBA_32f"       ,glf="DF_RGBA_32f"  		,	alpha = true	,p=3,	b={"f","f","f","f"}	,a = "1.0f"				,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_RGBA"	,	GLType = "GL_FLOAT" 						,	v=""           	,	v2=""           	,s="	float r;\n	float g;\n	float b;\n	float a;" },
{	i = true;	t="bgra_32f"       ,f="DF_BGRA_32f"       ,glf="DF_BGRA_32f"  		,	alpha = true	,p=3,	b={"f","f","f","f"}	,a = "1.0f"				,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_BGRA"	,	GLType = "GL_FLOAT" 						,	v=""           	,	v2=""           	,s="	float b;\n	float g;\n	float r;\n	float a;" },
{	i = true;	t="argb_32f"       ,f="DF_ARGB_32f"       ,glf="DF_RGBA_32f"		,	alpha = true	,p=3,	b={"f","f","f","f"}	,a = "1.0f"				,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_NONE"	,	GLType = "GL_FLOAT" 						,	v=""           	,	v2=""           	,s="	float a;\n	float r;\n	float g;\n	float b;" },
{	i = true;	t="abgr_32f"       ,f="DF_ABGR_32f"       ,glf="DF_RGBA_32f"		,	alpha = true	,p=3,	b={"f","f","f","f"}	,a = "1.0f"				,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_NONE"	,	GLType = "GL_FLOAT" 						,	v=""           	,	v2=""           	,s="	float a;\n	float b;\n	float g;\n	float r;" },
{	i = false;	t="rgba_64f"       ,f="DF_RGBA_64f"       ,glf="DF_RGBA_64f" 		,	alpha = true	,p=3,	b={"f","f","f","f"}	,a = "1.0"				,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_RGBA"	,	GLType = "GL_DOUBLE"						,	v=""           	,	v2=""           	,s="	double r;\n	double g;\n	double b;\n	double a;" },
{	i = false;	t="bgra_64f"       ,f="DF_BGRA_64f"       ,glf="DF_BGRA_64f" 		,	alpha = true	,p=3,	b={"f","f","f","f"}	,a = "1.0"				,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_BGRA"	,	GLType = "GL_DOUBLE"						,	v=""           	,	v2=""           	,s="	double b;\n	double g;\n	double r;\n	double a;" },
{	i = false;	t="argb_64f"       ,f="DF_ARGB_64f"       ,glf="DF_RGBA_64f"		,	alpha = true	,p=3,	b={"f","f","f","f"}	,a = "1.0"				,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_NONE"	,	GLType = "GL_DOUBLE"						,	v=""           	,	v2=""           	,s="	double a;\n	double r;\n	double g;\n	double b;" },
{	i = false;	t="abgr_64f"       ,f="DF_ABGR_64f"       ,glf="DF_RGBA_64f"		,	alpha = true	,p=3,	b={"f","f","f","f"}	,a = "1.0"				,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_NONE"	,	GLType = "GL_DOUBLE"						,	v=""           	,	v2=""           	,s="	double a;\n	double b;\n	double g;\n	double r;" },
{	i = true;	t="rgb_9995f"      ,f="DF_RGBE_9995f"     ,glf="DF_ERGB_5999f"		,	alpha = false	,p=5,	b={"f","f","f"}		,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_RGB"	,	GLType = "GL_NONE"							,	v=""           	,	v2=""				,s="	union{\n		struct{\n			uint r:9; \n			uint g:9; \n			uint b:9; \n			uint a:5;\n		};\n		uint val;\n	};" },
{	i = true;	t="bgr_5999f"      ,f="DF_ERGB_5999f"     ,glf="DF_ERGB_5999f"		,	alpha = false	,p=5,	b={"f","f","f"}		,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_BGR"	,	GLType = "GL_UNSIGNED_INT_5_9_9_9_REV"		,	v=""           	,	v2=""				,s="	union{\n		struct{\n			uint a:5; \n			uint b:9; \n			uint g:9; \n			uint r:9;\n		};\n		uint val;\n	};" },
{	i = true;	t="rgba_10_10_10_2",f="DF_RGBA_10_10_10_2",glf="DF_RGBA_10_10_10_2"	,	alpha = true	,p=0,	b={10,10,10,2} 		,a = tostring((2^2)-1)	,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_RGBA"	,	GLType = "GL_UNSIGNED_INT_10_10_10_2"		,	v=""           	,	v2=""				,s="	union{\n		struct{\n			uint r:10;\n			uint g:10;\n			uint b:10;\n			uint a:2;\n		};\n		uint val;\n	};" },
{	i = true;	t="abgr_2_10_10_10",f="DF_ABGR_2_10_10_10",glf="DF_ABGR_2_10_10_10"	,	alpha = true	,p=0,	b={10,10,10,2} 		,a = tostring((2^2)-1)	,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_NONE"	,	GLType = "GL_UNSIGNED_INT_2_10_10_10_REV"	,	v=""           	,	v2=""				,s="	union{\n		struct{\n			uint a:2; \n			uint b:10;\n			uint g:10;\n			uint r:10;\n		};\n		uint val;\n	};" },
{	i = true;	t="rgb_11_11_10f"  ,f="DF_RGB_11_11_10f"  ,glf="DF_BGR_10_11_11f"	,	alpha = false	,p=6,	b={"f","f","f"}		,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_RGB"	,	GLType = "GL_NONE"							,	v=""           	,	v2=""				,s="	union{\n		struct{\n			uint r:11;\n			uint g:11;\n			uint b:10;\n		};\n		uint val;\n	};" },
{	i = true;	t="bgr_10_11_11f"  ,f="DF_BGR_10_11_11f"  ,glf="DF_BGR_10_11_11f" 	,	alpha = false	,p=6,	b={"f","f","f"}		,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_BGR"	,	GLType = "GL_UNSIGNED_INT_10F_11F_11F_REV"	,	v=""           	,	v2=""				,s="	union{\n		struct{\n			uint b:10;\n			uint g:11;\n			uint r:11;\n		};\n		uint val;\n	};" },
{	i = true;	t="rg_24_8"        ,f="DF_DS_24_8"        ,glf="DF_DS_24_8"       	,	alpha = false	,p=0,	b={24,8}       		,a = ""					,	glsif = "GL_IFORMAT_D24_S8" , glfm = "GL_FORMAT_DS" 	,	GLType = "GL_UNSIGNED_INT_24_8" 			,	v=""           	,	v2=""				,s="	union{\n		struct{\n			uint r:24;\n			uint g:8;\n		};\n		uint val;\n	};" },
{	i = true;	t="rg_4"           ,f="DF_LA_4"           ,glf="DF_LA_8u"			,	alpha = true	,p=0,	b={4,4}        		,a = tostring((2^4)-1)	,	glsif = "GL_IFORMAT_RG" 	, glfm = "GL_FORMAT_RG" 	,	GLType = "GL_NONE"							,	v=""           	,	v2=""				,s="	union{\n		struct{\n			uchar r:4;\n			uchar g:4;\n		};\n		byte val;\n	};" },
{	i = true;	t="rgb_332"        ,f="DF_RGB_332"        ,glf="DF_RGB_332"  		,	alpha = false	,p=0,	b={3,3,2}      		,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_RGB"	,	GLType = "GL_UNSIGNED_BYTE_3_3_2"			,	v=""           	,	v2=""				,s="	union{\n		struct{\n			uchar r:3;\n			uchar g:3;\n			uchar b:2;\n		};\n		byte val;\n	};" },
{	i = true;	t="bgr_233"        ,f="DF_BGR_233"        ,glf="DF_BGR_233"  		,	alpha = false	,p=0,	b={3,3,2}      		,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_BGR"	,	GLType = "GL_UNSIGNED_BYTE_2_3_3_REV"		,	v=""           	,	v2=""				,s="	union{\n		struct{\n			uchar b:2;\n			uchar g:3;\n			uchar r:3;\n		};\n		byte val;\n	};" },
{	i = true;	t="rgb_422"        ,f="DF_RGB_422"        ,glf="DF_RGB_422"  		,	alpha = false	,p=0,	b={4,2,2}      		,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_RGB"	,	GLType = "GL_422_EXT"						,	v=""           	,	v2=""				,s="	union{\n		struct{\n			uchar r:4;\n			uchar g:2;\n			uchar b:2;\n		};\n		byte val;\n	};" },
{	i = true;	t="bgr_224"        ,f="DF_BGR_224"        ,glf="DF_BGR_224"  		,	alpha = false	,p=0,	b={4,2,2}      		,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_BGR"	,	GLType = "GL_422_REV_EXT"					,	v=""           	,	v2=""				,s="	union{\n		struct{\n			uchar b:2;\n			uchar g:2;\n			uchar r:4;\n		};\n		byte val;\n	};" },
{	i = true;	t="rgb_565"        ,f="DF_RGB_565"        ,glf="DF_RGB_565"  		,	alpha = false	,p=0,	b={5,6,5}      		,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_RGB"	,	GLType = "GL_UNSIGNED_SHORT_5_6_5"			,	v=""           	,	v2=""				,s="	union{\n		struct{\n			ushort r:5;\n			ushort g:6;\n			ushort b:5;\n		};\n		ushort val;\n	};" },
{	i = true;	t="bgr_565"        ,f="DF_BGR_565"        ,glf="DF_BGR_565"  		,	alpha = false	,p=0,	b={5,6,5}      		,a = ""					,	glsif = "GL_IFORMAT_RGB"	, glfm = "GL_FORMAT_BGR"	,	GLType = "GL_UNSIGNED_SHORT_5_6_5_REV"		,	v=""           	,	v2=""				,s="	union{\n		struct{\n			ushort b:5;\n			ushort g:6;\n			ushort r:5;\n		};\n		ushort val;\n	};" },
{	i = true;	t="rgba_5551"      ,f="DF_RGBA_5551"      ,glf="DF_RGBA_5551"		,	alpha = true	,p=0,	b={5,5,5,1}    		,a = "1"				,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_RGBA"	,	GLType = "GL_UNSIGNED_SHORT_5_5_5_1"		,	v=""           	,	v2=""				,s="	union{\n		struct{\n			ushort r:5;\n			ushort g:5;\n			ushort b:5;\n			ushort a:1;\n		};\n		ushort val;\n	};" },
{	i = true;	t="argb_1555"      ,f="DF_ARGB_1555"      ,glf="DF_ARGB_1555"		,	alpha = true	,p=0,	b={5,5,5,1}    		,a = "1"				,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_BGRA"	,	GLType = "GL_UNSIGNED_SHORT_1_5_5_5_REV"	,	v=""           	,	v2=""				,s="	union{\n		struct{\n			ushort a:1;\n			ushort r:5;\n			ushort g:5;\n			ushort b:5;\n		};\n		ushort val;\n	};" },
{	i = true;	t="bgra_5551"      ,f="DF_BGRA_5551"      ,glf="DF_BGRA_5551"		,	alpha = true	,p=0,	b={5,5,5,1}    		,a = "1"				,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_BGRA"	,	GLType = "GL_UNSIGNED_SHORT_5_5_5_1"		,	v=""           	,	v2=""				,s="	union{\n		struct{\n			ushort b:5;\n			ushort g:5;\n			ushort r:5;\n			ushort a:1;\n		};\n		ushort val;\n	};" },
{	i = true;	t="abgr_1555"      ,f="DF_ABGR_1555"      ,glf="DF_ABGR_1555"		,	alpha = true	,p=0,	b={5,5,5,1}    		,a = "1"				,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_RGBA"	,	GLType = "GL_UNSIGNED_SHORT_1_5_5_5_REV"	,	v=""           	,	v2=""				,s="	union{\n		struct{\n			ushort a:1;\n			ushort b:5;\n			ushort g:5;\n			ushort r:5;\n		};\n		ushort val;\n	};" },
{	i = true;	t="rgba_4"         ,f="DF_RGBA_4"         ,glf="DF_RGBA_4"   		,	alpha = true	,p=0,	b={4,4,4,4}    		,a = tostring((2^4)-1)	,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_RGBA"	,	GLType = "GL_UNSIGNED_SHORT_4_4_4_4"		,	v=""           	,	v2=""				,s="	union{\n		struct{\n			ushort r:4;\n			ushort g:4;\n			ushort b:4;\n			ushort a:4;\n		};\n		ushort val;\n	};" },
{	i = true;	t="argb_4"         ,f="DF_ARGB_4"         ,glf="DF_ARGB_4"   		,	alpha = true	,p=0,	b={4,4,4,4}    		,a = tostring((2^4)-1)	,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_BGRA"	,	GLType = "GL_UNSIGNED_SHORT_4_4_4_4_REV"	,	v=""           	,	v2=""				,s="	union{\n		struct{\n			ushort a:4;\n			ushort r:4;\n			ushort g:4;\n			ushort b:4;\n		};\n		ushort val;\n	};" },
{	i = true;	t="bgra_4"         ,f="DF_BGRA_4"         ,glf="DF_BGRA_4"   		,	alpha = true	,p=0,	b={4,4,4,4}    		,a = tostring((2^4)-1)	,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_BGRA"	,	GLType = "GL_UNSIGNED_SHORT_4_4_4_4"		,	v=""           	,	v2=""				,s="	union{\n		struct{\n			ushort b:4;\n			ushort g:4;\n			ushort r:4;\n			ushort a:4;\n		};\n		ushort val;\n	};" },
{	i = true;	t="abgr_4"         ,f="DF_ABGR_4"         ,glf="DF_ABGR_4"   		,	alpha = true	,p=0,	b={4,4,4,4}    		,a = tostring((2^4)-1)	,	glsif = "GL_IFORMAT_RGBA"	, glfm = "GL_FORMAT_RGBA"	,	GLType = "GL_UNSIGNED_SHORT_4_4_4_4_REV"	,	v=""           	,	v2=""				,s="	union{\n		struct{\n			ushort a:4;\n			ushort b:4;\n			ushort g:4;\n			ushort r:4;\n		};\n		ushort val;\n	};" }
}	

-- _G.h=io.open("test"..".txt","w")

header1 = [[
#pragma once

#include "Definitions.h"
#pragma pack(push, 1)   // n = 16, pushed to stack
// #pragma pack(1) // this resolves the alingment problem ;)
#include "Struct.h"

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


//		8 bits

]]

header2 = [[

extern float gray_r;
extern float gray_g;
extern float gray_b;

#pragma warning(disable:4244)

float fast_roundf(float x);
// faster than fast_roundf(), only one aritmetic(sum)
int fastRound(double x);

float M_GRAY(float r, float g, float b);

float half2float(half& val);

half f2h(float val);

#define float2half(val) f2h(float(val))

ushort glUFloat10(float value);

ushort glUFloat11(float value);

float operator10float(ushort Value);

float operator11float(ushort Value);

rgb_32f clamp_3f(rgb_32f v, float mi, float ma);

rgb_11_11_10f	To_UnsignedInt_11f_11f_10f(rgb_32f& v);

rgb_32f			From_UnsignedInt_11f_11f_10f(rgb_11_11_10f& v);

//float log2(float v);

//double log2(double v);

rgb_9995f	packF3x9_E1x5(rgb_32f& v);

rgb_32f		unpackF3x9_E1x5(rgb_9995f& u);

rgb_11_11_10f	pack_11_11_10f(rgb_32f& v);

rgb_32f			unpack_11_11_10f(rgb_11_11_10f& v);

rgb_9995f	pack_9995f(rgb_32f& v);

rgb_32f		unpack_9995f(rgb_9995f& u);

#pragma warning(default:4244)

#pragma pack(pop)   // n = 2 , stack popped



]]
..
[[






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







]]

header3 = [[

#include   "..\..\pch.h"
//#include "..\..\Enums.h"
#include   "..\..\Definitions.h"
#include   "..\..\Structs.h"
//#include "..\_GEN_Structs.h"

#pragma warning(disable:4244)

]]

header6 = [[
#pragma once
#include "pch.h"
#include "Enums.h"
#include "Definitions.h"
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
	switch (ff) {]]

header7 = [[
// #pragma once


// weel aligned formats
// R
]]

function print_(v)
	h:write(v)
	h:write("\n")
-- 	_G.h:write("\n")

end
-- print_("test")





