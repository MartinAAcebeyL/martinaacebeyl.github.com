#pragma once
#include <iostream>
using namespace std;

class Contenedores
{
protected:
	int numero;
	string nombre;
	int x;
	int y;
	int ancho;
	int alto;
	char caracter;
public:
	Contenedores(int _numero, string _nombre, int _x, int _y, int _ancho, int _alto, char _caracter);
	virtual void Mostrar() = 0;
};

