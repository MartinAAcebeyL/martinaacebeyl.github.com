#pragma once
#include "Actores.h"
#include <vector>

class Cocodrilos :
	public Actores
{
	
public:
	Cocodrilos(vector<string> _avatar, int _x, int _y, int _dx, int _dy, int _limiteIzquierda, int _limiteDerecha, MapasCaracteres* _mce);
	void MostrarInformacionClase() { };
};

