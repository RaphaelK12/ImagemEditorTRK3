#pragma once
#include "pch.h"

// types
//typedef unsigned long int		   Bool		;
//typedef   signed char			   schar	;
//typedef   signed char			   sbyte	;
//typedef unsigned char			   uchar	;
//typedef unsigned char			   byte		;
//typedef unsigned short			   ushort	;
//typedef   signed short			   sshort	;
//typedef unsigned long int		   uint		;
//typedef   signed long int		   sint		;
//typedef unsigned long long int	   ulong	;
//typedef   signed long long int	   slong	;
//
//
//#define clamp(val,min,max) (((val)<min?min:(val))>max?max:(val))
//
//#define clampB(val) ((uchar)((val)<0?0:(val))<255?(val):255)
//
//#define clampS(val) ((ushort)((val)<0?0:(val))<65535?(val):65535)
//
//#define clampD(val) ((double)((val)<0.0?0.0:(val))<1.0?(val):1.0)
//
//#define clampF(val) ((float)((val)<0.0?0.0:(val))<1.0?(val):1.0)
//
//#define rnd(val) ((slong)((val)+((val)>0?0.5f:-0.5f)))
//
//#define rnd2(val) (((val)+((val)>0?0.5f:-0.5f)))
//
//#define rndB(val) ((uchar)((val)+((val)>0?0.5f:-0.5f)))
//
//#define rndS(val) ((ushort)((val)+((val)>0?0.5f:-0.5f)))
//
//#define rc(val,min,max) (clamp(rnd(val),min,max))
//
//#define rct(val,min,max,type) ((type)clamp(rnd(val),min,max))
//
//#define rcB(val) (clampB(rnd(val)))
//
//#define rcS(val) (clampS(rnd(val)))



// values for conversion to grayscale
// human view
#define GRAY_R 0.2125f
#define GRAY_G 0.7154f
#define GRAY_B 0.0721f
#define GRAY(r,g,b) (((r)*0.2125f)+((g)*0.7154f)+((b)*0.0721f))

// 565
#define GRAY_565_R 0.3125f
#define GRAY_565_G 0.3750f
#define GRAY_565_B 0.3125f
#define GRAY_565(r,g,b) (((r)*0.3125f)+((g)*0.3750f)+((b)*0.3125f))

// d3 compressor
#define GRAY1_R 0.3086f
#define GRAY1_G 0.6094f
#define GRAY1_B 0.0820f
#define GRAY1(r,g,b) (((r)*0.3086f)+((g)*0.6094f)+((b)*0.0820f))

// pdf net book
#define GRAY2_R 0.30f
#define GRAY2_G 0.59f
#define GRAY2_B 0.11f
#define GRAY2(r,g,b) (((r)*0.30f)+((g)*0.59f)+((b)*0.11f))

// median
#define GRAY3_R 0.333333333333f
#define GRAY3_G 0.333333333333f
#define GRAY3_B 0.333333333333f
#define GRAY3(r,g,b) (((r)*(1/3f))+((g)*(1/3f))+((b)*(1/3f)))


// pdf d3 simplified
#define GRAY_361_R 0.3f
#define GRAY_361_G 0.6f
#define GRAY_361_B 0.1f
#define GRAY_361(r,g,b) (((r)*0.3f )+((g)*0.6f)+((b)*0.1f))

// human view simplified
#define GRAY_271_R 0.2f
#define GRAY_271_G 0.7f
#define GRAY_271_B 0.1f
#define GRAY_271(r,g,b) (((r)*0.2f )+((g)*0.7f)+((b)*0.1f))

// ajusted
#define GRAY_AJ_R 0.30f
#define GRAY_AJ_G 0.55f
#define GRAY_AJ_B 0.15f
#define GRAY_AJ(r,g,b) (((r)*0.30f )+((g)*0.55f)+((b)*0.15f))

// ps
#define GRAY_PS_R 0.20f
#define GRAY_PS_G 0.86f
#define GRAY_PS_B 0.10f
#define GRAY_PS(r,g,b) (clamp(((r)*0.35f )+((g)*0.8f)+((b)*0.15f),0,255))








// Shifts
// num bits	|	maxval	| shift	|	multiplicador
// 1		|	1		|	7	|	255
// 2		|	3		|	6	|	85
// 3		|	7		|	5	|	36,428571428571428571428571428571
// 4		|	15		|	4	|	17
// 5		|	31		|	3	|	8,2258064516129032258064516129032
// 6		|	63		|	2	|	4,047619047619047619047619047619
// 7		|	127		|	1	|	2,0078740157480314960629921259843

// values used to multipli bit number to obtain a number in range 0 to 255
#define BIT_1_MULT	255
#define BIT_2_MULT	85
#define BIT_3_MULT	36.42857142857142857142857142858
#define BIT_4_MULT	17
#define BIT_5_MULT	8.225806451612903225806451612904
#define BIT_6_MULT	4.047619047619047619047619047621
#define BIT_7_MULT	2.007874015748031496062992125985

