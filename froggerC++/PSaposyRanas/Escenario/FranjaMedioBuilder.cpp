#include "FranjaMedioBuilder.h"

Panel* FranjaMedioBuilder::getPanelFranjaEscenario(MapaElementosPantalla*_mce) {
	Panel* superficieFI = new Panel(1, 14, 118, 3, 5, 6, '*', 120, ' ', 0, _mce);
	superficieFI->setColorCaracterBorde(3);
	return superficieFI;
}

vector<Bloques*> FranjaMedioBuilder::getBloquesFranjaEscenario(MapaElementosPantalla* m){
	vector<Bloques*> bloquesFI;
	bloquesFI.push_back(new Bloques(1, 14, 20, 3,  '8', 8, 1, m));
	bloquesFI.push_back(new Bloques(50, 14, 10, 3, '8', 8, 1, m));
	bloquesFI.push_back(new Bloques(90, 14, 10, 3, '8', 8, 1, m));

	return bloquesFI;
}

vector<Espinas*> FranjaMedioBuilder::getEspinasFranjaEscenario(MapaElementosPantalla* m)
{
	return vector<Espinas*>();
}

//Tortuga* FranjaMedioBuilder::getTortugasFranjaEscenario(MapaElementosPantalla* _mce)
//{
//	return nullptr;
//}
//
//Auto* FranjaMedioBuilder::getAutosFranjaEscenario(MapaElementosPantalla* _mce)
//{
//	return nullptr;
//}
