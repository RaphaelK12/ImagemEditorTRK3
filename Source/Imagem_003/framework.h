#pragma once

#include "targetver.h"
// pch.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#define WIN32_LEAN_AND_MEAN             // Excluir itens raramente utilizados dos cabeçalhos do Windows
//#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#define _USE_MATH_DEFINES 1
// Arquivos de Cabeçalho do Windows
// Windows Header Files:
#include <windows.h>
#include <WinBase.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <commctrl.h>
#include <string>
#include <vector>
#include <list>
#include <tuple>
#include <iostream>
#include <ostream>
#include <istream>
#include <fstream>
#include <sstream>
#include <limits.h>

#include <setjmp.h>

#include <stdlib.h>
using std::vector;
using std::string;



// TODO: reference additional headers your program requires here
#include "NumDef.h"

#ifdef IMAGEM_003_EXPORTS
#define IMAGEM_API __declspec(dllexport)
#else
#define IMAGEM_API __declspec(dllimport)
#endif
