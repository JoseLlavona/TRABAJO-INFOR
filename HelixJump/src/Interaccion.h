#pragma once
#include "Esfera.h"
#include "Plataforma.h"
class Interaccion
{
public:
	Interaccion();
	~Interaccion();
	static bool Rebote(Esfera &e, Plataforma p);
};

