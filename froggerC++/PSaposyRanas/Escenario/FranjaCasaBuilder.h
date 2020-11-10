#pragma once
#include "BuilderFranjasEscenario.h"
class FranjaCasaBuilder :
	public BuilderFranjasEscenario
{
	Panel* getPanelFranjaEscenario(MapaElementosPantalla*);
	vector<Bloques*> getBloquesFranjaEscenario(MapaElementosPantalla*);
	vector<Espinas*> getEspinasFranjaEscenario(MapaElementosPantalla*);
	/*Tortuga* getTortugasFranjaEscenario(MapaElementosPantalla*);
	Auto* getAutosFranjaEscenario(MapaElementosPantalla*);*/
};

