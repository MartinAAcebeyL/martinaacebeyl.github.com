#pragma once
#include "BuilderFranjasEscenario.h"
class FranjaInicioBuilder :
	public BuilderFranjasEscenario
{
public:
	Panel* getPanelFranjaEscenario(MapaElementosPantalla* _mce);
	vector<Bloques*> getBloquesFranjaEscenario(MapaElementosPantalla*);
	vector<Espinas*> getEspinasFranjaEscenario(MapaElementosPantalla*);
	/*Tortuga* getTortugasFranjaEscenario(MapaElementosPantalla* _mce);
	Auto* getAutosFranjaEscenario(MapaElementosPantalla* _mce);*/
};