#define BIT_56_MULT	2.032258064516129032258064516130



/*
#define BIT_2_3_MULT	3 7
#define BIT_2_4_MULT	3 15
#define BIT_2_5_MULT	3 31
#define BIT_2_6_MULT	3 63
#define BIT_2_8_MULT	3 255
#define BIT_2_9_MULT	3 511
#define BIT_2_16_MULT	3 65535
#define BIT_2_32_MULT	3 4294967295
#define BIT_2_f_MULT	0.33333333333333333333333333333333
#define BIT_2_10_MULT	3 1023
#define BIT_2_11_MULT	3 2047
#define BIT_2_12_MULT	3 4095
#define BIT_2_24_MULT	3 16777215
*/

#define BIT_1_f_MULT		1.0				 
#define BIT_1_1_MULT		1.0						 
#define BIT_1_2_MULT		3.0						 
#define BIT_1_3_MULT		7.0						 
#define BIT_1_4_MULT		15.0						 
#define BIT_1_5_MULT		31.0						 
#define BIT_1_6_MULT		63.0						 
#define BIT_1_8_MULT		255.0						 
#define BIT_1_9_MULT		511.0						 
#define BIT_1_10_MULT		1023.0				 
#define BIT_1_11_MULT		2047.0				 
#define BIT_1_12_MULT		4095.0				 
#define BIT_1_16_MULT		65535.0					 
#define BIT_1_24_MULT		16777215.0			 
#define BIT_1_32_MULT		4294967295.0				 
							                                         							 
#define BIT_2_f_MULT		0.5											/*3 1.0					*/	
#define BIT_2_1_MULT		0.5											/*3 7					*/	
#define BIT_2_2_MULT		1.0											/*3 7					*/	
#define BIT_2_3_MULT		2.333333333333333333333333333333			/*3 7					*/	
#define BIT_2_4_MULT		5.0											/*3 15					*/	
#define BIT_2_5_MULT		10.666666666666666666666666666667			/*3 31					*/	
#define BIT_2_6_MULT		21.0										/*3 63					*/	
#define BIT_2_8_MULT		85.0										/*3 255					*/	
#define BIT_2_9_MULT		170.33333333333333333333333333333			/*3 511					*/	
#define BIT_2_10_MULT		341.0										/*3 1023				*/	
#define BIT_2_11_MULT		682.33333333333333333333333333333			/*3 2047				*/	
#define BIT_2_12_MULT		1365.0										/*3 4095				*/	
#define BIT_2_16_MULT		21845.0										/*3 65535				*/	
#define BIT_2_24_MULT		5592405.0									/*3 16777215			*/	
#define BIT_2_32_MULT		1431655765.0								/*3 4294967295			*/	


#define BIT_3_f_MULT		0.14285714285714285714285714285714			/*7 1.0						*/	
#define BIT_3_1_MULT		0.14285714285714285714285714285714			/*7 3						*/	
#define BIT_3_2_MULT		0.42857142857142857142857142857143			/*7 3						*/	
#define BIT_3_3_MULT		1.0											/*7 3						*/	
#define BIT_3_4_MULT		2.1428571428571428571428571428571			/*7 15						*/	
#define BIT_3_5_MULT		4.4285714285714285714285714285714			/*7 31						*/	
#define BIT_3_6_MULT		9.0											/*7 63						*/	
#define BIT_3_8_MULT		36.428571428571428571428571428571			/*7 255						*/	
#define BIT_3_9_MULT		73.0										/*7 511						*/	
#define BIT_3_10_MULT		146.14285714285714285714285714286			/*7 1023					*/	
#define BIT_3_11_MULT		292.42857142857142857142857142857			/*7 2047					*/	
#define BIT_3_12_MULT		585.0										/*7 4095					*/	
#define BIT_3_16_MULT		9362.1428571428571428571428571429			/*7 65535					*/	
#define BIT_3_24_MULT		2396745.0									/*7 16777215				*/	
#define BIT_3_32_MULT		613566756.42857142857142857142857			/*7 4294967295				*/	
																		
#define BIT_4_f_MULT		0.06666666666666666666666666666667			/*15 1.0					*/	
#define BIT_4_1_MULT		0.06666666666666666666666666666667											/*15 3						*/	
#define BIT_4_2_MULT		0.2											/*15 3						*/	
#define BIT_4_3_MULT		0.46666666666666666666666666666667			/*15 7						*/	
#define BIT_4_4_MULT		1.0											/*15 7						*/	
#define BIT_4_5_MULT		2.0666666666666666666666666666667			/*15 31						*/	
#define BIT_4_6_MULT		4.2											/*15 63						*/	
#define BIT_4_8_MULT		17.0										/*15 255					*/	
#define BIT_4_9_MULT		34.066666666666666666666666666667			/*15 511					*/	
#define BIT_4_10_MULT		68.2										/*15 1023					*/	
#define BIT_4_11_MULT		136.46666666666666666666666666667			/*15 2047					*/	
#define BIT_4_12_MULT		273.06666666666666666666666666667			/*15 4095					*/	
#define BIT_4_16_MULT		4369.0										/*15 65535					*/	
#define BIT_4_24_MULT		1118481.0									/*15 16777215				*/	
#define BIT_4_32_MULT		286331153.0									/*15 4294967295				*/	
																		
