#include "Esfera.h"
#include "Plataforma.h"
#include "Interaccion.h"
class Mundo
{
	Esfera esfera;
	Plataforma plataforma;
	float x_ojo;
	float y_ojo;
	float z_ojo;
public: 
	void tecla(unsigned char key);
	void teclaEspecial(unsigned char key);
	void inicializa();
	void rotarOjo();
	void mueve();
	void dibuja();
};
