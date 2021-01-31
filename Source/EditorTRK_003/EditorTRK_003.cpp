// Editor_003.cpp : Entry point for the application.
#include "pch.h"
#include "EditorTRK_003.h"
#include "..\Imagem_003\NumDef.h"
#include "..\Imagem_003\Structs.h"
#include "../Imagem_003/Imagem_003.h"
#pragma comment(lib, "Imagem_003.lib")

static HINSTANCE g_hInst = NULL;
static HBITMAP hbm1 = 0;
static HBITMAP hbmmask = 0;
static HBRUSH background = 0;
int screenx = 800;
int screeny = 600;

WNDCLASSEX WndClass;

char szTitle[500] = "Imagem View";
const char szWindowClass[] = "Imagem View";
const char strNotSuportedFile[] =
#ifdef _PT_BR
"Não foi possivel abir o arquivo! Arquivo não suportado!";
#else
"Unable to open the file! nUnsupported file!";
#endif // _PT_BR

char lpstrFilter[] =
#ifdef _PT_BR
/*1*/ "Todas Imagens Suportadas (.tga, .jpg, .jpeg, .png, .pcx, .pbm, .pnm, .pgm, .ppm)\0*.tga;*.jpg;*.jpeg;*.png;*.pcx;*.pbm;*.pnm;*.pgm;*.ppm\0"
#else
/*1*/ "All Suported Images (.tga, .jpg, .jpeg, .png, .pcx, .pbm, .pnm, .pgm, .ppm)\0*.tga;*.jpg;*.jpeg;*.png;*.pcx;*.pbm;*.pnm;*.pgm;*.ppm\0"
#endif // _PT_BR
/*2*/ "True Vision Targa (*.tga)\0*.tga\0"
/*3*/ "Independent JPEG Group's JPEG (*.jpg, *.jpeg)\0*.jpg;*.jpeg\0"
/*4*/ "Portable Network Graphics (PNG) (*.png)\0*.png\0"
/*5*/ "PiCture eXchange (PCX) (*.pcx)\0*.pcx\0"
/*6*/ "Net PBM (pbm) (*.pbm, *.pnm, *.pgm, *.ppm)\0*.pbm;*.pnm;*.pgm;*.ppm\0"
#ifdef _PT_BR
/*7*/ "Todos Arquivos (*.*)\0*.*\0\0\0\0\0\0";
#else
/*7*/ "All Files (*.*)\0*.*\0\0\0\0\0\0";
#endif // _PT_BR
//"image list (*.txt)\0*.txt\0"

void fitImage(int aling, int stretch, int screenx, int screeny, int imx, int imy, float zoom, OUT PRECT rc);

int OpenImg(int get, HWND hwnd, const char* a) {
	if (hbm1)
		DeleteObject(hbm1);
	hbm1 = NULL;
	if (hbmmask)
		DeleteObject(hbmmask);
	hbmmask = NULL;

	if (!hwnd) {
#ifdef _PT_BR
		printf("***********************\n*** Sem HWND ***\n\n\n");
#else
		printf("***********************\n*** No HWND ***\n\n\n");
#endif // _PT_BR
		return NULL;
	}
	if (!a)	{
#ifdef _PT_BR
		printf("***********************\n*** Sem nome do arquivo ***\n\n\n");
#else
		printf("***********************\n*** Not file name ***\n\n\n");
#endif // _PT_BR
		return 0;
	}
	imagem2* img1 = new imagem2();
	if (!img1) {
#ifdef _PT_BR
		printf("***********************\n*** Imagem não alocada ***\n\n\n");
#else
		printf("***********************\n*** Imagem not allocated ***\n\n\n");
#endif // _PT_BR
		return 0;
	}
	img1->loadFile(a);
	if (img1->m_faces.size() < 1 ||  !img1->m_faces[0] || img1->m_faces[0]->m_mipmaps.size()<1 || !img1->m_faces[0]->m_mipmaps[0]) {
#ifdef _PT_BR
		printf("***********************\n*** Arquivo Não Suportado ***\n\n\n");
#else
		printf("***********************\n*** Unsuported File ***\n\n\n");
#endif // _PT_BR
		delete img1;
		return 0;
	}

	BITMAPINFO* bi = (BITMAPINFO*)malloc(sizeof(BITMAPINFO) + 256 * 3);
	if (bi == NULL) {
		printf("***********************\n*** bi == NULL ***\n\n\n");
		delete img1;
		return 0;
	}

	//img1->reFormat(imDF::DF_BGRA_8u);
	//img1->reFormat(imDF::DF_RGBA_16u);
	img_basis* img = img1->m_faces[0]->m_mipmaps[0];
	img->calculateInfoFromDataFormat();
	printf("isOGLCompatible = %i\n", img->isOPenGLCompatible());
	printf("img.bpp = %i\nchanels = %i\ndataSize = %i\n"
		   "xres = %i\nyres = %i\n\n\n",
		   img->bpp, img->chanels, img->dataSize,
		   img->xres, img->yres);

	img->convertToDataFormat(imDF::DF_BGRA_8u);

	img->unflip();
	bi->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
	bi->bmiHeader.biWidth = img->xres;
	bi->bmiHeader.biHeight = img->yres;
	bi->bmiHeader.biSizeImage = img->dataSize;
	bi->bmiHeader.biPlanes = 1;
	bi->bmiHeader.biBitCount = img->bpp;
	bi->bmiHeader.biCompression = BI_RGB;
	bi->bmiHeader.biClrUsed = 0;
	void* pData = NULL;
	if (!img->pixels) {
		free(bi);
		delete img1;
		//InvalidateRect(hwnd, NULL, true);
#ifdef _PT_BR
		MessageBox(0, "Erro: Sem Pixels;", "img->pixels == NULL", 0);
#else
		MessageBox(0, "Error: No Pixels;", "img->pixels == NULL", 0);
#endif // _PT_BR
		return NULL;
	}
	HDC hdc = GetDC(hwnd);
	//hbm1 = CreateDIBSection(NULL, bi, 0, &pData, NULL, 0);
	hbm1 = CreateCompatibleBitmap(hdc, img->xres, img->yres);
	//if(img->hasAlpha)
	hbmmask = CreateCompatibleBitmap(hdc, img->xres, img->yres);
	if (hbm1) {
		//SetBitmapBits(hbm1, img->dataSize, img->pixels);
		SetDIBits(hdc, hbm1, 0, img->yres, img->pixels, bi, DIB_RGB_COLORS);
	}
	if (hbmmask) {
		float alpha = 0.f;
#pragma warning(disable:4244)
		bgra_8u* p = (bgra_8u*)img->pixels;
		for (int x = 0; x < img->xres * img->yres; x++) {
			alpha = p->a / 254.5f;
			p->b *= alpha; //  img->pixels[x * 4 + 3];
			p->g *= alpha; //  img->pixels[x * 4 + 3];
			p->r *= alpha; //  img->pixels[x * 4 + 3];
			p++;
		}
#pragma warning(default:4244)
		//SetBitmapBits(hbm1, img->dataSize, img->pixels);
		SetDIBits(hdc, hbmmask, 0, img->yres, img->pixels, bi, DIB_RGB_COLORS);
	}
	if (!hbm1) {
		printf("bytes vazios, hbm1 == NULL, img %i %i %i %p", img->xres, img->yres, img->dataSize, img->pixels);
		//MessageBox(0, Text, "", 0);
		free(bi);
		delete img1;
		return 0;
	}
	printf("img.bpp = %i\nchanels = %i\ndataSize = %i\n"
		   "xres = %i\nyres = %i\n\n\n",
		   img->bpp, img->chanels, img->dataSize,
		   img->xres, img->yres);
	free(bi);
	delete img1;
	printf("LOADED\n\n");
	return 1;
}

BOOL GetFileName(HWND hwnd, LPSTR pszFileName, BOOL bSave) {
	OPENFILENAME ofn;
	ZeroMemory(&ofn, sizeof(ofn));
	pszFileName[0] = 0;
	ofn.lStructSize = sizeof(ofn);
	ofn.hwndOwner = hwnd;
	ofn.lpstrFilter = lpstrFilter;
	ofn.lpstrFile = pszFileName;
	ofn.nMaxFile = MAX_PATH;
	ofn.lpstrDefExt = 0;
	ofn.nFilterIndex = 1;
	if (bSave) {
		ofn.Flags = OFN_EXPLORER | OFN_PATHMUSTEXIST | OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT;
		if (!GetSaveFileName(&ofn))
			return FALSE;
	}
	else {
		ofn.Flags = OFN_EXPLORER | OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;
		if (!GetOpenFileName(&ofn))
			return FALSE;
	}
	return ofn.nFilterIndex;
}

BOOL CALLBACK AboutDlgProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch (Message) {
		case WM_INITDIALOG:
			return TRUE;
		case WM_COMMAND:
			switch (LOWORD(wParam)) {
				case IDOK:
					EndDialog(hwnd, IDOK);
					break;
				case IDCANCEL:
					EndDialog(hwnd, IDCANCEL);
					break;
			}
			break;
		default:
			return FALSE;
	}
	return TRUE;
}

