#include "FabricaActoresNivelBasico.h"
#include "Tortugas.h"
#include "MapasCaracteres.h"
#include "Sapos.h"

int FabricaActoresNivelBasico::NumeroEnemigos = 0;

Actores* FabricaActoresNivelBasico::CrearEnemigo(int _x, int _y, int _dx, int _dy, MapasCaracteres* _mapaEscenario) {
	vector<string> avatarTortuga = {
		{" ______   ____"},
		{"/      \\ | o |"},
		{"|      |/___\\|"},
		{"|______ /     "} };
	NumeroEnemigos++;
	int anchoEnemigo = avatarTortuga[0].length();

	return new Tortugas(avatarTortuga, -(anchoEnemigo * NumeroEnemigos) - 5, _y, _dx, 0, 1, 119, _mapaEscenario);
}

Actores* FabricaActoresNivelBasico::CrearSapo(int _x, int _y, int _dx, int _dy, MapasCaracteres* _mapaEscenario) {
	vector<string> avatarSapo = { {"\\o/"}, {"_O_"} };
	return new Sapos(avatarSapo, _x, _y, _dx, _dy, 1, 27, 1, 119, 2, 3, _mapaEscenario);
}