#include "FabricaActorNivelIntermedio.h"
; int FabricaActorNivelIntermedio::NumeroEnemigos1 = -1;
int FabricaActorNivelIntermedio::NumeroEnemigos2 = -1;
int FabricaActorNivelIntermedio::NumeroEnemigos3 = -1;
int FabricaActorNivelIntermedio::NumeroEnemigos4 = -1;
int FabricaActorNivelIntermedio::NumeroEnemigos5 = -1;

Actor* FabricaActorNivelIntermedio::CrearTortuga(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) {
	NumeroEnemigos1++;
	return new Tortuga(avatarTortuga, /*-(anchoTortuga + (3 + rand() % 3)) * NumeroEnemigos1*/_x, _y, _dx * 2, 0, 8, 1, m);
}//->

Actor* FabricaActorNivelIntermedio::CrearCocodrilo(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) {
	NumeroEnemigos2++;

	return new Cocodrilo(avatarCocodrilo, /*-(anchoTortuga + (3 + rand() % 3)) * NumeroEnemigos2*/_x, _y, _dx * 2, 0, 2, 0, m);
}//<-

Actor* FabricaActorNivelIntermedio::CrearAuto1(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) {
	NumeroEnemigos3++;
	return new Auto(avatarAuto1, /*-(anchoTortuga + (3 + rand() % 3)) * NumeroEnemigos3*/_x, _y, _dx * 2, 0, 12, 8, m);
}

Actor* FabricaActorNivelIntermedio::CrearAuto2(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) {
	NumeroEnemigos4++;
	return  new Auto(avatarAuto2, /*-(anchoTortuga + (3 + rand() % 3)) * NumeroEnemigos4*/_x, _y, _dx * 2, 0, 8, 6, m);
}

Actor* FabricaActorNivelIntermedio::CrearTronco(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) {
	NumeroEnemigos5++;
	return new Auto(avatarTronco, /*-(anchoTortuga + (3 + rand() % 3)) * NumeroEnemigos5*/_x, _y, _dx * 2, 0, 1, 3, m);
}

Actor* FabricaActorNivelIntermedio::CrearSapo(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) {
	return new Sapo(avatarSapo, _x, _y, _dx, _dy, 6, 7, m);
}