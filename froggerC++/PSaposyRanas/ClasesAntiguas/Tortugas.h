#pragma once
#include "Actores.h"
class Tortugas :
	public Actores
{
public:
	Tortugas(vector<string> _avatar, int _x, int _y, int _dx, int _dy, int _limiteIzquierda, int _limiteDerecha, MapasCaracteres* _mce);
	void MostrarInformacionClase() { };
};