#define BIT_5_f_MULT		0.03225806451612903225806451612903			/*31 1.0					*/	
#define BIT_5_1_MULT		0.03225806451612903225806451612903			/*31 3						*/	
#define BIT_5_2_MULT		0.0967741935483870967741935483871			/*31 3						*/	
#define BIT_5_3_MULT		0.22580645161290322580645161290323			/*31 7						*/	
#define BIT_5_4_MULT		0.48387096774193548387096774193548			/*31 15						*/	
#define BIT_5_5_MULT		1.0											/*31 15						*/	
#define BIT_5_6_MULT		2.032258064516129032258064516129			/*31 63						*/	
#define BIT_5_8_MULT		8.2258064516129032258064516129032			/*31 255					*/	
#define BIT_5_9_MULT		16.483870967741935483870967741935			/*31 511					*/	
#define BIT_5_10_MULT		33.0										/*31 1023					*/	
#define BIT_5_11_MULT		66.032258064516129032258064516129			/*31 2047					*/	
#define BIT_5_12_MULT		132.09677419354838709677419354839			/*31 4095					*/	
#define BIT_5_16_MULT		2114.0322580645161290322580645161			/*31 65535					*/	
#define BIT_5_24_MULT		541200.48387096774193548387096774			/*31 16777215				*/	
#define BIT_5_32_MULT		138547332.09677419354838709677419			/*31 4294967295				*/	
																		
#define BIT_6_f_MULT		0.01587301587301587301587301587302			/*63 1.0					*/	
#define BIT_6_1_MULT		0.01587301587301587301587301587302			/*63 3						*/	
#define BIT_6_2_MULT		0.04761904761904761904761904761905			/*63 3						*/	
#define BIT_6_3_MULT		0.11111111111111111111111111111111			/*63 7						*/	
#define BIT_6_4_MULT		0.23809523809523809523809523809524			/*63 15						*/	
#define BIT_6_5_MULT		0.49206349206349206349206349206349			/*63 31						*/	
#define BIT_6_6_MULT		1.0											/*63 31						*/	
#define BIT_6_8_MULT		4.047619047619047619047619047619			/*63 255					*/	
#define BIT_6_9_MULT		8.1111111111111111111111111111111			/*63 511					*/	
#define BIT_6_10_MULT		16.238095238095238095238095238095			/*63 1023					*/	
#define BIT_6_11_MULT		32.492063492063492063492063492063			/*63 2047					*/	
#define BIT_6_12_MULT		65.0										/*63 4095					*/	
#define BIT_6_16_MULT		1040.2380952380952380952380952381			/*63 65535					*/	
#define BIT_6_24_MULT		266305.0									/*63 16777215				*/	
#define BIT_6_32_MULT		68174084.047619047619047619047619			/*63 4294967295				*/	
																		
#define BIT_8_f_MULT		0.0039215686274509803921568627451			/*255 1.0					*/	
#define BIT_8_1_MULT		0.0039215686274509803921568627451			/*255 3						*/	
#define BIT_8_2_MULT		0.01176470588235294117647058823529			/*255 3						*/	
#define BIT_8_3_MULT		0.02745098039215686274509803921569			/*255 7						*/	
#define BIT_8_4_MULT		0.05882352941176470588235294117647			/*255 15					*/	
#define BIT_8_5_MULT		0.12156862745098039215686274509804			/*255 31					*/	
#define BIT_8_6_MULT		0.24705882352941176470588235294118			/*255 63					*/	
#define BIT_8_8_MULT		1.0											/*255 511					*/	
#define BIT_8_9_MULT		2.0039215686274509803921568627451			/*255 511					*/	
#define BIT_8_10_MULT		4.0117647058823529411764705882353			/*255 1023					*/	
#define BIT_8_11_MULT		8.0274509803921568627450980392157			/*255 2047					*/	
#define BIT_8_12_MULT		16.058823529411764705882352941176			/*255 4095					*/	
#define BIT_8_16_MULT		257.0										/*255 65535					*/	
#define BIT_8_24_MULT		65793.0										/*255 16777215				*/	
#define BIT_8_32_MULT		16843009.0									/*255 4294967295			*/	
																		
