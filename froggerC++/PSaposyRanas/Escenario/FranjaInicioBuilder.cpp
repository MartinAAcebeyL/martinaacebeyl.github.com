#include "FranjaInicioBuilder.h"

Panel* FranjaInicioBuilder::getPanelFranjaEscenario(MapaElementosPantalla* _mce) {
	Panel* panelFI = new Panel(1, 26, 118, 3, 5, 6, '*', 120, ' ', 0, _mce);
	return panelFI;
}

vector<Bloques*> FranjaInicioBuilder::getBloquesFranjaEscenario(MapaElementosPantalla* m)
{
	vector<Bloques*> bloquesFI;
	bloquesFI.push_back(new Bloques(1, 26, 20, 2, 'B', 5, 2, m));
	bloquesFI.push_back(new Bloques(50, 26, 10, 2, 'B', 5, 2, m));
	bloquesFI.push_back(new Bloques(99, 26, 20, 2, 'B', 5, 2, m));

	return bloquesFI;
}

vector<Espinas*> FranjaInicioBuilder::getEspinasFranjaEscenario(MapaElementosPantalla* m){
	vector<Espinas*> espinasFI;
	espinasFI.push_back(new Espinas(22, 26, 1, 1, 'X', 1, 3, m));
	espinasFI.push_back(new Espinas(61, 26, 1, 1, 'X', 1, 3, m));
	espinasFI.push_back(new Espinas(78, 26, 1, 1, 'X', 1, 3, m));
	return espinasFI;
}

//Tortuga* FranjaInicioBuilder::getTortugasFranjaEscenario(MapaElementosPantalla* _mce)
//{
//	return nullptr;
//}
//
//Auto* FranjaInicioBuilder::getAutosFranjaEscenario(MapaElementosPantalla* _mce)
//{
//	return nullptr;
//}


