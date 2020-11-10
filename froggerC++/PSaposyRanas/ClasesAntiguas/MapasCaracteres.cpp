#include "MapasCaracteres.h"
#include <iostream>
using namespace std;

int MapasCaracteres::numeroMapasCaracteres = 0;

int MapasCaracteres::getNumeroMapasCaracteres()
{
	return numeroMapasCaracteres;
}

MapasCaracteres::MapasCaracteres() 
{
	mapaCaracteres = new map<int, char>();
	numeroMapasCaracteres++;
	id = numeroMapasCaracteres;
}



MapasCaracteres::MapasCaracteres(int _ancho, int _alto): ancho(_ancho), alto(_alto)
{
	mapaCaracteres = new map<int, char>();
	numeroMapasCaracteres++;
	id = numeroMapasCaracteres;
}


void MapasCaracteres::AgregarElemento(int _llave, char _caracter)
{
	mapaCaracteres->insert(pair<int, char>(_llave, _caracter));
}

void MapasCaracteres::ActualizarMapaCaracteres(map<int, char>* _elementosActualizar)
{
	for (auto elemento = _elementosActualizar->begin(); elemento != _elementosActualizar->end(); ++elemento) {
		auto itmc = mapaCaracteres->find(elemento->first);
		if (itmc != mapaCaracteres->end()) {
			itmc->second = elemento->second;
		}
		else {
			
			mapaCaracteres->insert(pair<int, char>(elemento->first, elemento->second));
		}
	}
}

void MapasCaracteres::EliminarElemento(int _llave) {
	mapaCaracteres->erase(_llave);
}


char MapasCaracteres::ObtenerCaracter(int _llave) {
	auto itmc = mapaCaracteres->find(_llave);
	if (itmc != mapaCaracteres->end()) {
		return itmc->second;
	}
	else{
		return NULL;
	}
}

void MapasCaracteres::Mostrar()
{
	/*Coordenada2D p = { 0, 0 };
	int i = 0;*/
	gotoxy(0, 29);
	cout << "Elementos de mapaCaracteres:" << endl;

	for (auto elemento = mapaCaracteres->begin(); elemento != mapaCaracteres->end(); ++elemento) {
		cout << "[ " << elemento->first << " : " << elemento->second << "],  ";
	}
}



