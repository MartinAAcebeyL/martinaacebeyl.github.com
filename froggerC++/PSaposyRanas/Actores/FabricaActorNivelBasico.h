#pragma once
#include "FabricaActor.h"

class FabricaActorNivelBasico : public FabricaActor {
private:
    static int NumeroEnemigosB1;
    static int NumeroEnemigosB2;
    static int NumeroEnemigosB3;
    static int NumeroEnemigosB4;
    static int NumeroEnemigosB5;

public:
    Actor* CrearSapo(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m);

    Actor* CrearCocodrilo(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m);
    Actor* CrearAuto1(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m);
    Actor* CrearAuto2(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m);
    Actor* CrearTortuga(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m);
    Actor* CrearTronco(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m);
};