#define BIT_9_f_MULT		0.00195694716242661448140900195695			/*511 1.0					*/	
#define BIT_9_1_MULT		0.00195694716242661448140900195695			/*511 3						*/	
#define BIT_9_2_MULT		0.00587084148727984344422700587084			/*511 3						*/	
#define BIT_9_3_MULT		0.01369863013698630136986301369863			/*511 7						*/	
#define BIT_9_4_MULT		0.02935420743639921722113502935421			/*511 15					*/	
#define BIT_9_5_MULT		0.06066536203522504892367906066536			/*511 31					*/	
#define BIT_9_6_MULT		0.12328767123287671232876712328767			/*511 63					*/	
#define BIT_9_8_MULT		0.49902152641878669275929549902153			/*511 255					*/	
#define BIT_9_9_MULT		1.0											/*511 255					*/	
#define BIT_9_10_MULT		2.0019569471624266144814090019569			/*511 1023					*/	
#define BIT_9_11_MULT		4.0058708414872798434442270058708			/*511 2047					*/	
#define BIT_9_12_MULT		8.0136986301369863013698630136986			/*511 4095					*/	
#define BIT_9_16_MULT		128.24853228962818003913894324853			/*511 65535					*/	
#define BIT_9_24_MULT		32832.123287671232876712328767123			/*511 16777215				*/	
#define BIT_9_32_MULT		8405024.0606653620352250489236791			/*511 4294967295			*/	
																		
#define BIT_16_f_MULT		0.000015259021896696421759365224689097		/*65535 1.0 				*/	 
#define BIT_16_1_MULT		0.000015259021896696421759365224689097		/*65535 3					*/	
#define BIT_16_2_MULT		0.000045777065690089265278095674067292		/*65535 3					*/	
#define BIT_16_3_MULT		0.00010681315327687495231555657282368		/*65535 7					*/	
#define BIT_16_4_MULT		0.00022888532845044632639047837033646		/*65535 15					*/	 
#define BIT_16_5_MULT		0.00047302967879758907454032196536202		/*65535 31					*/	 
#define BIT_16_6_MULT		0.00096131837949187457084000915541314		/*65535 63					*/	 
#define BIT_16_8_MULT		0.00389105058365758754863813229572			/*65535 255					*/	
#define BIT_16_9_MULT		0.00779736018921187151903562981613			/*65535 511					*/	
#define BIT_16_10_MULT		0.01560997940032043945983062485695			/*65535 1023				*/	
#define BIT_16_11_MULT		0.03123521782253757534142061493858			/*65535 2047				*/	
#define BIT_16_12_MULT		0.06248569466697184710460059510185			/*65535 4095				*/	
#define BIT_16_16_MULT		0.0											/*65535 4095				*/	
#define BIT_16_24_MULT		256.0038910505836575875486381323			/*65535 16777215			*/	
#define BIT_16_32_MULT		65537.0										/*65535 4294967295			*/	
																		
#define BIT_32_f_MULT		2.3283064370807973754314699618685e-10		/*4294967295.0 1.0			*/	
#define BIT_32_1_MULT		2.3283064370807973754314699618685e-10		/*4294967295.0 3			*/	
#define BIT_32_2_MULT		6.9849193112423921262944098856054e-10		/*4294967295.0 3			*/	
#define BIT_32_3_MULT		1.6298145059565581628020289733079e-9		/*4294967295.0 7			*/	
#define BIT_32_4_MULT		3.4924596556211960631472049428027e-9		/*4294967295.0 15			*/	
#define BIT_32_5_MULT		7.2177499549504718638375568817923e-9		/*4294967295.0 31			*/	
#define BIT_32_6_MULT		1.4668330553609023465218260759771e-8		/*4294967295.0 63			*/	
#define BIT_32_8_MULT		5.9371814145560333073502484027646e-8		/*4294967295.0 255			*/	
#define BIT_32_9_MULT		1.1897645893482874588454811505148e-7		/*4294967295.0 511			*/	
#define BIT_32_16_MULT		1.5258556235409005599890138395105e-5		/*4294967295.0 65535		*/	
#define BIT_32_10_MULT		2.3818574851336557150663937709915e-7		/*4294967295.0 1023			*/	
#define BIT_32_11_MULT		4.7660432767043922275082190119448e-7		/*4294967295.0 2047			*/	
#define BIT_32_12_MULT		9.5344148598458652523918694938514e-7		/*4294967295.0 4095			*/	
#define BIT_32_24_MULT		0.00390624976807885099390494893163			/*4294967295.0 16777215		*/	
#define BIT_32_32_MULT		0.0											/*4294967295.0 16777215		*/	
							                                         							 
#define BIT_f_f_MULT		1.0						 
#define BIT_f_1_MULT		1.0						 
#define BIT_f_2_MULT		3.0						 
#define BIT_f_3_MULT		7.0						 
#define BIT_f_4_MULT		15.0						 
#define BIT_f_5_MULT		31.0						 
#define BIT_f_6_MULT		63.0						 
#define BIT_f_8_MULT		255.0						 
#define BIT_f_9_MULT		511.0						 
#define BIT_f_10_MULT		1023.0				 
#define BIT_f_11_MULT		2047.0				 
#define BIT_f_12_MULT		4095.0				 
#define BIT_f_16_MULT		65535.0					 
#define BIT_f_24_MULT		16777215.0			 
#define BIT_f_32_MULT		4294967295.0				 
							                                         							 
