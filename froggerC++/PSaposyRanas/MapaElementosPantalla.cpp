#include "MapaElementosPantalla.h"

int MapaElementosPantalla::numeroMapasElementosPantalla = 0;

int MapaElementosPantalla::getNumeroMapasElementosPantalla()
{
	return numeroMapasElementosPantalla;
}



MapaElementosPantalla::MapaElementosPantalla(int _anchoPantalla, int _altoPantalla) : anchoPantalla(_anchoPantalla), altoPantalla(_altoPantalla){
	mapaElementosPantalla = new map<int, ElementoPantalla>();
	numeroMapasElementosPantalla++;
	numeroMapaElementosPantalla = numeroMapasElementosPantalla;
}


void MapaElementosPantalla::AgregarElementoPantalla(int _llave, ElementoPantalla _elementoPantalla){
	mapaElementosPantalla->insert(pair<int, ElementoPantalla>(_llave, _elementoPantalla));
}

void MapaElementosPantalla::ActualizarElementosPantalla(map<int, ElementoPantalla>* _elementosPantalla){
	for (auto elemento = _elementosPantalla->begin(); elemento != _elementosPantalla->end(); ++elemento) {
		auto itmc = mapaElementosPantalla->find(elemento->first);
		if (itmc != mapaElementosPantalla->end()) {
			itmc->second = elemento->second;
		}else {
			mapaElementosPantalla->insert(pair<int, ElementoPantalla>(elemento->first, elemento->second));
		}
	}
}

void MapaElementosPantalla::EliminarElementoPantalla(int _llave) {
	mapaElementosPantalla->erase(_llave);
}

ElementoPantalla MapaElementosPantalla::ObtenerElementoPantalla(int _llave) {
	auto itmc = mapaElementosPantalla->find(_llave);
	if (itmc != mapaElementosPantalla->end()) {
		return itmc->second;
	}
	else {
		return ElementoPantalla{ 0, 0, 0, 0, 0 };
	}
}

void MapaElementosPantalla::Mostrar()
{
	/*Coordenada2D p = { 0, 0 };
	int i = 0;*/
	gotoxy(0, 29);
	cout << "Elementos de mapaElementosPantalla:" << endl;

	for (auto elemento = mapaElementosPantalla->begin(); elemento != mapaElementosPantalla->end(); ++elemento) {
		cout << "[ " << elemento->first << " : " << elemento->second.caracter << "],  ";
	}
}



