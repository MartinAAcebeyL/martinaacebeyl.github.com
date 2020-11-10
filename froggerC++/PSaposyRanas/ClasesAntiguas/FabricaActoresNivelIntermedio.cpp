#include "FabricaActoresNivelIntermedio.h"
#include "Cocodrilos.h"

int FabricaActoresNivelIntermedio::NumeroEnemigos = 0;

Actores* FabricaActoresNivelIntermedio::CrearEnemigo(int _x, int _y, int _dx, int _dy, MapasCaracteres* _mapaEscenario) {
	vector<string> avatarCocodrilo = {
		{"           /^^^^\\                "},
		{" /^^\\____/0      \\               "},
		{"(                 `-------^^^^^^^"},
		{" V^V^V^V^V^V^\\..................."} };

	NumeroEnemigos++;
	int anchoEnemigo = avatarCocodrilo[0].length();

	return new Cocodrilos(avatarCocodrilo, 119 + (anchoEnemigo * NumeroEnemigos) + 5, _y, _dx, 0, 1, 119, _mapaEscenario);
}

#include "Sapos.h"
Actores* FabricaActoresNivelIntermedio::CrearSapo(int _x, int _y, int _dx, int _dy, MapasCaracteres* _mapaEscenario) {
	vector<string> avatarSapo = { {"\\o/"}, {"_O_"} };
	return new Sapos(avatarSapo, _x, _y, _dx, _dy, 1, 27, 1, 119, 2, 3, _mapaEscenario);
}