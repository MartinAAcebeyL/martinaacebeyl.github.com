#pragma once
#include<map>
#include "Utilitarios.h"

using namespace std;


class MapasCaracteres
{
private:
	static int numeroMapasCaracteres;
	int id;
	map<int, char>* mapaCaracteres;
	int x;
	int y;
	int ancho;
	int alto;
public:
	int getNumeroMapasCaracteres();
	
	MapasCaracteres(int _ancho, int _alto);
	MapasCaracteres();

	void AgregarElemento(int _llave, char _caracter);
	void ActualizarMapaCaracteres(map<int, char>* _elementosActualizar);
	void EliminarElemento(int _llave);
	char ObtenerCaracter(int _llave);
	void Mostrar();

	int getId() { return id; }
	map<int, char>* getMapaCaracteres() { return mapaCaracteres; }
	int getAncho() { return ancho; }
	int getAlto() { return alto; }

	void setId(int _id) { id = _id; }
	void setMapaCaracteres(map<int, char>* _mapaCaracteres) { mapaCaracteres = _mapaCaracteres; }
	void setAncho(int _ancho) { ancho = _ancho; }
	void setAlto(int _alto) { alto = _alto; }

};

