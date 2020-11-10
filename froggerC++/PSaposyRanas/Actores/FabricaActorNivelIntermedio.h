#pragma once
#include "FabricaActor.h"
class FabricaActorNivelIntermedio :
    public FabricaActor {
private:
    static int NumeroEnemigos1;
    static int NumeroEnemigos2;
    static int NumeroEnemigos3;
    static int NumeroEnemigos4;
    static int NumeroEnemigos5;
public:
    Actor* CrearSapo(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m);

    Actor* CrearCocodrilo(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m);
    Actor* CrearAuto1(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m);
    Actor* CrearAuto2(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m);
    Actor* CrearTortuga(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m);
    Actor* CrearTronco(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m);
};