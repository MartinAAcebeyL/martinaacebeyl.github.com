#include "CubosEnergia.h"
#include "../Utilitarios.h"

void CubosEnergia::Mostrar() {
	Coordenada2D xy;
	ElementoPantalla cc;
	cc.caracter = getCaracter();
	cc.colorCaracter = getColorCaracter();
	cc.colorFondo = getColorFondo();
	xy.x = getX(); xy.y = getY();
	gotoxy(xy.x, xy.y);
	EstablecerColor(cc.colorFondo, cc.colorCaracter);
	cout << cc.caracter << endl;
	mapaElementosPantalla->insert(pair<int, ElementoPantalla>(Coordenada2DALlave(xy, mapeado->getAnchoPantalla()), cc));
	mapeado->ActualizarElementosPantalla(mapaElementosPantalla);
}
