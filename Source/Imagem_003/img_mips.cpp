#include "pch.h"
//#include "Generated\_GEN_Struct.h"
#include "Enums.h"
#include "definitions.h"
#include "structs.h"
#include "Imagem_003.h"

img_mips::img_mips():
	m_dataSize(0),
	m_xres(0),		
	m_yres(0),		
	m_zres(0),	
	m_pixels(NULL)
{

}

img_mips::~img_mips()
{
	if(m_pixels)
		delete[] m_pixels;
	m_pixels=NULL;
	m_dataSize=0;
	m_xres=0;
	m_yres=0;
	m_zres=0;
}

void img_mips::destroy()
{
	if(m_pixels)
		delete[] m_pixels;
	m_pixels=NULL;
	m_dataSize=0;
	m_xres=0;
	m_yres=0;
	m_zres=0;
}

img_mips::img_mips(const img_mips &c):
	m_dataSize(0),
	m_dataFormat(0),
	m_xres(0),		
	m_yres(0),		
	m_zres(0),	
	m_spp(0),	
	m_pixels(NULL)
{
	if(!c.m_dataSize || !c.m_dataFormat || !c.m_xres || !c.m_yres || !c.m_zres || !c.m_spp || !c.m_pixels)
		return;
	uint dataSize = c.m_xres*c.m_yres*c.m_zres*m_spp;
	if(dataSize != c.m_dataSize)
		return;
	if(!(m_pixels=new char[dataSize]))
		return;
	memcpy(m_pixels, c.m_pixels, dataSize);

	m_spp=c.m_spp;
	m_xres=c.m_xres;	
	m_yres=c.m_yres;	
	m_zres=c.m_zres;
	m_dataSize=dataSize;
	m_dataFormat=c.m_dataFormat;
}

img_mips::img_mips(const img_mips *c):
	m_dataSize(0),
	m_dataFormat(0),
	m_xres(0),		
	m_yres(0),		
	m_zres(0),	
	m_spp(0),	
	m_pixels(NULL)
{
	if(!c->m_dataSize || !c->m_dataFormat || !c->m_xres || !c->m_yres || !c->m_zres || !c->m_spp || !c->m_pixels)
		return;
	uint dataSize = c->m_xres*c->m_yres*c->m_zres*m_spp;
	if(dataSize != c->m_dataSize)
		return;
	if(!(m_pixels=new char[dataSize]))
		return;
	memcpy(m_pixels, c->m_pixels, dataSize);

	m_spp=c->m_spp;
	m_xres=c->m_xres;	
	m_yres=c->m_yres;	
	m_zres=c->m_zres;
	m_dataSize=dataSize;
	m_dataFormat=c->m_dataFormat;
}

img_mips &img_mips::operator = (const img_mips &c)
{
	destroy();
	if(!c.m_dataSize || !c.m_dataFormat || !c.m_xres || !c.m_yres || !c.m_zres || !c.m_spp || !c.m_pixels)
		return *this;
	uint dataSize = c.m_xres*c.m_yres*c.m_zres*m_spp;
	if(dataSize != c.m_dataSize)
		return *this;
	if(!(m_pixels=new char[dataSize]))
		return *this;
	memcpy(m_pixels, c.m_pixels, dataSize);

	m_spp=c.m_spp;
	m_xres=c.m_xres;	
	m_yres=c.m_yres;	
	m_zres=c.m_zres;
	m_dataSize=dataSize;
	m_dataFormat=c.m_dataFormat;
	return *this;
}

img_mips &img_mips::operator = (const img_mips *c)
{
	destroy();
	if(!c->m_dataSize || !c->m_dataFormat || !c->m_xres || !c->m_yres || !c->m_zres || !c->m_spp || !c->m_pixels)
		return *this;
	uint dataSize = c->m_xres*c->m_yres*c->m_zres*m_spp;
	if(dataSize != c->m_dataSize)
		return *this;
	if(!(m_pixels=new char[dataSize]))
		return *this;
	memcpy(m_pixels, c->m_pixels, dataSize);

	m_spp=c->m_spp;
	m_xres=c->m_xres;	
	m_yres=c->m_yres;	
	m_zres=c->m_zres;
	m_dataSize=dataSize;
	m_dataFormat=c->m_dataFormat;
	return *this;
}
