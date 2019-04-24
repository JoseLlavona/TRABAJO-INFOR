#include "Color.h"
#include "glut.h"


Color::Color(Byte _r, Byte _v, Byte _a)
{
	r = _r;
	g = _v;
	b = _a;
}
void Color::ponColor()
{
	glColor3ub(r, g, b);
}
Color::~Color()
{

}
