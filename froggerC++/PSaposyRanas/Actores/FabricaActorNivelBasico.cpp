#include "FabricaActorNivelBasico.h"

int FabricaActorNivelBasico::NumeroEnemigosB1 = -1;
int FabricaActorNivelBasico::NumeroEnemigosB2 = -1;
int FabricaActorNivelBasico::NumeroEnemigosB3 = -1;
int FabricaActorNivelBasico::NumeroEnemigosB4 = -1;
int FabricaActorNivelBasico::NumeroEnemigosB5 = -1;

Actor* FabricaActorNivelBasico::CrearTortuga(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) {
	NumeroEnemigosB1++;
	return new Tortuga(avatarTortuga, /*(anchoTortuga + (3 + rand() % 3)) * NumeroEnemigosB1*/_x, _y, 1, 0, 5, 2, m);
}//->

Actor* FabricaActorNivelBasico::CrearCocodrilo(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) {
	NumeroEnemigosB2++;
	return new Cocodrilo(avatarCocodrilo, /*(anchoTortuga + (3 + rand() % 3)) * NumeroEnemigosB1*/_x, _y, -1, 0, 0, 4, m);
}//<-

Actor* FabricaActorNivelBasico::CrearAuto1(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) {
	NumeroEnemigosB3++;
	return new Auto(avatarAuto1, /*(anchoTortuga + (3 + rand() % 3)) * NumeroEnemigosB1*/_x, _y, 1, 0, 12, 3, m);
}

Actor* FabricaActorNivelBasico::CrearAuto2(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) {
	NumeroEnemigosB4++;
	return  new Auto(avatarAuto2, /*(anchoTortuga + (3 + rand() % 3)) * NumeroEnemigosB1*/_x, _y, -1, 0, 2, 8, m);
}

Actor* FabricaActorNivelBasico::CrearTronco(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) {
	NumeroEnemigosB5++;
	return new Auto(avatarTronco, /*(anchoTortuga + (3 + rand() % 3)) * NumeroEnemigosB1*/_x, _y, -1, 0, 8, 6, m);
}

Actor* FabricaActorNivelBasico::CrearSapo(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) {
	return new Sapo(avatarSapo, _x, _y, _dx, _dy, 6, 7, m);
}

