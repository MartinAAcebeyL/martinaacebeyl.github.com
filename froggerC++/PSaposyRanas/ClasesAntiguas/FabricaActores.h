#pragma once
#include "Actores.h"

class FabricaActores
{
public:
    virtual Actores* CrearEnemigo(int _x, int _y, int _dx, int _dy, MapasCaracteres* _mapaEscenario) = 0;
    virtual Actores* CrearSapo(int _x, int _y, int _dx, int _dy, MapasCaracteres* _mapaEscenario) = 0;
};

