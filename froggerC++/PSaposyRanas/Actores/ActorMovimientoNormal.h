#pragma once
#include "ActorMovimiento.h"
class ActorMovimientoNormal :
    public ActorMovimiento
{
public:
   // ActorMovimientoNormal(vector<string>* _avatar, int* _x, int* _y, int* _dx, int* _dy, int* _limiteSuperior, int* _limiteInferior, int* _limiteIzquierda, int* _limiteDerecha);
    ActorMovimientoNormal(vector<string>* _avatar, int* _x, int* _y, int* _dx, int* _dy,
        int* _colorCaracter, int* _colorFondo, MapaElementosPantalla* _mce);

    void Mostrar();
    void Mover();
};

