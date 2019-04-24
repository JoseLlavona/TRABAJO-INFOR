#include "Plataforma.h"
#include "glut.h"


Plataforma::Plataforma()
{
	limite1.x = -5.0f;
	limite1.y = -5.0f;

	limite2.x = 5.0f;
	limite2.y = -5.0f;

	color.b = 255;
	color.r = 255;
	color.g = 255;

	velocidad.x = 0;
	velocidad.y = 0;
}


Plataforma::~Plataforma()
{
}


void Plataforma::dibuja() {
	glDisable(GL_LIGHTING);
	glColor3ub(color.r, color.g, color.b);
	glBegin(GL_POLYGON);
	glVertex3d(limite1.x, limite1.y, 5);
	glVertex3d(limite2.x, limite2.y, 5);
	glVertex3d(limite2.x, limite2.y, -5);
	glVertex3d(limite1.x, limite1.y, -5);
	glEnd();
	glEnable(GL_LIGHTING);
}
void Plataforma::setVel(float vx, float vy){
	velocidad.x = vx;
	velocidad.y = vy;

}
void Plataforma::mueve(unsigned char key) {
	switch (key){
		case 'd':
			velocidad.x = 0;
			velocidad.x+=0.5;
			break;
		case 'a':
			velocidad.x = 0;
			velocidad.x-=0.5;
			break;
	}
	limite1.x += velocidad.x;
	limite2.x += velocidad.x;

}