BOOL CALLBACK ColorBG_DlgProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch (Message) {
		case WM_INITDIALOG:
			return TRUE;
		case WM_COMMAND:
			switch (LOWORD(wParam)) {
				case IDC_EDIT_BG_OK:
					EndDialog(hwnd, IDC_EDIT_BG_OK);
					break;
				case IDC_EDIT_BG_CANCEL:
					EndDialog(hwnd, IDC_EDIT_BG_CANCEL);
					break;
				case IDC_EDIT_BG_R:
					EndDialog(hwnd, IDC_EDIT_BG_R);
					break;
				case IDC_EDIT_BG_G:
					EndDialog(hwnd, IDC_EDIT_BG_R);
					break;
				case IDC_EDIT_BG_B:
					EndDialog(hwnd, IDC_EDIT_BG_R);
					break;
			}
			break;
		default:
			return FALSE;
	}
	return TRUE;
}

void fitImage(int aling, int stretch, int screenx, int screeny, int imx, int imy, float zoom, OUT PRECT rc) {
	float w1 = 1, w2 = 1;
	float x = 1, y = 1, scx = 1, scy = 1;
	float x_start = 2, y_start = 2, x_end = 4, y_end = 4;
	float bmx = imx * zoom;
	float bmy = imy * zoom;

	if (stretch == ID_STRETCH_STRETCH) { // only aspect
		x_start = 2;
		y_start = 2;
		x_end = (float)screenx - 4;
		y_end = (float)screeny - 4;
	}
	else if (aling == ID_ALING_CENTER) {
		if (stretch == ID_STRETCH_FIXED) {
			x_start = floorf((screenx / 2.f - bmx / 2.f) + 0.5f);
			y_start = floorf((screeny / 2.f - bmy / 2.f) + 0.5f);
			x_end = bmx;
			y_end = bmy;
		}
		else if (stretch == ID_STRETCH_ADAPTIVE) { // if screnn < image then rescale image to fit in window
			scx = (float)screenx - 4;
			scy = (float)screeny - 4;
			x = (float)bmx;
			y = (float)bmy;

			if (scx < x) w1 = scx / x;
			if (scy < y) w2 = scy / y;
			x = (bmx)*min(w1, w2);
			y = (bmy)*min(w1, w2);
			x_end = floorf(x + 0.5f);
			y_end = floorf(y + 0.5f);

			x_start = floorf((screenx / 2.f - x / 2.f) + 0.5f);
			y_start = floorf((screeny / 2.f - y / 2.f) + 0.5f);
			x_start = max(x_start, 2);
			y_start = max(y_start, 2);
		}
		else if (stretch == ID_STRETCH_ADAPTIVE2) { // rescale to window size, maintaining aspect
			scx = (float)screenx - 4;
			scy = (float)screeny - 4;
			x = (float)bmx;
			y = (float)bmy;

			/*if (scx < x)*/ w1 = scx / x;
			/*if (scy < y)*/ w2 = scy / y;
			x = (bmx)*min(w1, w2);
			y = (bmy)*min(w1, w2);
			x_end = floorf(x + 0.5f);
			y_end = floorf(y + 0.5f);
			x_start = floorf((screenx / 2.f - x / 2.f) + 0.5f);
			y_start = floorf((screeny / 2.f - y / 2.f) + 0.5f);
			x_start = max(x_start, 2);
			y_start = max(y_start, 2);
		}
	}
	else if (aling == ID_ALING_TOPLEFT) {
		x_start = 2;
		y_start = 2;
		if (stretch == ID_STRETCH_FIXED) {
			x_end = bmx;
			y_end = bmy;
		}
		else if (stretch == ID_STRETCH_ADAPTIVE) {
			scx = (float)screenx - 4;
			scy = (float)screeny - 4;
			x = (float)bmx;
			y = (float)bmy;

			if (scx < x) w1 = scx / x;
			if (scy < y) w2 = scy / y;
			x = (bmx)*min(w1, w2);
			y = (bmy)*min(w1, w2);
			x_end = floorf(x + 0.5f);
			y_end = floorf(y + 0.5f);
		}
		else if (stretch == ID_STRETCH_ADAPTIVE2) { // rescale to window size, maintaining aspect
			scx = (float)screenx - 4;
			scy = (float)screeny - 4;
			x = (float)bmx;
			y = (float)bmy;

			/*if (scx < x)*/ w1 = scx / x;
			/*if (scy < y)*/ w2 = scy / y;
			x = (bmx)*min(w1, w2);
			y = (bmy)*min(w1, w2);
			x_end = floorf(x + 0.5f);
			y_end = floorf(y + 0.5f);
		}
	}
	else if (aling == ID_ALING_TOPRIGHT) {
		x_start = (screenx - bmx) - 2;
		y_start = 2;
		if (stretch == ID_STRETCH_FIXED) {
			x_end = bmx;
			y_end = bmy;
		}
		else if (stretch == ID_STRETCH_ADAPTIVE) {
			scx = (float)screenx - 4;
			scy = (float)screeny - 4;
			x = (float)bmx;
			y = (float)bmy;

			if (scx < x) w1 = scx / x;
			if (scy < y) w2 = scy / y;
			x = (bmx)*min(w1, w2);
			y = (bmy)*min(w1, w2);
			y_end = floorf(y + 0.5f);
			x_start = (screenx - x) - 2;
			x_end = x;
		}
		else if (stretch == ID_STRETCH_ADAPTIVE2) { // rescale to window size, maintaining aspect
			scx = (float)screenx - 4;
			scy = (float)screeny - 4;
			x = (float)bmx;
			y = (float)bmy;

			/*if (scx < x)*/ w1 = scx / x;
			/*if (scy < y)*/ w2 = scy / y;
			x = (bmx)*min(w1, w2);
			y = (bmy)*min(w1, w2);
			y_end = floorf(y + 0.5f);

			x_start = (screenx - x) - 2;
			x_end = x;
		}
	}
	else if (aling == ID_ALING_LOWLEFT) {
		x_start = 2;
		y_start = (screeny - bmy) - 2;
		if (stretch == ID_STRETCH_FIXED) {
			x_end = bmx;
			y_end = bmy;
		}
		else if (stretch == ID_STRETCH_ADAPTIVE) {
			scx = (float)screenx - 4;
			scy = (float)screeny - 4;
			x = (float)bmx;
			y = (float)bmy;

			if (scx < x) w1 = scx / x;
			if (scy < y) w2 = scy / y;
			x = (bmx)*min(w1, w2);
			y = (bmy)*min(w1, w2);
			x_end = floorf(x + 0.5f);
			y_start = (screeny - y) - 2;
			y_end = y;
		}
		else if (stretch == ID_STRETCH_ADAPTIVE2) { // rescale to window size, maintaining aspect
			scx = (float)screenx - 4;
			scy = (float)screeny - 4;
			x = (float)bmx;
			y = (float)bmy;

			/*if (scx < x)*/ w1 = scx / x;
			/*if (scy < y)*/ w2 = scy / y;
			x = (bmx)*min(w1, w2);
			y = (bmy)*min(w1, w2);
			x_end = floorf(x + 0.5f);
			y_start = (screeny - y) - 2;
			y_end = y;
		}
	}
	else if (aling == ID_ALING_LOWRIGHT) {
		x_start = (screenx - bmx) - 2;
		y_start = (screeny - bmy) - 2;
		if (stretch == ID_STRETCH_FIXED) {
			x_end = bmx;
			y_end = bmy;
		}
		else if (stretch == ID_STRETCH_ADAPTIVE) {
			scx = (float)screenx - 4;
			scy = (float)screeny - 4;
			x = (float)bmx;
			y = (float)bmy;

			if (scx < x) w1 = scx / x;
			if (scy < y) w2 = scy / y;
			x = (bmx)*min(w1, w2);
			y = (bmy)*min(w1, w2);

			//x_end = floorf(x + 0.5f);
			//y_end = floorf(y + 0.5f);
			x_start = (screenx - x) - 2;
			y_start = (screeny - y) - 2;
			x_end = x;
			y_end = y;
		}
		else if (stretch == ID_STRETCH_ADAPTIVE2) { // rescale to window size, maintaining aspect
			scx = (float)screenx - 4;
			scy = (float)screeny - 4;
			x = (float)bmx;
			y = (float)bmy;

			/*if (scx < x)*/ w1 = scx / x;
			/*if (scy < y)*/ w2 = scy / y;
			x = (bmx)*min(w1, w2);
			y = (bmy)*min(w1, w2);

			//x_end = floorf(x + 0.5f);
			//y_end = floorf(y + 0.5f);
			x_start = (screenx - x) - 2;
			y_start = (screeny - y) - 2;
			x_end = x;
			y_end = y;
		}
	}
	else {
		x_start = 2;
		y_start = 2;
		x_end = float(screenx - 4);
		y_end = float(screeny - 4);
	}

	rc->left = long(x_start);
	rc->right = long(x_end);
	rc->top = long(y_start);
	rc->bottom = long(y_end);
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	ULONG ulScrollLines;
	static int iDeltaPerLine, iAccumDelta;
	static int StretchBltMode = HALFTONE;
	static int aling = ID_ALING_CENTER;
	static int stretch = ID_STRETCH_ADAPTIVE;
	static int MaskMode = SRCCOPY;
	static int BmpMode = SRCCOPY;
	static int ShowTransparent = ID_TRANSPARENCY_TRANSP;
	static int ShowBorder = 1;
	static float zoom = 1.f;
	static char* szFileNameToOpen = 0;
	static uint* uiPBits = 0;
	static HMENU menu = 0;
	static HBRUSH background2 = 0;
	static HBITMAP hbmCheker = 0;
	static CHOOSECOLOR cc;                 // common dialog box structure 
	static COLORREF acrCustClr[16] = { 0xffffffff }; // array of custom colors 
	//static DWORD rgbCurrent = 0;        // initial color selection

	switch (Message) {
		case WM_CREATE:
		{
#define RES 16 
			menu = GetMenu(hwnd);
			szFileNameToOpen = new char[MAX_PATH * 2];
			uiPBits = new uint[RES * RES];
			memset(szFileNameToOpen, 0, MAX_PATH * 2);
			memset(acrCustClr, 255, sizeof(acrCustClr));
			ZeroMemory(&cc, sizeof(cc));
			CheckMenuRadioItem(menu, ID_SBM1, ID_SBM4, ID_SBM1, 8);
			CheckMenuRadioItem(menu, ID_ALING_TOPLEFT, ID_ALING_LOWRIGHT, aling, 8);
			CheckMenuRadioItem(menu, ID_STRETCH_FIXED, ID_STRETCH_STRETCH, stretch, 8);
			CheckMenuRadioItem(menu, ID_TRANSPARENCY_OPAQUE, ID_TRANSPARENCY_TRANSP, ID_TRANSPARENCY_TRANSP, 8);
			CheckMenuRadioItem(menu, ID_BG_COLOR_1, ID_BG_COLOR_17, ID_BG_COLOR_1, 8);
			for (int y = 0; y < RES; y++) {
				for (int x = 0; x < RES; x++) {
					if ((x < RES / 2 && y < RES / 2) || (x >= RES / 2 && y >= RES / 2))
						uiPBits[y * RES + x] = RGB(245, 245, 245);
					else
						uiPBits[y * RES + x] = RGB(188, 188, 188);
				}
			}
			hbmCheker = CreateBitmap(RES, RES, 1, 32, uiPBits);
			background2 = CreatePatternBrush(hbmCheker);
			cc.lStructSize = sizeof(cc);
			cc.hwndOwner = hwnd;
			cc.lpCustColors = (LPDWORD)acrCustClr;
			cc.rgbResult = 0x808080/*rgbCurrent*/;
			cc.Flags = CC_FULLOPEN | CC_RGBINIT | CC_ANYCOLOR;
#undef RES

			SystemParametersInfo(SPI_GETWHEELSCROLLLINES, 0, &ulScrollLines, 0);
			// ulScrollLines usually equals 3 or 0 (for no scrolling)
			// WHEEL_DELTA equals 120, so iDeltaPerLine will be 40
			if (ulScrollLines)
				iDeltaPerLine = WHEEL_DELTA / ulScrollLines;
			else
				iDeltaPerLine = 0;
			return 0;

			break;
		}
		case WM_PAINT:
		{
			static HBRUSH hb = 0;
			static HDC hdcMem = 0;
			static HDC hdc = 0;
			static HBITMAP hbmOld = 0;
			static PAINTSTRUCT ps;
			static BITMAP bm;
			static RECT rect;
			static RECT rc;
			static BLENDFUNCTION bf = { 0 };
			//static float w1=1, w2=1;
			//static float x=1, y=1, scx=1, scy=1;
			//static float x_start=2, y_start=2, x_end=3, y_end=3;
			//w1 = 1;
			//w2 = 2;
			if (hbm1) {
				GetObject(hbm1, sizeof(bm), &bm);

				//if (stretch == ID_STRETCH_STRETCH) { // only aspect
				//	x_start = 2;
				//	y_start = 2;
				//	x_end = (float)screenx - 4;
				//	y_end = (float)screeny - 4;
				//}
				//else if (aling == ID_ALING_CENTER) {
				//	if (stretch == ID_STRETCH_FIXED) {
				//		x_start = floorf((screenx / 2.f - bm.bmWidth / 2.f) + 0.5f);
				//		y_start = floorf((screeny / 2.f - bm.bmHeight / 2.f) + 0.5f);
				//		x_end = bm.bmWidth;
				//		y_end = bm.bmHeight;
				//	}
				//	else if (stretch == ID_STRETCH_ADAPTIVE) { // if screnn < image then rescale image to fit in window
				//		scx = (float)screenx - 4;
				//		scy = (float)screeny - 4;
				//		x = (float)bm.bmWidth;
				//		y = (float)bm.bmHeight;
				//		if (scx < x) w1 = scx / x;
				//		if (scy < y) w2 = scy / y;
				//		x = (bm.bmWidth) * min(w1, w2);
				//		y = (bm.bmHeight) * min(w1, w2);
				//		x_end = floorf(x + 0.5f);
				//		y_end = floorf(y + 0.5f);
				//		x_start = floorf((screenx / 2.f - x / 2.f) + 0.5f);
				//		y_start = floorf((screeny / 2.f - y / 2.f) + 0.5f);
				//		x_start = max(x_start, 2);
				//		y_start = max(y_start, 2);
				//	}
				//	else if (stretch == ID_STRETCH_ADAPTIVE2) { // rescale to window size, maintaining aspect
				//		scx = (float)screenx - 4;
				//		scy = (float)screeny - 4;
				//		x = (float)bm.bmWidth;
				//		y = (float)bm.bmHeight;
				//		/*if (scx < x)*/ w1 = scx / x;
				//		/*if (scy < y)*/ w2 = scy / y;
				//		x = (bm.bmWidth) * min(w1, w2);
				//		y = (bm.bmHeight) * min(w1, w2);
				//		x_end = floorf(x + 0.5);
				//		y_end = floorf(y + 0.5);
				//		x_start = floorf((screenx / 2.f - x / 2.f) + 0.5f);
				//		y_start = floorf((screeny / 2.f - y / 2.f) + 0.5f);
				//		x_start = max(x_start, 2);
				//		y_start = max(y_start, 2);
				//	}
				//}
				//else if (aling == ID_ALING_TOPLEFT) {
				//	x_start = 2;
				//	y_start = 2;
				//	if (stretch == ID_STRETCH_FIXED) {
				//		x_end = bm.bmWidth;
				//		y_end = bm.bmHeight;
				//	}
				//	else if (stretch == ID_STRETCH_ADAPTIVE) {
				//		scx = (float)screenx - 4;
				//		scy = (float)screeny - 4;
				//		x = (float)bm.bmWidth;
				//		y = (float)bm.bmHeight;
				//		if (scx < x) w1 = scx / x;
				//		if (scy < y) w2 = scy / y;
				//		x = (bm.bmWidth) * min(w1, w2);
				//		y = (bm.bmHeight) * min(w1, w2);
				//		x_end = floorf(x + 0.5f);
				//		y_end = floorf(y + 0.5f);
				//	}
				//	else if (stretch == ID_STRETCH_ADAPTIVE2) { // rescale to window size, maintaining aspect
				//		scx = (float)screenx - 4;
				//		scy = (float)screeny - 4;
				//		x = (float)bm.bmWidth;
				//		y = (float)bm.bmHeight;
				//		/*if (scx < x)*/ w1 = scx / x;
				//		/*if (scy < y)*/ w2 = scy / y;
				//		x = (bm.bmWidth) * min(w1, w2);
				//		y = (bm.bmHeight) * min(w1, w2);
				//		x_end = floorf(x + 0.5);
				//		y_end = floorf(y + 0.5);
				//	}
				//}
				//else if (aling == ID_ALING_TOPRIGHT) {
				//	x_start = (screenx - bm.bmWidth) - 2;
				//	y_start = 2;
				//	if (stretch == ID_STRETCH_FIXED) {
				//		x_end = bm.bmWidth;
				//		y_end = bm.bmHeight;
				//	}
				//	else if (stretch == ID_STRETCH_ADAPTIVE) {
				//		scx = (float)screenx - 4;
				//		scy = (float)screeny - 4;
				//		x = (float)bm.bmWidth;
				//		y = (float)bm.bmHeight;
				//		if (scx < x) w1 = scx / x;
				//		if (scy < y) w2 = scy / y;
				//		x = (bm.bmWidth) * min(w1, w2);
				//		y = (bm.bmHeight) * min(w1, w2);
				//		y_end = floorf(y + 0.5f);
				//		x_start = (screenx - x) - 2;
				//		x_end = x;
				//	}
				//	else if (stretch == ID_STRETCH_ADAPTIVE2) { // rescale to window size, maintaining aspect
				//		scx = (float)screenx - 4;
				//		scy = (float)screeny - 4;
				//		x = (float)bm.bmWidth;
				//		y = (float)bm.bmHeight;
				//		/*if (scx < x)*/ w1 = scx / x;
				//		/*if (scy < y)*/ w2 = scy / y;
				//		x = (bm.bmWidth) * min(w1, w2);
				//		y = (bm.bmHeight) * min(w1, w2);
				//		y_end = floorf(y + 0.5);
				//		x_start = (screenx - x) - 2;
				//		x_end = x;
				//	}
				//}
				//else if (aling == ID_ALING_LOWLEFT) {
				//	x_start = 2;
				//	y_start = (screeny - bm.bmHeight) - 2;
				//	if (stretch == ID_STRETCH_FIXED) {
				//		x_end = bm.bmWidth;
				//		y_end = bm.bmHeight;
				//	}
				//	else if (stretch == ID_STRETCH_ADAPTIVE) {
				//		scx = (float)screenx - 4;
				//		scy = (float)screeny - 4;
				//		x = (float)bm.bmWidth;
				//		y = (float)bm.bmHeight;
				//		if (scx < x) w1 = scx / x;
				//		if (scy < y) w2 = scy / y;
				//		x = (bm.bmWidth) * min(w1, w2);
				//		y = (bm.bmHeight) * min(w1, w2);
				//		x_end = floorf(x + 0.5f);
				//		y_start = (screeny - y) - 2;
				//		y_end = y;
				//	}
				//	else if (stretch == ID_STRETCH_ADAPTIVE2) { // rescale to window size, maintaining aspect
				//		scx = (float)screenx - 4;
				//		scy = (float)screeny - 4;
				//		x = (float)bm.bmWidth;
				//		y = (float)bm.bmHeight;
				//		/*if (scx < x)*/ w1 = scx / x;
				//		/*if (scy < y)*/ w2 = scy / y;
				//		x = (bm.bmWidth) * min(w1, w2);
				//		y = (bm.bmHeight) * min(w1, w2);
				//		x_end = floorf(x + 0.5);
				//		y_start = (screeny - y) - 2;
				//		y_end = y;
				//	}
				//}
				//else if (aling == ID_ALING_LOWRIGHT) {
				//	x_start = (screenx - bm.bmWidth) - 2;
				//	y_start = (screeny - bm.bmHeight) - 2;
				//	if (stretch == ID_STRETCH_FIXED) {
				//		x_end = bm.bmWidth;
				//		y_end = bm.bmHeight;
				//	}
				//	else if (stretch == ID_STRETCH_ADAPTIVE) {
				//		scx = (float)screenx - 4;
				//		scy = (float)screeny - 4;
				//		x = (float)bm.bmWidth;
				//		y = (float)bm.bmHeight;
				//		if (scx < x) w1 = scx / x;
				//		if (scy < y) w2 = scy / y;
				//		x = (bm.bmWidth) * min(w1, w2);
				//		y = (bm.bmHeight) * min(w1, w2);
				//		//x_end = floorf(x + 0.5f);
				//		//y_end = floorf(y + 0.5f);
				//		x_start = (screenx - x) - 2;
				//		y_start = (screeny - y) - 2;
				//		x_end = x;
				//		y_end = y;
				//	}
				//	else if (stretch == ID_STRETCH_ADAPTIVE2) { // rescale to window size, maintaining aspect
				//		scx = (float)screenx - 4;
				//		scy = (float)screeny - 4;
				//		x = (float)bm.bmWidth;
				//		y = (float)bm.bmHeight;
				//		/*if (scx < x)*/ w1 = scx / x;
				//		/*if (scy < y)*/ w2 = scy / y;
				//		x = (bm.bmWidth) * min(w1, w2);
				//		y = (bm.bmHeight) * min(w1, w2);
				//		//x_end = floorf(x + 0.5f);
				//		//y_end = floorf(y + 0.5f);
				//		x_start = (screenx - x) - 2;
				//		y_start = (screeny - y) - 2;
				//		x_end = x;
				//		y_end = y;
				//	}
				//}
				//else {
				//	x_start = 2;
				//	y_start = 2;
				//	x_end = screenx - 4;
				//	y_end = screeny - 4;
				//}

				fitImage(aling, stretch, screenx, screeny, bm.bmWidth, bm.bmHeight, zoom, &rc);

				hdc = BeginPaint(hwnd, &ps);
				SetStretchBltMode(hdc, StretchBltMode);
				if (StretchBltMode == HALFTONE)
					SetBrushOrgEx(hdc, 2, 2, 0);
				//SetBrushOrgEx(hdc, x_start, y_start, 0);
				hdcMem = CreateCompatibleDC(hdc);
				if (!hdcMem) {
					EndPaint(hwnd, &ps);
					break;
				}
				GetObject(hbm1, sizeof(bm), &bm);
				if (ShowBorder) {
					hb = (HBRUSH)SelectObject(hdc, background2);
					Rectangle(hdc, rc.left - 1, rc.top - 1, rc.left + rc.right + 1, rc.top + rc.bottom + 1);
					SelectObject(hdc, hb);
				}
				else {
					rect.left = rc.left;
					rect.top = rc.top;
					rect.right = rc.left + rc.right;
					rect.bottom = rc.top + rc.bottom;
					FillRect(hdc, &rect, background2);
				}
				if (hbmmask) {
					if (ShowTransparent == ID_TRANSPARENCY_PREMUL) {
						hbmOld = (HBITMAP)SelectObject(hdcMem, hbmmask);
						//StretchBlt(hdc, x_start, y_start, x_end, y_end, hdcMem, 0, 0, bm.bmWidth, bm.bmHeight, MaskMode);				
						StretchBlt(hdc, rc.left, rc.top, rc.right, rc.bottom, hdcMem, 0, 0, bm.bmWidth, bm.bmHeight, MaskMode);
					}
					else if (ShowTransparent == ID_TRANSPARENCY_TRANSP) {			//// draw trasparent
						bf.AlphaFormat = AC_SRC_ALPHA;
						bf.BlendFlags = 0;
						bf.BlendOp = AC_SRC_OVER;
						bf.SourceConstantAlpha = 255;

						hbmOld = (HBITMAP)SelectObject(hdcMem, hbmmask);
						//AlphaBlend(hdc, x_start, y_start, x_end, y_end, hdcMem, 0, 0, bm.bmWidth, bm.bmHeight, bf);					
						AlphaBlend(hdc, rc.left, rc.top, rc.right, rc.bottom, hdcMem, 0, 0, bm.bmWidth, bm.bmHeight, bf);
					}
					else {
						hbmOld = (HBITMAP)SelectObject(hdcMem, hbm1);
						//StretchBlt(hdc, x_start, y_start, x_end, y_end, hdcMem, 0, 0, bm.bmWidth, bm.bmHeight, SRCCOPY);
						StretchBlt(hdc, rc.left, rc.top, rc.right, rc.bottom, hdcMem, 0, 0, bm.bmWidth, bm.bmHeight, SRCCOPY);
					}
				}
				else {
					hbmOld = (HBITMAP)SelectObject(hdcMem, hbm1);
					//StretchBlt(hdc, x_start, y_start, x_end, y_end, hdcMem, 0, 0, bm.bmWidth, bm.bmHeight, SRCCOPY);
					StretchBlt(hdc, rc.left, rc.top, rc.right, rc.bottom, hdcMem, 0, 0, bm.bmWidth, bm.bmHeight, SRCCOPY);
				}
				//EMRALPHABLEND ab;
				//AlphaBlend(hdc, x_start, y_start, x_end, y_end, hdcMem, 0, 0, bm.bmWidth, bm.bmHeight, SRCCOPY);
				//TransparentBlt(hdc, x_start, y_start, x_end, y_end, hdcMem, 0, 0, bm.bmWidth, bm.bmHeight, 0);
				//StretchBlt(hdc, x_start, y_start, x_end, y_end, hdcMem, 0, 0, bm.bmWidth, bm.bmHeight, SRCCOPY);
				SelectObject(hdcMem, hbmOld);
				EndPaint(hwnd, &ps);
				DeleteDC(hdcMem);
				DeleteObject(hbmOld);
			}
			else {
				hdc = BeginPaint(hwnd, &ps);
				EndPaint(hwnd, &ps);
			}
			break;
		}
		case WM_MOUSEWHEEL:
		{
			//if (iDeltaPerLine == 0)
			//	break;
			//iAccumDelta += (short)HIWORD(wParam); // 120 or -120
			//while (iAccumDelta >= iDeltaPerLine) {
			//	//SendMessage(hwnd, WM_VSCROLL, SB_LINEUP, 0);
			//	zoom *= 2.f;
			//	iAccumDelta -= iDeltaPerLine;
			//	zoom = min(max(zoom, 1.f / 4096.f), 1.f * 4096.f);
			//}
			//while (iAccumDelta <= -iDeltaPerLine) {
			//	zoom /= 2.f;
			//	//SendMessage(hwnd, WM_VSCROLL, SB_LINEDOWN, 0);
			//	iAccumDelta += iDeltaPerLine;
			//	zoom = min(max(zoom, 1.f / 4096.f), 1.f * 4096.f);
			//}
			if ((short)HIWORD(wParam) < 0) {
				zoom /= 2.f;
			}
			else if ((short)HIWORD(wParam) > 0) {
				zoom *= 2.f;
			}
			zoom = min(max(zoom, 1.f / 2048.f), 1.f * 64.f);
			InvalidateRect(hwnd, NULL, true);
			return 0;
		}
		case WM_SIZE:
		{
			screenx = LOWORD(lParam);
			screeny = HIWORD(lParam);
			InvalidateRect(hwnd, NULL, true);
			break;
		}
		case WM_GETMINMAXINFO:
		{
			LPMINMAXINFO lpMMI = (LPMINMAXINFO)lParam;
			lpMMI->ptMinTrackSize.x = 150;
			lpMMI->ptMinTrackSize.y = 150;
			return 0;
		}
		case WM_CLOSE:
		{
			DestroyWindow(hwnd);
			break;
		}
		case WM_DESTROY:
		{
			delete[] szFileNameToOpen;
			delete[] uiPBits;
			//delete[] mainWindowName2;
			DeleteObject(hbm1);
			DeleteObject(hbmmask);
			DeleteObject(hbmCheker);
			DeleteObject(background);
			DeleteObject(background2);
			PostQuitMessage(0);
			break;
		}
		case WM_DROPFILES:
		{
			static uint ret = 0;
			static uint i = 0;
			static HDROP hDrop = 0;
			static char lpszFile[481] = { 0,0,0 };
			hDrop = (HDROP)wParam;
			lpszFile[480] = 0;
			SetCursor(LoadCursor(NULL, IDC_WAIT));
			ret = DragQueryFile(hDrop, 0xFFFFFFFF, lpszFile, 480);
			for (i = 0; i < ret; i++) {
				DragQueryFile(hDrop, i, lpszFile, 480);//MessageBox(hwnd, lpszFile, "Droped file", MB_OK);			
				if (OpenImg(0, hwnd, lpszFile)) {
					sprintf(szTitle, "%s - %s", szWindowClass, lpszFile);
					szTitle[sizeof(szTitle) - 1] = 0;
					SetWindowText(hwnd, szTitle);
				}
			}
			DragFinish(hDrop);
			SetCursor(LoadCursor(NULL, IDC_ARROW));
			InvalidateRect(hwnd, NULL, true);
			return 0;
			break;
		}
		case WM_KEYDOWN:
		{
			printf("WM_KEYDOWN\n");

			switch (wParam)
			{
				/*
				case  VK_LBUTTON                           :	printf("VK_LBUTTON                      ");	break;
				case  VK_RBUTTON                           :	printf("VK_RBUTTON                      ");	break;
				case  VK_CANCEL                            :	printf("VK_CANCEL                       ");	break;
				case  VK_MBUTTON                           :	printf("VK_MBUTTON                      ");	break;
				case  VK_XBUTTON1                          :	printf("VK_XBUTTON1                     ");	break;
				case  VK_XBUTTON2                          :	printf("VK_XBUTTON2                     ");	break;
				case  VK_BACK                              :	printf("VK_BACK                         ");	break;
				case  VK_TAB                               :	printf("VK_TAB                          ");	break;
				case  VK_CLEAR                             :	printf("VK_CLEAR                        ");	break;
				case  VK_RETURN                            :	printf("VK_RETURN                       ");	break;
				case  VK_SHIFT                             :	printf("VK_SHIFT                        ");	break;
				case  VK_CONTROL                           :	printf("VK_CONTROL                      ");	break;
				case  VK_MENU                              :	printf("VK_MENU                         ");	break;
				case  VK_PAUSE                             :	printf("VK_PAUSE                        ");	break;
				case  VK_CAPITAL                           :	printf("VK_CAPITAL                      ");	break;
				case  VK_KANA                              :	printf("VK_KANA,VK_HANGEUL,VK_HANGUL    ");	break;
				case  VK_JUNJA                             :	printf("VK_JUNJA                        ");	break;
				case  VK_FINAL                             :	printf("VK_FINAL                        ");	break;
				case  VK_HANJA                             :	printf("VK_HANJA,VK_KANJI               ");	break;
				case  VK_ESCAPE                            :	printf("VK_ESCAPE                       ");	break;
				case  VK_CONVERT                           :	printf("VK_CONVERT                      ");	break;
				case  VK_NONCONVERT                        :	printf("VK_NONCONVERT                   ");	break;
				case  VK_ACCEPT                            :	printf("VK_ACCEPT                       ");	break;
				case  VK_MODECHANGE                        :	printf("VK_MODECHANGE                   ");	break;
				case  VK_SPACE                             :	printf("VK_SPACE                        ");	break;
				*/
				case  VK_PRIOR                             :
				{
					zoom *= 2.f;
					zoom = min(max(zoom, 1.f / 2048.f), 1.f * 64.f);
					InvalidateRect(hwnd, NULL, true);
					printf("VK_PRIOR                        ");	
					return 0;
					break;
				}
				case  VK_NEXT                              :
				{
					zoom /= 2.f;
					zoom = min(max(zoom, 1.f / 2048.f), 1.f * 64.f);
					InvalidateRect(hwnd, NULL, true);
					printf("VK_NEXT                         ");	
					return 0;
					break;
				}
				case  VK_END                               :	
				{
					InvalidateRect(hwnd, NULL, true);
					printf("VK_END                          ");
					zoom = 1.f / 16.f;
					return 0;
					break;
				}
				case  VK_HOME                              :
				{
					InvalidateRect(hwnd, NULL, true);
					printf("VK_HOME                         ");
					zoom = 1.f;
					return 0;
					break;
				}

				/*
				case  VK_LEFT                              :	printf("VK_LEFT                         ");	break;
				case  VK_UP                                :	printf("VK_UP                           ");	break;
				case  VK_RIGHT                             :	printf("VK_RIGHT                        ");	break;
				case  VK_DOWN                              :	printf("VK_DOWN                         ");	break;
				case  VK_SELECT                            :	printf("VK_SELECT                       ");	break;
				case  VK_PRINT                             :	printf("VK_PRINT                        ");	break;
				case  VK_EXECUTE                           :	printf("VK_EXECUTE                      ");	break;
				case  VK_SNAPSHOT                          :	printf("VK_SNAPSHOT                     ");	break;
				case  VK_INSERT                            :	printf("VK_INSERT                       ");	break;
				case  VK_DELETE                            :	printf("VK_DELETE                       ");	break;
				case  VK_HELP                              :	printf("VK_HELP                         ");	break;
				case  VK_LWIN                              :	printf("VK_LWIN                         ");	break;
				case  VK_RWIN                              :	printf("VK_RWIN                         ");	break;
				case  VK_APPS                              :	printf("VK_APPS                         ");	break;
				case  VK_SLEEP                             :	printf("VK_SLEEP                        ");	break;
				case  VK_MULTIPLY                          :	printf("VK_MULTIPLY                     ");	break;
				case  VK_ADD                               :	printf("VK_ADD                          ");	break;
				case  VK_SEPARATOR                         :	printf("VK_SEPARATOR                    ");	break;
				case  VK_SUBTRACT                          :	printf("VK_SUBTRACT                     ");	break;
				case  VK_DECIMAL                           :	printf("VK_DECIMAL                      ");	break;
				case  VK_DIVIDE                            :	printf("VK_DIVIDE                       ");	break;
				case  VK_NAVIGATION_VIEW                   :	printf("VK_NAVIGATION_VIEW              ");	break;
				case  VK_NAVIGATION_MENU                   :	printf("VK_NAVIGATION_MENU              ");	break;
				case  VK_NAVIGATION_UP                     :	printf("VK_NAVIGATION_UP                ");	break;
				case  VK_NAVIGATION_DOWN                   :	printf("VK_NAVIGATION_DOWN              ");	break;
				case  VK_NAVIGATION_LEFT                   :	printf("VK_NAVIGATION_LEFT              ");	break;
				case  VK_NAVIGATION_RIGHT                  :	printf("VK_NAVIGATION_RIGHT             ");	break;
				case  VK_NAVIGATION_ACCEPT                 :	printf("VK_NAVIGATION_ACCEPT            ");	break;
				case  VK_NAVIGATION_CANCEL                 :	printf("VK_NAVIGATION_CANCEL            ");	break;
				case  VK_NUMLOCK                           :	printf("VK_NUMLOCK                      ");	break;
				case  VK_SCROLL                            :	printf("VK_SCROLL                       ");	break;
				case  VK_OEM_NEC_EQUAL                     :	printf("VK_OEM_NEC_EQUAL,VK_OEM_FJ_JISHO");	break;
				case  VK_OEM_FJ_MASSHOU                    :	printf("VK_OEM_FJ_MASSHOU               ");	break;
				case  VK_OEM_FJ_TOUROKU                    :	printf("VK_OEM_FJ_TOUROKU               ");	break;
				case  VK_OEM_FJ_LOYA                       :	printf("VK_OEM_FJ_LOYA                  ");	break;
				case  VK_OEM_FJ_ROYA                       :	printf("VK_OEM_FJ_ROYA                  ");	break;
				case  VK_LSHIFT                            :	printf("VK_LSHIFT                       ");	break;
				case  VK_RSHIFT                            :	printf("VK_RSHIFT                       ");	break;
				case  VK_LCONTROL                          :	printf("VK_LCONTROL                     ");	break;
				case  VK_RCONTROL                          :	printf("VK_RCONTROL                     ");	break;
				case  VK_LMENU                             :	printf("VK_LMENU                        ");	break;
				case  VK_RMENU                             :	printf("VK_RMENU                        ");	break;
				case  VK_BROWSER_BACK                      :	printf("VK_BROWSER_BACK                 ");	break;
				case  VK_BROWSER_FORWARD                   :	printf("VK_BROWSER_FORWARD              ");	break;
				case  VK_BROWSER_REFRESH                   :	printf("VK_BROWSER_REFRESH              ");	break;
				case  VK_BROWSER_STOP                      :	printf("VK_BROWSER_STOP                 ");	break;
				case  VK_BROWSER_SEARCH                    :	printf("VK_BROWSER_SEARCH               ");	break;
				case  VK_BROWSER_FAVORITES                 :	printf("VK_BROWSER_FAVORITES            ");	break;
				case  VK_BROWSER_HOME                      :	printf("VK_BROWSER_HOME                 ");	break;
				case  VK_VOLUME_MUTE                       :	printf("VK_VOLUME_MUTE                  ");	break;
				case  VK_VOLUME_DOWN                       :	printf("VK_VOLUME_DOWN                  ");	break;
				case  VK_VOLUME_UP                         :	printf("VK_VOLUME_UP                    ");	break;
				case  VK_MEDIA_NEXT_TRACK                  :	printf("VK_MEDIA_NEXT_TRACK             ");	break;
				case  VK_MEDIA_PREV_TRACK                  :	printf("VK_MEDIA_PREV_TRACK             ");	break;
				case  VK_MEDIA_STOP                        :	printf("VK_MEDIA_STOP                   ");	break;
				case  VK_MEDIA_PLAY_PAUSE                  :	printf("VK_MEDIA_PLAY_PAUSE             ");	break;
				case  VK_LAUNCH_MAIL                       :	printf("VK_LAUNCH_MAIL                  ");	break;
				case  VK_LAUNCH_MEDIA_SELECT               :	printf("VK_LAUNCH_MEDIA_SELECT          ");	break;
				case  VK_LAUNCH_APP1                       :	printf("VK_LAUNCH_APP1                  ");	break;
				case  VK_LAUNCH_APP2                       :	printf("VK_LAUNCH_APP2                  ");	break;
				case  VK_OEM_1                             :	printf("VK_OEM_1                        ");	break;
				case  VK_OEM_PLUS                          :	printf("VK_OEM_PLUS                     ");	break;
				case  VK_OEM_COMMA                         :	printf("VK_OEM_COMMA                    ");	break;
				case  VK_OEM_MINUS                         :	printf("VK_OEM_MINUS                    ");	break;
				case  VK_OEM_PERIOD                        :	printf("VK_OEM_PERIOD                   ");	break;
				case  VK_OEM_2                             :	printf("VK_OEM_2                        ");	break;
				case  VK_OEM_3                             :	printf("VK_OEM_3                        ");	break;
				case  0xC1                                 :	printf("VK_/ VK_DIVIDE                  ");	break;
				case  VK_GAMEPAD_A                         :	printf("VK_GAMEPAD_A                    ");	break;
				case  VK_GAMEPAD_B                         :	printf("VK_GAMEPAD_B                    ");	break;
				case  VK_GAMEPAD_X                         :	printf("VK_GAMEPAD_X                    ");	break;
				case  VK_GAMEPAD_Y                         :	printf("VK_GAMEPAD_Y                    ");	break;
				case  VK_GAMEPAD_RIGHT_SHOULDER            :	printf("VK_GAMEPAD_RIGHT_SHOULDER       ");	break;
				case  VK_GAMEPAD_LEFT_SHOULDER             :	printf("VK_GAMEPAD_LEFT_SHOULDER        ");	break;
				case  VK_GAMEPAD_LEFT_TRIGGER              :	printf("VK_GAMEPAD_LEFT_TRIGGER         ");	break;
				case  VK_GAMEPAD_RIGHT_TRIGGER             :	printf("VK_GAMEPAD_RIGHT_TRIGGER        ");	break;
				case  VK_GAMEPAD_DPAD_UP                   :	printf("VK_GAMEPAD_DPAD_UP              ");	break;
				case  VK_GAMEPAD_DPAD_DOWN                 :	printf("VK_GAMEPAD_DPAD_DOWN            ");	break;
				case  VK_GAMEPAD_DPAD_LEFT                 :	printf("VK_GAMEPAD_DPAD_LEFT            ");	break;
				case  VK_GAMEPAD_DPAD_RIGHT                :	printf("VK_GAMEPAD_DPAD_RIGHT           ");	break;
				case  VK_GAMEPAD_MENU                      :	printf("VK_GAMEPAD_MENU                 ");	break;
				case  VK_GAMEPAD_VIEW                      :	printf("VK_GAMEPAD_VIEW                 ");	break;
				case  VK_GAMEPAD_LEFT_THUMBSTICK_BUTTON    :	printf("VK_GAMEPAD_LEFT_THUMBSTICK_BUTTO");	break;
				case  VK_GAMEPAD_RIGHT_THUMBSTICK_BUTTON   :	printf("VK_GAMEPAD_RIGHT_THUMBSTICK_BUTT");	break;
				case  VK_GAMEPAD_LEFT_THUMBSTICK_UP        :	printf("VK_GAMEPAD_LEFT_THUMBSTICK_UP   ");	break;
				case  VK_GAMEPAD_LEFT_THUMBSTICK_DOWN      :	printf("VK_GAMEPAD_LEFT_THUMBSTICK_DOWN ");	break;
				case  VK_GAMEPAD_LEFT_THUMBSTICK_RIGHT     :	printf("VK_GAMEPAD_LEFT_THUMBSTICK_RIGHT");	break;
				case  VK_GAMEPAD_LEFT_THUMBSTICK_LEFT      :	printf("VK_GAMEPAD_LEFT_THUMBSTICK_LEFT ");	break;
				case  VK_GAMEPAD_RIGHT_THUMBSTICK_UP       :	printf("VK_GAMEPAD_RIGHT_THUMBSTICK_UP  ");	break;
				case  VK_GAMEPAD_RIGHT_THUMBSTICK_DOWN     :	printf("VK_GAMEPAD_RIGHT_THUMBSTICK_DOWN");	break;
				case  VK_GAMEPAD_RIGHT_THUMBSTICK_RIGHT    :	printf("VK_GAMEPAD_RIGHT_THUMBSTICK_RIGH");	break;
				case  VK_GAMEPAD_RIGHT_THUMBSTICK_LEFT     :	printf("VK_GAMEPAD_RIGHT_THUMBSTICK_LEFT");	break;
				case  VK_OEM_4                             :	printf("VK_OEM_4                        ");	break;
				case  VK_OEM_5                             :	printf("VK_OEM_5                        ");	break;
				case  VK_OEM_6                             :	printf("VK_OEM_6                        ");	break;
				case  VK_OEM_7                             :	printf("VK_OEM_7                        ");	break;
				case  VK_OEM_8                             :	printf("VK_OEM_8                        ");	break;
				case  VK_OEM_AX                            :	printf("VK_OEM_AX                       ");	break;
				case  VK_OEM_102                           :	printf("VK_OEM_102                      ");	break;
				case  VK_ICO_HELP                          :	printf("VK_ICO_HELP                     ");	break;
				case  VK_ICO_00                            :	printf("VK_ICO_00                       ");	break;
				case  VK_PROCESSKEY                        :	printf("VK_PROCESSKEY                   ");	break;
				case  VK_ICO_CLEAR                         :	printf("VK_ICO_CLEAR                    ");	break;
				case  VK_PACKET                            :	printf("VK_PACKET                       ");	break;
				case  VK_OEM_RESET                         :	printf("VK_OEM_RESET                    ");	break;
				case  VK_OEM_JUMP                          :	printf("VK_OEM_JUMP                     ");	break;
				case  VK_OEM_PA1                           :	printf("VK_OEM_PA1                      ");	break;
				case  VK_OEM_PA2                           :	printf("VK_OEM_PA2                      ");	break;
				case  VK_OEM_PA3                           :	printf("VK_OEM_PA3                      ");	break;
				case  VK_OEM_WSCTRL                        :	printf("VK_OEM_WSCTRL                   ");	break;
				case  VK_OEM_CUSEL                         :	printf("VK_OEM_CUSEL                    ");	break;
				case  VK_OEM_ATTN                          :	printf("VK_OEM_ATTN                     ");	break;
				case  VK_OEM_FINISH                        :	printf("VK_OEM_FINISH                   ");	break;
				case  VK_OEM_COPY                          :	printf("VK_OEM_COPY                     ");	break;
				case  VK_OEM_AUTO                          :	printf("VK_OEM_AUTO                     ");	break;
				case  VK_OEM_ENLW                          :	printf("VK_OEM_ENLW                     ");	break;
				case  VK_OEM_BACKTAB                       :	printf("VK_OEM_BACKTAB                  ");	break;
				case  VK_ATTN                              :	printf("VK_ATTN                         ");	break;
				case  VK_CRSEL                             :	printf("VK_CRSEL                        ");	break;
				case  VK_EXSEL                             :	printf("VK_EXSEL                        ");	break;
				case  VK_EREOF                             :	printf("VK_EREOF                        ");	break;
				case  VK_PLAY                              :	printf("VK_PLAY                         ");	break;
				case  VK_ZOOM                              :	printf("VK_ZOOM                         ");	break;
				case  VK_NONAME                            :	printf("VK_NONAME                       ");	break;
				case  VK_PA1                               :	printf("VK_PA1                          ");	break;
				case  VK_OEM_CLEAR                         :	printf("VK_OEM_CLEAR                    ");	break;
				*/
						                     
				default:
					printf("???????????"); break;
			}
			return 0;
		}

		case WM_COMMAND:
		{
			switch (LOWORD(wParam)) {
				case ID_FILE_OPEN:
				{
					static int get = 0;
					get = GetFileName(hwnd, szFileNameToOpen, false);
					printf("get = %i___\n", get);
					if (get) {
						SetCursor(LoadCursor(NULL, IDC_WAIT));
						int op = OpenImg(get, hwnd, szFileNameToOpen);
						printf("op = %i\n", op);
						if (op) {
							int sz = strlen(szFileNameToOpen) + strlen(szWindowClass) + 10;
							sprintf(szTitle, "%s - %s", szWindowClass, szFileNameToOpen);
							szTitle[sizeof(szTitle) - 1] = 0;
							SetWindowText(hwnd, szTitle);
						}
						else {
							SetWindowText(hwnd, szWindowClass);
							MessageBox(0, szFileNameToOpen, strNotSuportedFile, 0);
						}
						SetCursor(LoadCursor(NULL, IDC_ARROW));
						InvalidateRect(hwnd, NULL, true);
					}
					return 0;
					break;
				}
				//case ID_FILE_SAVE:
				//	break;
				//case ID_FILE_SAVE_AS:
				//	break;
				//case ID_FILE_SAVE_ALL:
				//	break;
				//case ID_FILE_CLONE:
				//	break;
				//case ID_FILE_CLOSE:
				//	break;
				//case ID_FILE_CLOSE_ALL:
				//	break;
				case ID_FILE_EXIT:
				{
					PostMessage(hwnd, WM_CLOSE, 0, 0);
					break;
				}
				case ID_HELP_ABOUT:
				{
					DialogBox(GetModuleHandle(NULL), MAKEINTRESOURCE(IDD_ABOUT), hwnd, AboutDlgProc);				break;
				}
				case ID_BACKGROUND_COLOR:
				{
					DialogBox(GetModuleHandle(NULL), MAKEINTRESOURCE(IDD_GET_RGB_BACK), hwnd, ColorBG_DlgProc);				break;
				}

				case ID_BORDER:
				{
					ShowBorder = !ShowBorder; CheckMenuItem(menu, LOWORD(wParam), ShowBorder * 8);				InvalidateRect(hwnd, NULL, true); break;
				}
				case ID_DEFZOOM:
				{
					zoom = 1.f;				InvalidateRect(hwnd, NULL, true); break;
				}

				case ID_SBM1:
				{
					CheckMenuRadioItem(menu, ID_SBM1, ID_SBM4, ID_SBM1, 8);				StretchBltMode = HALFTONE;				InvalidateRect(hwnd, NULL, true);				break;
				}
				case ID_SBM2:
				{
					CheckMenuRadioItem(menu, ID_SBM1, ID_SBM4, ID_SBM2, 8);				StretchBltMode = COLORONCOLOR;				InvalidateRect(hwnd, NULL, true);				break;
				}
				case ID_SBM3:
				{
					CheckMenuRadioItem(menu, ID_SBM1, ID_SBM4, ID_SBM3, 8);				StretchBltMode = BLACKONWHITE;				InvalidateRect(hwnd, NULL, true);				break;
				}
				case ID_SBM4:
				{
					CheckMenuRadioItem(menu, ID_SBM1, ID_SBM4, ID_SBM4, 8);				StretchBltMode = WHITEONBLACK;				InvalidateRect(hwnd, NULL, true);				break;
				}

				case ID_ALING_TOPLEFT:
				case ID_ALING_TOPRIGHT:
				case ID_ALING_CENTER:
				case ID_ALING_LOWLEFT:
				case ID_ALING_LOWRIGHT:
				{
					aling = LOWORD(wParam);
					CheckMenuRadioItem(menu, ID_ALING_TOPLEFT, ID_ALING_LOWRIGHT, LOWORD(wParam), 8);
					InvalidateRect(hwnd, NULL, true);
					break;
				}

				case ID_STRETCH_FIXED:
				case ID_STRETCH_ADAPTIVE:
				case ID_STRETCH_ADAPTIVE2:
				case ID_STRETCH_STRETCH:
				{
					stretch = LOWORD(wParam);
					CheckMenuRadioItem(menu, ID_STRETCH_FIXED, ID_STRETCH_STRETCH, LOWORD(wParam), 8);
					InvalidateRect(hwnd, NULL, true);
					break;
				}

				case ID_TRANSPARENCY_OPAQUE:
				{
					ShowTransparent = ID_TRANSPARENCY_OPAQUE;  CheckMenuRadioItem(menu, ID_TRANSPARENCY_OPAQUE, ID_TRANSPARENCY_TRANSP, LOWORD(wParam), 8);				InvalidateRect(hwnd, NULL, true); break; return 0;
				}
				case ID_TRANSPARENCY_PREMUL:
				{
					ShowTransparent = ID_TRANSPARENCY_PREMUL;  CheckMenuRadioItem(menu, ID_TRANSPARENCY_OPAQUE, ID_TRANSPARENCY_TRANSP, LOWORD(wParam), 8);				InvalidateRect(hwnd, NULL, true); break; return 0;
				}
				case ID_TRANSPARENCY_TRANSP:
				{
					ShowTransparent = ID_TRANSPARENCY_TRANSP;  CheckMenuRadioItem(menu, ID_TRANSPARENCY_OPAQUE, ID_TRANSPARENCY_TRANSP, LOWORD(wParam), 8);				InvalidateRect(hwnd, NULL, true); break; return 0;
				}

				//case ID_BMP_1						:{BmpMode = SRCCOPY       ;  CheckMenuRadioItem(menu, ID_BMP_1,  ID_BMP_15,  LOWORD(wParam), 8);				InvalidateRect(hwnd, NULL, true); break;  }
				//case ID_BMP_2						:{BmpMode = SRCPAINT      ;  CheckMenuRadioItem(menu, ID_BMP_1,  ID_BMP_15,  LOWORD(wParam), 8);				InvalidateRect(hwnd, NULL, true); break;  }
				//case ID_BMP_3						:{BmpMode = SRCAND        ;  CheckMenuRadioItem(menu, ID_BMP_1,  ID_BMP_15,  LOWORD(wParam), 8);				InvalidateRect(hwnd, NULL, true); break;  }
				//case ID_BMP_4						:{BmpMode = SRCINVERT     ;  CheckMenuRadioItem(menu, ID_BMP_1,  ID_BMP_15,  LOWORD(wParam), 8);				InvalidateRect(hwnd, NULL, true); break;  }
				//case ID_BMP_5						:{BmpMode = SRCERASE      ;  CheckMenuRadioItem(menu, ID_BMP_1,  ID_BMP_15,  LOWORD(wParam), 8);				InvalidateRect(hwnd, NULL, true); break;  }
				//case ID_BMP_6						:{BmpMode = NOTSRCCOPY    ;  CheckMenuRadioItem(menu, ID_BMP_1,  ID_BMP_15,  LOWORD(wParam), 8);				InvalidateRect(hwnd, NULL, true); break;  }
				//case ID_BMP_7						:{BmpMode = NOTSRCERASE   ;  CheckMenuRadioItem(menu, ID_BMP_1,  ID_BMP_15,  LOWORD(wParam), 8);				InvalidateRect(hwnd, NULL, true); break;  }
				//case ID_BMP_8						:{BmpMode = MERGECOPY     ;  CheckMenuRadioItem(menu, ID_BMP_1,  ID_BMP_15,  LOWORD(wParam), 8);				InvalidateRect(hwnd, NULL, true); break;  }
				//case ID_BMP_9						:{BmpMode = MERGEPAINT    ;  CheckMenuRadioItem(menu, ID_BMP_1,  ID_BMP_15,  LOWORD(wParam), 8);				InvalidateRect(hwnd, NULL, true); break;  }
				//case ID_BMP_10						:{BmpMode = PATCOPY       ;  CheckMenuRadioItem(menu, ID_BMP_1,  ID_BMP_15,  LOWORD(wParam), 8);				InvalidateRect(hwnd, NULL, true); break;  }
				//case ID_BMP_11						:{BmpMode = PATPAINT      ;  CheckMenuRadioItem(menu, ID_BMP_1,  ID_BMP_15,  LOWORD(wParam), 8);				InvalidateRect(hwnd, NULL, true); break;  }
				//case ID_BMP_12						:{BmpMode = PATINVERT     ;  CheckMenuRadioItem(menu, ID_BMP_1,  ID_BMP_15,  LOWORD(wParam), 8);				InvalidateRect(hwnd, NULL, true); break;  }
				//case ID_BMP_13						:{BmpMode = DSTINVERT     ;  CheckMenuRadioItem(menu, ID_BMP_1,  ID_BMP_15,  LOWORD(wParam), 8);				InvalidateRect(hwnd, NULL, true); break;  }
				//case ID_BMP_14						:{BmpMode = BLACKNESS     ;  CheckMenuRadioItem(menu, ID_BMP_1,  ID_BMP_15,  LOWORD(wParam), 8);				InvalidateRect(hwnd, NULL, true); break;  }
				//case ID_BMP_15						:{BmpMode = WHITENESS     ;  CheckMenuRadioItem(menu, ID_BMP_1,  ID_BMP_15,  LOWORD(wParam), 8);				InvalidateRect(hwnd, NULL, true); break;  }
				//
				case ID_BG_COLOR_1	/*"Xadrez"      */:
				{
					if (background2) DeleteObject(background2); background2 = CreatePatternBrush(hbmCheker);	CheckMenuRadioItem(menu, ID_BG_COLOR_1, ID_BG_COLOR_17, LOWORD(wParam), 8);	InvalidateRect(hwnd, NULL, true); 	/*SetClassLongPtr(hwnd, GCLP_HBRBACKGROUND, (LONG)background);*/  break;
				}
				case ID_BG_COLOR_2	/*"Branco"      */:
				{
					if (background2) DeleteObject(background2); background2 = CreateSolidBrush(RGB(255, 255, 255));	CheckMenuRadioItem(menu, ID_BG_COLOR_1, ID_BG_COLOR_17, LOWORD(wParam), 8);	InvalidateRect(hwnd, NULL, true); 	/*SetClassLongPtr(hwnd, GCLP_HBRBACKGROUND, (LONG)background);*/  break;
				}
				case ID_BG_COLOR_3	/*"Cinza Claro" */:
				{
					if (background2) DeleteObject(background2); background2 = CreateSolidBrush(RGB(175, 175, 175));	CheckMenuRadioItem(menu, ID_BG_COLOR_1, ID_BG_COLOR_17, LOWORD(wParam), 8);	InvalidateRect(hwnd, NULL, true); 	/*SetClassLongPtr(hwnd, GCLP_HBRBACKGROUND, (LONG)background);*/  break;
				}
				case ID_BG_COLOR_4	/*"Cinza"       */:
				{
					if (background2) DeleteObject(background2); background2 = CreateSolidBrush(RGB(128, 128, 128));	CheckMenuRadioItem(menu, ID_BG_COLOR_1, ID_BG_COLOR_17, LOWORD(wParam), 8);	InvalidateRect(hwnd, NULL, true); 	/*SetClassLongPtr(hwnd, GCLP_HBRBACKGROUND, (LONG)background);*/  break;
				}
				case ID_BG_COLOR_5	/*"Cinza Escuro"*/:
				{
					if (background2) DeleteObject(background2); background2 = CreateSolidBrush(RGB(60, 60, 60));	CheckMenuRadioItem(menu, ID_BG_COLOR_1, ID_BG_COLOR_17, LOWORD(wParam), 8);	InvalidateRect(hwnd, NULL, true); 	/*SetClassLongPtr(hwnd, GCLP_HBRBACKGROUND, (LONG)background);*/  break;
				}
				case ID_BG_COLOR_6	/*"Preto"       */:
				{
					if (background2) DeleteObject(background2); background2 = CreateSolidBrush(RGB(0, 0, 0));	CheckMenuRadioItem(menu, ID_BG_COLOR_1, ID_BG_COLOR_17, LOWORD(wParam), 8);	InvalidateRect(hwnd, NULL, true); 	/*SetClassLongPtr(hwnd, GCLP_HBRBACKGROUND, (LONG)background);*/  break;
				}
				case ID_BG_COLOR_7	/*"Vermelho"    */:
				{
					if (background2) DeleteObject(background2); background2 = CreateSolidBrush(RGB(255, 0, 0));	CheckMenuRadioItem(menu, ID_BG_COLOR_1, ID_BG_COLOR_17, LOWORD(wParam), 8);	InvalidateRect(hwnd, NULL, true); 	/*SetClassLongPtr(hwnd, GCLP_HBRBACKGROUND, (LONG)background);*/  break;
				}
				case ID_BG_COLOR_8	/*"Verde"       */:
				{
					if (background2) DeleteObject(background2); background2 = CreateSolidBrush(RGB(0, 255, 0));	CheckMenuRadioItem(menu, ID_BG_COLOR_1, ID_BG_COLOR_17, LOWORD(wParam), 8);	InvalidateRect(hwnd, NULL, true); 	/*SetClassLongPtr(hwnd, GCLP_HBRBACKGROUND, (LONG)background);*/  break;
				}
				case ID_BG_COLOR_9	/*"Azul"        */:
				{
					if (background2) DeleteObject(background2); background2 = CreateSolidBrush(RGB(0, 0, 255));	CheckMenuRadioItem(menu, ID_BG_COLOR_1, ID_BG_COLOR_17, LOWORD(wParam), 8);	InvalidateRect(hwnd, NULL, true); 	/*SetClassLongPtr(hwnd, GCLP_HBRBACKGROUND, (LONG)background);*/  break;
				}
				case ID_BG_COLOR_10	/*"Amarelo"     */:
				{
					if (background2) DeleteObject(background2); background2 = CreateSolidBrush(RGB(255, 255, 0));	CheckMenuRadioItem(menu, ID_BG_COLOR_1, ID_BG_COLOR_17, LOWORD(wParam), 8);	InvalidateRect(hwnd, NULL, true); 	/*SetClassLongPtr(hwnd, GCLP_HBRBACKGROUND, (LONG)background);*/  break;
				}
				case ID_BG_COLOR_11	/*"Ciano"       */:
				{
					if (background2) DeleteObject(background2); background2 = CreateSolidBrush(RGB(0, 255, 255));	CheckMenuRadioItem(menu, ID_BG_COLOR_1, ID_BG_COLOR_17, LOWORD(wParam), 8);	InvalidateRect(hwnd, NULL, true); 	/*SetClassLongPtr(hwnd, GCLP_HBRBACKGROUND, (LONG)background);*/  break;
				}
				case ID_BG_COLOR_12	/*"Magenta"     */:
				{
					if (background2) DeleteObject(background2); background2 = CreateSolidBrush(RGB(200, 0, 255));	CheckMenuRadioItem(menu, ID_BG_COLOR_1, ID_BG_COLOR_17, LOWORD(wParam), 8);	InvalidateRect(hwnd, NULL, true); 	/*SetClassLongPtr(hwnd, GCLP_HBRBACKGROUND, (LONG)background);*/  break;
				}
				case ID_BG_COLOR_13	/*"Laranja"     */:
				{
					if (background2) DeleteObject(background2); background2 = CreateSolidBrush(RGB(255, 127, 0));	CheckMenuRadioItem(menu, ID_BG_COLOR_1, ID_BG_COLOR_17, LOWORD(wParam), 8);	InvalidateRect(hwnd, NULL, true); 	/*SetClassLongPtr(hwnd, GCLP_HBRBACKGROUND, (LONG)background);*/  break;
				}
				case ID_BG_COLOR_14	/*"Rosa"        */:
				{
					if (background2) DeleteObject(background2); background2 = CreateSolidBrush(RGB(255, 128, 195));	CheckMenuRadioItem(menu, ID_BG_COLOR_1, ID_BG_COLOR_17, LOWORD(wParam), 8);	InvalidateRect(hwnd, NULL, true); 	/*SetClassLongPtr(hwnd, GCLP_HBRBACKGROUND, (LONG)background);*/  break;
				}
				case ID_BG_COLOR_15	/*"Turb"        */:
				{
					if (background2) DeleteObject(background2); background2 = CreateSolidBrush(RGB(89, 141, 65));	CheckMenuRadioItem(menu, ID_BG_COLOR_1, ID_BG_COLOR_17, LOWORD(wParam), 8);	InvalidateRect(hwnd, NULL, true); 	/*SetClassLongPtr(hwnd, GCLP_HBRBACKGROUND, (LONG)background);*/  break;
				}
				case ID_BG_COLOR_16	/*"Roxo"        */:
				{
					if (background2) DeleteObject(background2); background2 = CreateSolidBrush(RGB(115, 0, 142));	CheckMenuRadioItem(menu, ID_BG_COLOR_1, ID_BG_COLOR_17, LOWORD(wParam), 8);	InvalidateRect(hwnd, NULL, true); 	/*SetClassLongPtr(hwnd, GCLP_HBRBACKGROUND, (LONG)background);*/  break;
				}
				case ID_BG_COLOR_17	/*personalizado"*/:
				{
					if (ChooseColor(&cc) == TRUE) {
						if (background2) DeleteObject(background2);
						background2 = CreateSolidBrush(cc.rgbResult);
						CheckMenuRadioItem(menu, ID_BG_COLOR_1, ID_BG_COLOR_17, LOWORD(wParam), 8);
						InvalidateRect(hwnd, NULL, true); 	/*SetClassLongPtr(hwnd, GCLP_HBRBACKGROUND, (LONG)background);*/
					}
					break;
				}
			}
			break;
		}
		default:
			return DefWindowProc(hwnd, Message, wParam, lParam);
	}
	return 0;
}

