#include "Mundo.h"
#include "glut.h"
#include <math.h>


void Mundo::rotarOjo()
{
	float dist=sqrt(x_ojo*x_ojo+z_ojo*z_ojo);
	float ang=atan2(z_ojo,x_ojo);
	ang+=0.05f;
	x_ojo=dist*cos(ang);
	z_ojo=dist*sin(ang);
}
void Mundo::dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
			0.0, y_ojo, 0.0,      // hacia que punto mira  (0,0,0) 
			0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)    

	//aqui es donde hay que poner el codigo de dibujo

	esfera.dibuja();

	plataforma.dibuja();
}

void Mundo::mueve()
{
	esfera.mueve(0.025f);
	Interaccion::Rebote(esfera, plataforma);

	
}

void Mundo::inicializa()
{
	x_ojo = 0;
	y_ojo = 0;
	z_ojo = 50;
	//Inicializar esfera:
	esfera.setPos(0.0f, 0.0f);
	esfera.setColor(255, 0, 0);
	esfera.setRadio(1.0f);
	esfera.setVel(0.0f, 0.0f);


}

void Mundo::tecla(unsigned char key)
{
	plataforma.mueve(key);
}
void Mundo::teclaEspecial(unsigned char key)
{

}