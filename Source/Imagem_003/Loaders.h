#pragma once

#include "Util.h"
#include "img_basis.h"

img_basis* read_TGA(FILE* f);
//img_basis* read_TGA2(FILE* f);
img_basis* read_PCX(FILE* f);
img_basis* read_PNM(FILE* f);

img_basis* read_JPEG(FILE* f);
img_basis* read_PNG(FILE* f);

//img_basis* IMG_LoadPCX_RW(FILE* f);
