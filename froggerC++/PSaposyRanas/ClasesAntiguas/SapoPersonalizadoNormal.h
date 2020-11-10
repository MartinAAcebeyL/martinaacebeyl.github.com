#pragma once
#include "SapoPersonalizado.h"
#include "SapoMovimientoNormal.h"
#include "MapasCaracteres.h"
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class SapoPersonalizadoNormal :
    public SapoPersonalizado
{
public:
    SapoPersonalizadoNormal(vector<string> _avatar, int _x, int _y, int _dx, int _dy, int _limiteSuperior, int _limiteInferior, int _limiteIzquierda, int _limiteDerecha) {
        MapasCaracteres* _mce;
        sapoMovimiento = new SapoMovimientoNormal(_avatar, _x, _y, _dx, _dy, _limiteSuperior, _limiteInferior, _limiteIzquierda, _limiteDerecha, _mce);
    }
};

