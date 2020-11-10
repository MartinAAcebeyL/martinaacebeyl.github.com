#pragma once
#include<iostream>
#include<vector>
#include<map>
#include "Utilitarios.h"
#include "MapasCaracteres.h"
using namespace std;

class SapoMovimiento
{
protected:
	vector<string> avatar;
	map<int, ElementoPantalla>* mapaElementoPantallaActor;
	int filasAvatar;
	int columnasAvatar;
	int x;
	int y;
	int dx;
	int dy;
	int limiteSuperior;
	int limiteInferior;
	int limiteIzquierda;
	int limiteDerecha;
	MapasCaracteres* mapaCaracteresEscenario;


public:
	SapoMovimiento(vector<string> _avatar, int _x, int _y, int _dx, int _dy, int _limiteSuperior, int _limiteInferior, int _limiteIzquierda, int _limiteDerecha);
	virtual void Mostrar() {};
	virtual void Mover() {};
};

