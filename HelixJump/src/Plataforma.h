#pragma once
#include "Vector2D.h"
#include "Color.h"
class Plataforma
{
	friend class Interaccion;

	Vector2D limite1;
	Vector2D limite2;
	Color color;
	Vector2D velocidad;
	Vector2D aceleracion;
public:
	Plataforma();
	~Plataforma();

	//Métodos:

	void dibuja();
	void mueve(unsigned char key);
	void setVel(float vx, float vy);
};

