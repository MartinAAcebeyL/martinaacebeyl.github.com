#pragma once
#include<iostream>
#include <string>
//#include "MapasCaracteres.h"
#include <map>
#include "Utilitarios.h"

using namespace std;

class Superficies
{
private:
	static int numeroSuperficies;
	int numero;
	string nombre;
	int anchoPantalla;
	int x;
	int y;
	int ancho;
	int alto;
	int borde;
	char caracterFondo;
	int colorCaracterFondo;
	int colorFondoFondo;
	char caracterBorde;
	int colorCaracterBorde;
	int colorFondoBorde;
	//MapasCaracteres* mapaCaracteres;
	map<int, ElementoPantalla>* mapaElementosPantalla;
public:
	Superficies(int _anchoPantalla, int _x, int _y, int _ancho, 
		int _alto, int _borde, char _caracterFondo,
		char _caracterBorde);
	void GenerarBordes();
	void GenerarFondo();
	virtual void Mostrar();
	static int getNumeroSuperficies() { return numeroSuperficies; }

	void setNombre(string _nombre) { nombre = _nombre; }
	void setAnchoPantalla(int _anchoPantalla) { anchoPantalla = _anchoPantalla; }
	void setX(int _x) { x = _x; }
	void setY(int _y) { y = _y; }
	void setAncho(int _ancho) { ancho = _ancho; }
	void setAlto(int _alto) { alto = _alto; }
	void setBorde(int _borde) { borde = _borde; }
	void setCaracterFondo(char _caracterFondo) { caracterFondo = _caracterFondo; }
	void setColorCaracterFondo(int _colorCaracterFondo, int _colorFondoFondo) { colorCaracterFondo = _colorCaracterFondo; colorFondoFondo = _colorFondoFondo; }
	void setCaracterBorde(char _caracterBorde) { caracterBorde = _caracterBorde; }
	void setColorCaracterBorde(int _colorCaracterBorde, int _colorFondoBorde) { colorCaracterBorde = _colorCaracterBorde; colorFondoBorde = _colorFondoBorde; }
	void setMapaElementosPantalla(map<int, ElementoPantalla>* _mapaElementosPantalla) {	mapaElementosPantalla = _mapaElementosPantalla;	}

	string getNombre() { return nombre; }
	int setAnchoPantalla() { return anchoPantalla; }
	int getX() { return x; }
	int getY() { return y; }
	int getAncho() { return ancho; }
	int getAlto() { return alto; }
	int getBorde() { return borde; }
	char getCaracterFondo() { return caracterFondo; }
	int getColorCaracterFondo() { return colorCaracterFondo; }
	int getColorFondoFondo() { return colorFondoFondo; }
	char getCaracterBorde() { return caracterBorde; }
	int getColorCaracterBorde() { return colorCaracterBorde; }
	int getColorFondoBorde() { return colorFondoBorde; }
	map<int, ElementoPantalla>* getMapaElementosPantalla() { return mapaElementosPantalla; }

};

