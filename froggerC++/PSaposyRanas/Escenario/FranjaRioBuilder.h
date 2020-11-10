#pragma once
#include "BuilderFranjasEscenario.h"
class FranjaRioBuilder :public BuilderFranjasEscenario{
	Panel* getPanelFranjaEscenario(MapaElementosPantalla*);
	vector<Bloques*> getBloquesFranjaEscenario(MapaElementosPantalla*);
	vector<Espinas*> getEspinasFranjaEscenario(MapaElementosPantalla*);
};