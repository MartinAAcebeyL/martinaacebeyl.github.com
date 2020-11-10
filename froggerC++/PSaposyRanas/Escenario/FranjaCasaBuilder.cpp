#include "FranjaCasaBuilder.h"

Panel* FranjaCasaBuilder::getPanelFranjaEscenario(MapaElementosPantalla*m){
	Panel* superficieFI = new Panel(1, 1, 118, 2, 1,1,'#',120, ' ',0,m);
	superficieFI->setColorCaracterBorde(5);
	return superficieFI;
}

vector<Bloques*> FranjaCasaBuilder::getBloquesFranjaEscenario(MapaElementosPantalla* m)
{
	vector<Bloques*> bloquesFI;
	bloquesFI.push_back(new Bloques(1, 1, 18, 2, '°',  11, 1, m));
	bloquesFI.push_back(new Bloques(25, 1, 19, 2, '°', 11, 1, m));
	bloquesFI.push_back(new Bloques(50, 1, 19, 2, '°', 11, 1, m));
	bloquesFI.push_back(new Bloques(75, 1, 19, 2, '°', 11, 1, m));
	bloquesFI.push_back(new Bloques(100, 1, 18, 2, '°', 11, 1, m));

	return bloquesFI;
}
vector<Espinas*> FranjaCasaBuilder::getEspinasFranjaEscenario(MapaElementosPantalla* m)
{
	return vector<Espinas*>();
}

//Tortuga* FranjaCasaBuilder::getTortugasFranjaEscenario(MapaElementosPantalla* m)
//{
//	return nullptr;
//}
//
//Auto* FranjaCasaBuilder::getAutosFranjaEscenario(MapaElementosPantalla* m)
//{
//	return nullptr;
//}
