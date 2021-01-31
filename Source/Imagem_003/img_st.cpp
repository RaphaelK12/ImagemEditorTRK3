#include "pch.h"
//#include "Generated\_GEN_Struct.h"
#include "Enums.h"
#include "definitions.h"
#include "structs.h"
#include "sterr.h"
#include "stconv.h"

sterr::~sterr()
{
	//if(m_description)
	//	delete[] m_description;
}

sterr::sterr(): m_file(0), m_line(0), m_error(0), m_description(0)
{
}

sterr::sterr(const string &file, uint line, uint error, const string &description){
	m_file=file;
	m_line=line;
	m_error=error;
	m_description=description;
}



stconv::stconv(uint _type, ushort _xres, ushort _yres, ushort _zres, uchar _fromformat, uchar _toformat, string _proc){
	type=_type;
	xres=_xres;
	yres=_yres;
	zres=_zres;
	fromformat=_fromformat;
	toformat=_toformat;
	proc=_proc;
}

stconv::stconv():
	type(0),
	xres(0),
	yres(0),
	zres(0),
	fromformat(0),
	toformat(0),
	proc(0)
{

};

stconv::~stconv(){
	proc.clear();
};








