#include "FabricaActorNivelAvanzado.h"

int FabricaActorNivelAvanzado::NumeroEnemigosA1 = -1;
int FabricaActorNivelAvanzado::NumeroEnemigosA2 = -1;
int FabricaActorNivelAvanzado::NumeroEnemigosA3 = -1;
int FabricaActorNivelAvanzado::NumeroEnemigosA4 = -1;
int FabricaActorNivelAvanzado::NumeroEnemigosA5 = -1;

Actor* FabricaActorNivelAvanzado::CrearTortuga(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) {
	NumeroEnemigosA1++;
	return new Tortuga(avatarTortuga, /*(anchoTortuga + (3 + rand() % 3)) * NumeroEnemigosB1*/_x, _y, _dx * 3, 0, 2, 5, m);
}//->

Actor* FabricaActorNivelAvanzado::CrearCocodrilo(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) {
	NumeroEnemigosA2++;
	return new Cocodrilo(avatarCocodrilo, /*(anchoTortuga + (3 + rand() % 3)) * NumeroEnemigosB1*/_x, _y, _dx * 3, 0, 4, 0, m);
}//<-

Actor* FabricaActorNivelAvanzado::CrearAuto1(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) {
	NumeroEnemigosA3++;
	return new Auto(avatarAuto1, /*(anchoTortuga + (3 + rand() % 3)) * NumeroEnemigosB1*/_x, _y, _dx * 3, 0, 3, 10, m);
}

Actor* FabricaActorNivelAvanzado::CrearAuto2(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) {
	NumeroEnemigosA4++;
	return  new Auto(avatarAuto2, /*(anchoTortuga + (3 + rand() % 3)) * NumeroEnemigosB1*/_x, _y, _dx * 3, 0, 1, 2, m);
}

Actor* FabricaActorNivelAvanzado::CrearTronco(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) {
	NumeroEnemigosA5++;
	return new Auto(avatarTronco, /*(anchoTortuga + (3 + rand() % 3)) * NumeroEnemigosB1*/_x, _y, _dx * 3, 0, 1, 8, m);
}

Actor* FabricaActorNivelAvanzado::CrearSapo(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) {
	return new Sapo(avatarSapo, _x, _y, _dx, _dy, 6, 7, m);
}