#include "Bloques.h"
#include "../Utilitarios.h"

void Bloques::Mostrar() {
	Coordenada2D xy;
	ElementoPantalla cc;
	cc.caracter = getCaracter();
	cc.colorCaracter = getColorCaracter();
	cc.colorFondo = getColorFondo();

	for (int i = 0; i < getAncho(); i++) {
		for (int j = 0; j < getAlto(); j++) {
			xy.x = getX() + i; xy.y = getY() + j;
			gotoxy(xy.x, xy.y);
			EstablecerColor(cc.colorFondo, cc.colorCaracter);
			cout << cc.caracter << endl;
			mapaElementosPantalla->insert(pair<int, ElementoPantalla>(Coordenada2DALlave(xy, mapeado->getAnchoPantalla()), cc));
		}
	}
	mapeado->ActualizarElementosPantalla(mapaElementosPantalla);
}