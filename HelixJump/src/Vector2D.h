#pragma once
class Vector2D
{
public: //atributos
	float x;
	float y;

public: //Metodos
	Vector2D(float xv = 0.0f, float yv = 0.0f);
	float modulo();
	float argumento();
	Vector2D Unitario();
	Vector2D operator - (Vector2D &);
	Vector2D operator +(Vector2D &);
	float operator * (Vector2D &);
	Vector2D operator * (float);
};
