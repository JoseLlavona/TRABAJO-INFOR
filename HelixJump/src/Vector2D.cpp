#include "Vector2D.h"
#include <math.h>

//Constructor

Vector2D::Vector2D(float xv, float yv) {
	x = xv;
	y = yv;
}

//Modulo

float Vector2D::modulo() {
	return (float)sqrt(x*x + y * y);
}

//Argumento

float Vector2D::argumento() {
	float PI = 3.14;
	//Cuando x=0
	if (x = 0) {
		if (y > 0) return PI / 2;
		if (y < 0) return -PI / 2;
	}

	else if (x < 0) {
		return (float)atan2(y, x) + PI;
	}
	else return (float)atan2(y, x);
}

//Vector unirario del vector

Vector2D Vector2D::Unitario() {
	Vector2D retorno(x, y);
	float mod = modulo();
	if (mod > 0.00001) {
		retorno.x /= mod;
		retorno.y /= mod;
	}
	return retorno;
}


//Operación Suma

Vector2D Vector2D::operator + (Vector2D &v) {
	Vector2D resultado;
	resultado.x = x + v.x;
	resultado.y = y + v.y;
	return resultado;
}

//Operación Resta

Vector2D Vector2D::operator - (Vector2D &v) {
	Vector2D resultado;
	resultado.x = x - v.x;
	resultado.y = y - v.y;
	return resultado;
}

//Producto escalar

float Vector2D::operator * (Vector2D &v) {
	Vector2D resultado;
	resultado.x = x * v.x;
	resultado.y = y * v.y;
	return resultado.x + resultado.y;
}


//Producto POR un escalar

Vector2D Vector2D::operator*(float cte) {
	Vector2D resultado;
	resultado.x = x * cte;
	resultado.y = y * cte;
	return resultado;
}