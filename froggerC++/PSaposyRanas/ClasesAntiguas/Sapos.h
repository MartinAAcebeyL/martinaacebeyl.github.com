#pragma once
#include<iostream>
#include "Actores.h"
#include "Cocodrilos.h"
using namespace std;

class Sapos : public Actores
{

	//friend class Cocodrilos;
private:
	int salto;
	
	int numeroVidas;
public:
	Sapos(vector<string> _avatar, int _x, int _y, int _dx, int _dy, 
		int _limiteSuperior, int _limiteInferior, int _limiteIzquierdo, int _limiteDerecho, int _salto, int _numeroVidas, MapasCaracteres* _mce );
	void MostrarInformacionClase() { };
	void Comer();
};

