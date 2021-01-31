#pragma once
struct stconv{
	~stconv();
	stconv();
	stconv(uint _type, ushort _xres, ushort _yres, ushort _zres, uchar _fromformat, uchar _toformat, string _proc);
	uint   type;
	ushort xres;
	ushort yres;
	ushort zres;
	uchar  fromformat;
	uchar  toformat;
	string proc;
};
