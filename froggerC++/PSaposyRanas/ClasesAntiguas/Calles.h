#pragma once
#include "Contenedores.h"
class Calles :
	public Contenedores
{
public:
	Calles(int _numero, string _nombre, int _x, int _y, int _ancho, int _alto, char _caracter) :Contenedores(_numero, _nombre, _x, _y, _ancho, _alto, _caracter) {}
	void Mostrar();
};

