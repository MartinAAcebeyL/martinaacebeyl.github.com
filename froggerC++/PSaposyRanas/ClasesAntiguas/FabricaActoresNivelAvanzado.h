#pragma once
#include "FabricaActores.h"
class FabricaActoresNivelAvanzado :
    public FabricaActores
{
    Actores* CrearEnemigo(int _x, int _y, int _dx, int _dy, MapasCaracteres* _mapaEscenario);
    Actores* CrearSapo(int _x, int _y, int _dx, int _dy, MapasCaracteres* _mapaEscenario);
};

