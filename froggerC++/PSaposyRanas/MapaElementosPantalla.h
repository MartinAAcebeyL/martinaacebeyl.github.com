#pragma once
#include<map>
#include "Utilitarios.h"
#include <iostream>

using namespace std;

class MapaElementosPantalla{
private:
	static int numeroMapasElementosPantalla;
	int numeroMapaElementosPantalla;
	map<int, ElementoPantalla>* mapaElementosPantalla;
	int anchoPantalla;
	int altoPantalla;

public:
	int getNumeroMapasElementosPantalla();

	MapaElementosPantalla(int _anchoPantalla, int _altoPantalla);

	void AgregarElementoPantalla(int _llave, ElementoPantalla _elementoPantalla);
	void ActualizarElementosPantalla(map<int, ElementoPantalla>* _elementosPantalla);
	void EliminarElementoPantalla(int _llave);
	ElementoPantalla ObtenerElementoPantalla(int _llave);
	void Mostrar();

	int getNumeroMapaElementosPantalla() { return numeroMapasElementosPantalla; }
	void setNumeroMapaElementosPantalla(int _numeroMapaElementosPantalla) { numeroMapaElementosPantalla = _numeroMapaElementosPantalla; }
	
	map<int, ElementoPantalla>* getMapaElementosPantalla() { return mapaElementosPantalla; }
	void setMapaElementosPantalla(map<int, ElementoPantalla>* _mapaElementosPantalla) { mapaElementosPantalla = _mapaElementosPantalla; }

	int getAnchoPantalla() { return anchoPantalla; }
	void setAncho(int _anchoPantalla) { anchoPantalla = _anchoPantalla; }

	int getAltoPantalla() { return altoPantalla; }
	void setAlto(int _altoPantalla) { altoPantalla = _altoPantalla; }
};