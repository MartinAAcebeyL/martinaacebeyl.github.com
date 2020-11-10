#pragma once
#include "BuilderFranjasEscenario.h"
class FranjaMedioBuilder : public BuilderFranjasEscenario {
	Panel* getPanelFranjaEscenario(MapaElementosPantalla*);
	vector<Bloques*> getBloquesFranjaEscenario(MapaElementosPantalla* _mc);
	vector<Espinas*> getEspinasFranjaEscenario(MapaElementosPantalla* _mc);
	/*Tortuga* getTortugasFranjaEscenario(MapaElementosPantalla*);
	Auto* getAutosFranjaEscenario(MapaElementosPantalla*);*/
};