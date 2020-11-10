#include "FranjaRioBuilder.h"

Panel* FranjaRioBuilder::getPanelFranjaEscenario(MapaElementosPantalla* _mce)
{
	Panel* superficieFI = new Panel(1, 3, 118, 11, 1, 128, 178, 120, ' ', 0, _mce);

	return superficieFI;
}

vector<Bloques*> FranjaRioBuilder::getBloquesFranjaEscenario(MapaElementosPantalla* m) {
	vector<Bloques*> bloquesFI;
	return bloquesFI;
}

vector<Espinas*> FranjaRioBuilder::getEspinasFranjaEscenario(MapaElementosPantalla* m) {
	return vector<Espinas*>();
}

//Tortuga* FranjaRioBuilder::getTortugasFranjaEscenario(MapaElementosPantalla* _mce)
//{
//	vector<string> avatarTortuga = {
//		{" ______   ____"},
//		{"/      \\ | o |"},
//		{"|      |/___\\|"},
//		{"|______ /     "} };
//	int anchoEnemigo = avatarTortuga[0].length();
//	return new Tortuga(avatarTortuga, 25, 3, 1, 0, 1, 25, 1, 119, 6, 7, _mce);
//}
//
//Auto* FranjaRioBuilder::getAutosFranjaEscenario(MapaElementosPantalla* _mce){
//	return nullptr;
//}