#ifdef _DEBUG
int main(int argc, char* argv[])
#else
int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
#endif // _DEBUG
{
	HWND hwnd;
	MSG Msg;
	HACCEL hAccelTable;
	background = CreateSolidBrush(RGB(128, 128, 128));
#ifdef _DEBUG
	g_hInst = GetModuleHandle(NULL);
#else
	g_hInst = hInstance;
#endif // _DEBUG
	WndClass.cbSize = sizeof(WNDCLASSEX);
	WndClass.style = 0;
	WndClass.lpfnWndProc = WndProc;
	WndClass.cbClsExtra = 0;
	WndClass.cbWndExtra = 0;
	WndClass.hInstance = g_hInst;
	WndClass.hIcon = LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON1));
	WndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
	WndClass.hbrBackground = background;
	WndClass.lpszMenuName = MAKEINTRESOURCE(IDR_MYMENU);
	WndClass.lpszClassName = szWindowClass;
	WndClass.hIconSm = (HICON)LoadImage(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON1), IMAGE_ICON, 16, 16, 0);
	if (!RegisterClassEx(&WndClass)) {
#ifdef _PT_BR
		MessageBox(0, "Registro da janela falhou!", "Erro!", MB_ICONEXCLAMATION | MB_OK | MB_SYSTEMMODAL);
#else
		MessageBox(0, "Window Registration Failed!", "Error!", MB_ICONEXCLAMATION | MB_OK | MB_SYSTEMMODAL);
#endif // _PT_BR

		return 0;
	}
	hwnd = CreateWindowEx(
		WS_EX_CLIENTEDGE,
		szWindowClass,
		szTitle,
		WS_OVERLAPPEDWINDOW | WS_EX_ACCEPTFILES,
		CW_USEDEFAULT, CW_USEDEFAULT, screenx, screeny,
		NULL, NULL, g_hInst, NULL);
	if (hwnd == NULL) {
#ifdef _PT_BR
		MessageBox(0, "Criação da janela falhou!", "Erro!", MB_ICONEXCLAMATION | MB_OK | MB_SYSTEMMODAL);
#else
		MessageBox(0, "Window Creation Failed!", "Error!", MB_ICONEXCLAMATION | MB_OK | MB_SYSTEMMODAL);
#endif // _PT_BR
		return 0;
	}
	ShowWindow(hwnd,
#ifdef _DEBUG
			   1
#else
			   nShowCmd
#endif // _DEBUG
	);
	DragAcceptFiles(hwnd, TRUE);
	UpdateWindow(hwnd);
	hAccelTable = LoadAccelerators(g_hInst, MAKEINTRESOURCE(IDR_ACCELERATOR1));
	while (GetMessage(&Msg, NULL, 0, 0)) {
		if (!TranslateAccelerator(Msg.hwnd, hAccelTable, &Msg)) {
			TranslateMessage(&Msg);
			DispatchMessage(&Msg);
		}
	}
	return Msg.wParam;
}



