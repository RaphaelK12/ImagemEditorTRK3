#include "pch.h"
#include "Util.h"
#include "Loaders.h"
#include "Enums.h"
#include <stdio.h>



//#define _LIB_JEPG_DLL_IMPORT
#ifdef _LIB_JEPG_DLL_IMPORT
#ifdef _DEBUG
#pragma comment(lib, "Jpeg9d_d.lib")
#pragma comment(lib, "libpng16_d.lib")
#pragma comment(lib, "zlib_d.lib")
#else
#pragma comment(lib, "Jpeg9d.lib")
#pragma comment(lib, "libpng16.lib")
#pragma comment(lib, "zlib.lib")
#endif // DEBUG
#else // not _LIB_JEPG_DLL_IMPORT
#ifdef _DEBUG
#pragma comment(lib, "st/Jpeg9d_d.lib")
#pragma comment(lib, "st/libpng16_d.lib")
#pragma comment(lib, "st/zlib_d.lib")
#else
#pragma comment(lib, "st/Jpeg9d.lib")
#pragma comment(lib, "st/libpng16.lib")
#pragma comment(lib, "st/zlib.lib")
#endif // DEBUG
#endif // _LIB_JEPG_DLL_IMPORT
