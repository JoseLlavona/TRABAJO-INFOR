
#pragma once

typedef unsigned char Byte;
class Color
{
public:
	Color(Byte _r = 255, Byte _v = 255, Byte _a = 255);
	void set(Byte _r = 255, Byte _v = 255, Byte _a = 255) {
		r = _r;
		g = _v;
		b = _a;
	}
	void ponColor();
	virtual ~Color();
	Byte r, g, b;

};