#define BIT_10_f_MULT		9.7751710654936461388074291300098e-4		/*1023 1.0					*/	
#define BIT_10_1_MULT		9.7751710654936461388074291300098e-4			/*1023 3					*/	
#define BIT_10_2_MULT		0.002932551319648093841642228739			/*1023 3					*/	
#define BIT_10_3_MULT		0.00684261974584555229716520039101			/*1023 7					*/	
#define BIT_10_4_MULT		0.01466275659824046920821114369501			/*1023 15					*/	
#define BIT_10_5_MULT		0.03030303030303030303030303030303			/*1023 31					*/	
#define BIT_10_6_MULT		0.06158357771260997067448680351906			/*1023 63					*/	
#define BIT_10_8_MULT		0.24926686217008797653958944281525			/*1023 255					*/	
#define BIT_10_9_MULT		0.4995112414467253176930596285435			/*1023 511					*/	
#define BIT_10_10_MULT		1.0											/*1023 511					*/	
#define BIT_10_11_MULT		2.000977517106549364613880742913			/*1023 2047					*/	
#define BIT_10_12_MULT		4.002932551319648093841642228739			/*1023 4095					*/	
#define BIT_10_16_MULT		64.061583577712609970674486803519			/*1023 65535				*/	
#define BIT_10_24_MULT		16400.014662756598240469208211144			/*1023 16777215				*/	
#define BIT_10_32_MULT		4198404.0029325513196480938416422			/*1023 4294967295			*/	
																		
#define BIT_11_f_MULT		4.8851978505129457743038593063019e-4		/*2047 1.0					*/	
#define BIT_11_1_MULT		4.8851978505129457743038593063019e-4			/*2047 3					*/	
#define BIT_11_2_MULT		0.00146555935515388373229115779189			/*2047 3					*/	
#define BIT_11_3_MULT		0.00341963849535906204201270151441			/*2047 7 					*/	
#define BIT_11_4_MULT		0.00732779677576941866145578895945			/*2047 15					*/	
#define BIT_11_5_MULT		0.01514411333659013190034196384954			/*2047 31					*/	
#define BIT_11_6_MULT		0.0307767464582315583781143136297			/*2047 63					*/	
#define BIT_11_8_MULT		0.1245725451880801172447484123107			/*2047 255					*/	
#define BIT_11_9_MULT		0.24963361016121152906692721055203			/*2047 511					*/	
#define BIT_11_10_MULT		0.49975574010747435271128480703468			/*2047 1023					*/	
#define BIT_11_11_MULT		1.0											/*2047 1023					*/	
#define BIT_11_12_MULT		2.0004885197850512945774303859306			/*2047 4095					*/	
#define BIT_11_16_MULT		32.01514411333659013190034196385			/*2047 65535				*/	
#define BIT_11_24_MULT		8196.0014655593551538837322911578			/*2047 16777215				*/	
#define BIT_11_32_MULT		2098176.4997557401074743527112848			/*2047 4294967295			*/	
																		
#define BIT_12_f_MULT		2.4420024420024420024420024420024e-4		/*4095 1.0					*/	
#define BIT_12_1_MULT		7.3260073260073260073260073260073e-4		/*4095 3					*/	
#define BIT_12_2_MULT		7.3260073260073260073260073260073e-4		/*4095 3					*/	
#define BIT_12_3_MULT		0.0017094017094017094017094017094			/*4095 7					*/	
#define BIT_12_4_MULT		0.003663003663003663003663003663			/*4095 15					*/	
#define BIT_12_5_MULT		0.00757020757020757020757020757021			/*4095 31					*/	
#define BIT_12_6_MULT		0.01538461538461538461538461538462			/*4095 63					*/	
#define BIT_12_8_MULT		0.06227106227106227106227106227106			/*4095 255					*/	
#define BIT_12_9_MULT		0.12478632478632478632478632478632			/*4095 511					*/	
#define BIT_12_10_MULT		0.24981684981684981684981684981685			/*4095 1023					*/	
#define BIT_12_11_MULT		0.4998778998778998778998778998779			/*4095 2047					*/	
#define BIT_12_12_MULT		1.0											/*4095 2047					*/	
#define BIT_12_16_MULT		16.003663003663003663003663003663			/*4095 65535				*/	
#define BIT_12_24_MULT		4097.0										/*4095 16777215				*/	
#define BIT_12_32_MULT		1048832.0622710622710622710622711			/*4095 4294967295			*/	
																		
