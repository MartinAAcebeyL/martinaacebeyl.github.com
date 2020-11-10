#pragma once
#include "Actor.h"
class Sapo : public Actor {
private:
public:
	Sapo(vector<string> _avatar, int _x, int _y, int _dx, int _dy,
		int _colorCaracter, int _colorFondo, MapaElementosPantalla* m);
	int dano() { return 0; }

};