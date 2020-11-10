#pragma once
#include "FabricaActores.h"
class FabricaActoresNivelIntermedio :
    public FabricaActores
{
private:
    static int NumeroEnemigos;
public:
    Actores* CrearEnemigo(int _x, int _y, int _dx, int _dy, MapasCaracteres* _mapaEscenario);
    Actores* CrearSapo(int _x, int _y, int _dx, int _dy, MapasCaracteres* _mapaEscenario);
};