#define BIT_24_f_MULT		5.9604648328104515558750364705942e-8		/*16777215.0 1.0			*/	
#define BIT_24_1_MULT		5.9604648328104515558750364705942e-8		/*16777215.0 3				*/	
#define BIT_24_2_MULT		1.7881394498431354667625109411783e-7		/*16777215.0 3				*/	
#define BIT_24_3_MULT		4.1723253829673160891125255294159e-7		/*16777215.0 7				*/	
#define BIT_24_4_MULT		8.9406972492156773338125547058913e-7		/*16777215.0 15				*/	
#define BIT_24_5_MULT		1.8477440981712399823212613058842e-6		/*16777215.0 31				*/	
#define BIT_24_6_MULT		3.7550928446705844802012729764743e-6		/*16777215.0 63				*/	
#define BIT_24_8_MULT		1.5199185323666651467481343000015e-5		/*16777215.0 255			*/	
#define BIT_24_9_MULT		3.0457975295661407450521436364736e-5		/*16777215.0 511			*/	
#define BIT_24_10_MULT		6.0975555239650919416601623094179e-5		/*16777215.0 1023			*/	
#define BIT_24_11_MULT		1.2201071512762994334876199655306e-4		/*16777215.0 2047			*/	
#define BIT_24_12_MULT		2.4408103490358799121308274347083e-4		/*16777215.0 4095			*/	
#define BIT_24_16_MULT		0.003906190628182329427142705151			/*16777215.0 65535			*/	
#define BIT_24_24_MULT		1.0											/*16777215.0 65535			*/	
#define BIT_24_32_MULT		256.00001519918532366665146748134			/*16777215.0 4294967295		*/	



//#define LA_TRE	0.499	// it is used in conversion from rgb to luminosit, it is a threshould used in sum of rgb to L or LA,
							// a very litle value to avoid "((uchar)(250.0f * 0.2125f + 250.0f * 0.7154f + 250.0f * 0.0721f)) = 249"
							// this issue ocurs because the floating point is not very precise, floating point uses only aproximation of values, not the real(true) values.
							// "((uchar)(250.0f * 0.2125f + 250.0f * 0.7154f + 250.0f * 0.0721f + 0.000007)) = 250"
							// the sum of "(0.2125f + 0.7154f + 0.0721f) = 1.0", but on impressise calculations give 0.99999999999999999999f
							// more precisely, this avoid the first sum (250.0f * 0.2125f + 250.0f * 0.7154f + 250.0f * 0.0721f) to give a result of 249.99999999999999999999f
							// (uchar)(249.99999999999999999999f) = 249
							// (uchar)(249.99999999999999999999f + 0.000007) = 250




/* stud of bits in windows sistem:
	WORD i = 1;	// this produce the bits == 1000 0000  0000 0000
	i <<= 1;	// bits ==	0100 0000  0000 0000
	i = 255;	// bits ==	1111 1111  0000 0000
	i = 65280;	// bits ==	0000 0000  1111 1111

	the bits order are diferent from what we alway see in books or MS "calc.exe",
	I belive the autors of books and MS calc.exe are based on "Mac OS" sistem or another sistem Big Endian.
	we generaly imagine the short integer number 1 whithing representation == 0000 0000 0000 0001 (the most significant bit first and 
	the les significant bit last) but in some tests that I have made the result are inverse.

	The example:
		typedef union {
			WORD integer;
			uchar array[2];
			struct{
				uchar a:1, b:1, c:1, d:1,   e:1, f:1, g:1, h:1,   i:1, j:1, k:1, l:1,   m:1, n:1, o:1, p:1;
			};
			struct{
				uchar st1, st2;
			};
			struct{
				uchar w:4, x:4, y:4, z:4;
			};
			struct{
				WORD r5:5, g6:6, b5:5;
			};
		} bitTest;
		bitTest t;
		t.integer = 1;
		printf("integer:%i array[0]:%i array[1]%i st1:%i st2:%i a:%i b:%i c:%i d:%i", 
		t.integer, t.array[0], t.array[1], t.st1, t.st2, t.a, t.b, t.c, t.d);
		t.integer++;
		printf("integer:%i array[0]:%i array[1]%i st1:%i st2:%i a:%i b:%i c:%i d:%i", 
		t.integer, t.array[0], t.array[1], t.st1, t.st2, t.a, t.b, t.c, t.d);
		t.integer++;
		printf("integer:%i array[0]:%i array[1]%i st1:%i st2:%i a:%i b:%i c:%i d:%i", 
		t.integer, t.array[0], t.array[1], t.st1, t.st2, t.a, t.b, t.c, t.d);
		t.integer = 255;
		printf("integer:%i array[0]:%i array[1]%i st1:%i st2:%i a:%i b:%i c:%i d:%i", 
		t.integer, t.array[0], t.array[1], t.st1, t.st2, t.a, t.b, t.c, t.d);
		t.integer = 65280;
		printf("integer:%i array[0]:%i array[1]%i st1:%i st2:%i a:%i b:%i c:%i d:%i", 
		t.integer, t.array[0], t.array[1], t.st1, t.st2, t.a, t.b, t.c, t.d);

	make yourself some tests on this union.
	If integer have a value of 255 the array[0] == 255 and array[1] == 0,
	if integer have a value of 257 the array[0] == 2 and array[1] == 1,
	the same ocurs on st1 and st2, st1 == array[0], st2 == array[1], this test are to test if structures and arrays have the same organization
	a ... p give the bits 0 or 1,
	and w ... z give other possibilities.
	this test conclude the les significant bit are first and more significant last

	RGBA bits organization:
	[rrrrrrrr][gggggggg][bbbbbbbb][aaaaaaaa]

	ARGB bits organization:
	[aaaaaaaa][rrrrrrrr][gggggggg][bbbbbbbb]*/
