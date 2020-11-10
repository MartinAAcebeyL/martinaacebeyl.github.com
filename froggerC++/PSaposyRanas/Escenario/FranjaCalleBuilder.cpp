#include "FranjaCalleBuilder.h"

Panel* FranjaCalleBuilder::getPanelFranjaEscenario(MapaElementosPantalla*m){
	Panel* superficieFI = new Panel(1, 17, 118, 9, 0, 15, ' ', 120, ' ', 0, m);
	superficieFI->setColorFondoBorde(5);
	return superficieFI;
}

vector<Bloques*> FranjaCalleBuilder::getBloquesFranjaEscenario(MapaElementosPantalla* m) {
	vector<Bloques*> bloquesFI;
	bloquesFI.push_back(new Bloques(1,   21, 20, 1, '>', 10, 1, m));
	bloquesFI.push_back(new Bloques(30,  21, 10, 1, '=', 10, 1, m));
	bloquesFI.push_back(new Bloques(50,  21, 20, 1, '>', 10, 1, m));
	bloquesFI.push_back(new Bloques(80,  21, 10, 1, '=', 10, 1, m));
	bloquesFI.push_back(new Bloques(100, 21, 10, 1, '>', 10, 1, m));

	return bloquesFI;
}

vector<Espinas*> FranjaCalleBuilder::getEspinasFranjaEscenario(MapaElementosPantalla* m)
{
	return vector<Espinas*>();
}

//Tortuga* FranjaCalleBuilder::getTortugasFranjaEscenario(MapaElementosPantalla* m)
//{
//	return nullptr;
//}
//
//Auto* FranjaCalleBuilder::getAutosFranjaEscenario(MapaElementosPantalla* m)
//{
//	vector<string> avatarAuto = {
//		{"  ______     "},
//		{" /|_||_\\`.__ "},
//		{"(_  _    _  \\"},
//		{"=`-(_)--(_)-' "} };
//	int anchoEnemigo = avatarAuto[0].length();
//	return new Auto(avatarAuto, 10, 16, 1, 0, 1, 25, 1, 119, 5, 6, m);
//}
