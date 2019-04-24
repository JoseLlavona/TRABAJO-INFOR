#include "Interaccion.h"



Interaccion::Interaccion()
{
}


Interaccion::~Interaccion()
{
}

bool Interaccion::Rebote(Esfera &e, Plataforma p){
	if (e.posicion.y <= (p.limite1.y+e.radio)&&e.posicion.y>p.limite1.y&&e.posicion.x > (p.limite1.x-e.radio)&&e.posicion.x < (p.limite2.x+e.radio)) {
		
		e.velocidad.y= 5.0f;
		return true;
	}
	return false;
}