//#define xBGR2(r,g,b) RGB(b,g,r)
//
//#define RGBA(r,g,b,a)		(\
//							 (( (DWORD)(uchar)(r) )	  )	|\
//							 (( (DWORD)(uchar)(g) )<<8 )	|\
//							 (( (DWORD)(uchar)(b) )<<16)	|\
//							 (( (DWORD)(uchar)(a) )<<24)	 \
//							)
//
//#define BGRA(r,g,b,a)		(\
//							 (( (DWORD)(uchar)(b) )	  )	|\
//							 (( (DWORD)(uchar)(g) )<<8 )	|\
//							 (( (DWORD)(uchar)(r) )<<16)	|\
//							 (( (DWORD)(uchar)(a) )<<24)	 \
//							)
//							
//#define ARGB(r,g,b,a)		(\
//							 (( (DWORD)(uchar)(a) )	  )	|\
//							 (( (DWORD)(uchar)(r) )<<8 )	|\
//							 (( (DWORD)(uchar)(g) )<<16)	|\
//							 (( (DWORD)(uchar)(b) )<<24)	 \
//							)
//
//#define ABGR(r,g,b,a)		(\
//							 (( (DWORD)(uchar)(a) )	  )	|\
//							 (( (DWORD)(uchar)(b) )<<8 )	|\
//							 (( (DWORD)(uchar)(g) )<<16)	|\
//							 (( (DWORD)(uchar)(r) )<<24)	 \
//							)
//							
//							
//#define xBGR(r,g,b)			(\
//							 ( ((DWORD)(uchar)(b)) <<8 )	|\
//							 ( ((DWORD)(uchar)(g)) <<16) |\
//							 ( ((DWORD)(uchar)(r)) <<24)  \
//							)
//
//#define xRGB(r,g,b)			(\
//							 ( ((DWORD)(uchar)(r)) <<8 )	|\
//							 ( ((DWORD)(uchar)(g)) <<16)	|\
//							 ( ((DWORD)(uchar)(b)) <<24)	 \
//							)
//
//#define BGRx(r,g,b)			(\
//							 ( ((DWORD)(uchar)(b)) <<0 )	|\
//							 ( ((DWORD)(uchar)(g)) <<8 ) |\
//							 ( ((DWORD)(uchar)(r)) <<16)  \
//							)
//
//#define RGBx(r,g,b)			(\
//							 ( ((DWORD)(uchar)(r)) <<0 )	|\
//							 ( ((DWORD)(uchar)(g)) <<8 )	|\
//							 ( ((DWORD)(uchar)(b)) <<16)	 \
//							)
//
//
////#define xRGB(r,g,b)			(\
////							 ( ((DWORD)(uchar)(r)) <<16)|\
////							 ( ((DWORD)(uchar)(g)) <<8) |\
////							 ( ((DWORD)(uchar)(b)) ) \
////							)
//
// /* pr pg pb estão sendo contados de 6 em 6 por causa da macro, usar outro método de conversão ou usar variaveis temporarias */
//#define R5G5B5A1(r,g,b,a)	(\
//							 (( (WORD)(uchar)(clamp(rnd2((r)/BIT_5_MULT),0,0x1f))&0x1f )<<0  )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((g)/BIT_5_MULT),0,0x1f))&0x1f )<<5  )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((b)/BIT_5_MULT),0,0x1f))&0x1f )<<10 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((a)/255),0,1		  ))&0x0001)<<15)	 \
//							)
//							
//#define B5G5R5A1(r,g,b,a)	(\
//							 (( (WORD)(uchar)(clamp(rnd2((b)/BIT_5_MULT),0,0x1f))&0x1f  )<<0 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((g)/BIT_5_MULT),0,0x1f))&0x1f  )<<5 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((r)/BIT_5_MULT),0,0x1f))&0x1f  )<<10)	|\
//							 (( (WORD)(uchar)(clamp(rnd2((a)/255),0,1		  ))&0x0001)<<15)	 \
//							)
//							
//#define A1R5G5B5(r,g,b,a)	(\
//							 (( (WORD)(uchar)(clamp(rnd2((a)/255),0,1		  ))&0x0001)<<0 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((r)/BIT_5_MULT),0,0x1f))&0x1f  )<<1 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((g)/BIT_5_MULT),0,0x1f))&0x1f  )<<6 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((b)/BIT_5_MULT),0,0x1f))&0x1f  )<<11)	 \
//							)
//							
//#define A1B5G5R5(r,g,b,a)	(\
//							 (( (WORD)(uchar)(clamp(rnd2((a)/255),0,1		  ))&0x0001)<<0 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((b)/BIT_5_MULT),0,0x1f))&0x1f  )<<1 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((g)/BIT_5_MULT),0,0x1f))&0x1f  )<<6 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((r)/BIT_5_MULT),0,0x1f))&0x1f  )<<11)	 \
//							)
//							
//#define X1B5G5R5(r,g,b)		(\
//							 (( (WORD)(uchar)(clamp(rnd2((b)/BIT_5_MULT),0,0x1f))&0x1f )<<1 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((g)/BIT_5_MULT),0,0x1f))&0x1f )<<6 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((r)/BIT_5_MULT),0,0x1f))&0x1f )<<11)	 \
//							)
//
//#define X1R5G5B5(r,g,b)		(\
//							 (( (WORD)(uchar)(clamp(rnd2((r)/BIT_5_MULT),0,0x1f))&0x1f )<<1 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((g)/BIT_5_MULT),0,0x1f))&0x1f )<<6 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((b)/BIT_5_MULT),0,0x1f))&0x1f )<<11)	 \
//							)
//							
//#define R5G6B5(r,g,b)		(\
//							 (( (WORD)(uchar)(clamp(rnd2((r)/BIT_5_MULT),0,0x1f))&0x1f )<<0 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((g)/BIT_6_MULT),0,0x3f))&0x3f )<<5 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((b)/BIT_5_MULT),0,0x1f))&0x1f )<<11)	 \
//							)
//
//#define B5G6R5(r,g,b)		(\
//							 (( (WORD)(uchar)(clamp(rnd2((b)/BIT_5_MULT),0,0x1f))&0x1f )<<0 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((g)/BIT_6_MULT),0,0x3f))&0x3f )<<5 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((r)/BIT_5_MULT),0,0x1f))&0x1f )<<11)	 \
//							)
////							 (( (WORD)(uchar)(clamp(rnd(a/255),0,1))&0x0001 ))		 
//							
//#define R4G4B4A4(r,g,b,a)	(\
//							 (( (WORD)(uchar)(clamp(rnd2((r)/17.0),0,0xf))&0xf )<<0 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((g)/17.0),0,0xf))&0xf )<<4 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((b)/17.0),0,0xf))&0xf )<<8 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((a)/17.0),0,0xf))&0xf )<<12)	 \
//							)
//
//#define B4G4R4A4(r,g,b,a)	(\
//							 (( (WORD)(uchar)(clamp(rnd2((b)/17.0),0,0xf))&0xf )<<0 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((g)/17.0),0,0xf))&0xf )<<4 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((r)/17.0),0,0xf))&0xf )<<8 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((a)/17.0),0,0xf))&0xf )<<12)	 \
//							)
//
//#define A4R4G4B4(r,g,b,a)	(\
//							 (( (WORD)(uchar)(clamp(rnd2((a)/17.0),0,0xf))&0xf )<<0 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((r)/17.0),0,0xf))&0xf )<<4 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((g)/17.0),0,0xf))&0xf )<<8 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((b)/17.0),0,0xf))&0xf )<<12)	 \
//							)
//							
//#define A4B4G4R4(r,g,b,a)	(\
//							 (( (WORD)(uchar)(clamp(rnd2((a)/17.0),0,0xf))&0xf )<<0 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((b)/17.0),0,0xf))&0xf )<<4 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((g)/17.0),0,0xf))&0xf )<<8 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((r)/17.0),0,0xf))&0xf )<<12)	 \
//							)
//							
//#define x4R4G4B4(r,g,b)	(\
//							 (( (WORD)(uchar)(clamp(rnd2((r)/17.0),0,0xf))&0xf )<<4 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((g)/17.0),0,0xf))&0xf )<<8 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((b)/17.0),0,0xf))&0xf )<<12)	 \
//						)
//							
//#define x4B4G4R4(r,g,b)	(\
//							 (( (WORD)(uchar)(clamp(rnd2((b)/17.0),0,0xf))&0xf )<<4 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((g)/17.0),0,0xf))&0xf )<<8 )	|\
//							 (( (WORD)(uchar)(clamp(rnd2((r)/17.0),0,0xf))&0xf )<<12)	 \
//						)
//							
//#define L8A8(r,g,b,a)	(\
//							 ( ((WORD)(uchar)(((r)*0.2125f)+((g)*0.7154f)+((b)*0.0721f)+0.4999))<<0)	|\
//							 ( ((WORD)(uchar)  (a)											  )<<8)	 \
//						)
//							
//#define L4A4(r,g,b,a)	(\
//							 ( (((WORD)(uchar)( ((r)*0.2125f+(g)*0.7154f+(b)*0.0721f)/16.0f+0.4999 ) )&0x0f)<<0)	|\
//							 ( (((WORD)(uchar)(  (a)/16.0f+0.4999) )&0x0f	)							   <<8)	 \
//						)
//							
//							
//							
//							
//#define RGB2(r,g,b)          ((DWORD)(((uchar)(r)	|	((WORD)((uchar)(g))<<8))	|	(((DWORD)(uchar)(b))<<16)))
//
//
//
//



