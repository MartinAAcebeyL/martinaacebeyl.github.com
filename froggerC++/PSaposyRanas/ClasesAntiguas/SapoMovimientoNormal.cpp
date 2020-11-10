#include "SapoMovimientoNormal.h"

SapoMovimientoNormal::SapoMovimientoNormal(vector<string> _avatar, int _x, int _y, int _dx, int _dy, int _limiteSuperior, int _limiteInferior, int _limiteIzquierda, int _limiteDerecha, MapasCaracteres* _mce):
	SapoMovimiento(_avatar, _x, _y, _dx, _dy, _limiteSuperior, _limiteInferior, _limiteIzquierda, _limiteDerecha)
{
}

void SapoMovimientoNormal::Mostrar() {
	//mapaCaracteresAvatar->clear();
	Coordenada2D p = { 0, 0 };
	auto avatarActor = avatar;
	for (int i = 0; i < getFilasAvatar(); i++) {
		for (int j = 0; j < ObtenerNumeroCaracteresString(avatarActor[i]); j++) {
			if (getX() + j >= limiteIzquierda && getX() + j < limiteDerecha && getY() + i >= limiteSuperior && getY() + i < limiteInferior) {
				p.x = getX() + j;
				p.y = getY() + i;
				gotoxy(p.x, p.y);
				cout << avatarActor[i][j] << endl;
				//mapaCaracteresAvatar->insert(pair<int, char>(Coordenada2DALlave(p, mapaCaracteresEscenario->getAncho()), avatarActor[i][j]));
				//ActualizarMapaCaracteresAvatar(Coordenada2DALlave(p, mapaCaracteresEscenario->getAncho()), avatarActor[i][j]);
			}
		}
	}
}

void SapoMovimientoNormal::Mover(){
	int llaveActual = 0;
	Coordenada2D p = { 0, 0 };

	if (getDX() < 0) {
		p.x = getX() + getColumnasAvatar() - 1;
		if (p.x >= getLimiteIzquierda() && p.x < getLimiteDerecha()) {
			for (int i = getY(); i < (getY() + getFilasAvatar()); i++) {
				p.y = i;
				llaveActual = Coordenada2DALlave(p, mapaCaracteresEscenario->getAncho());
				gotoxy(p.x, p.y);
				cout << mapaCaracteresEscenario->ObtenerCaracter(llaveActual);
			}
		}
	}

	if (getDX() > 0) {
		p.x = getX();
		if (p.x >= getLimiteIzquierda() && p.x < getLimiteDerecha()) {
			for (int i = getY(); i < (getY() + getFilasAvatar()); i++) {
				p.y = i;
				llaveActual = Coordenada2DALlave(p, mapaCaracteresEscenario->getAncho());
				gotoxy(p.x, p.y);
				cout << mapaCaracteresEscenario->ObtenerCaracter(llaveActual);
			}
		}  
	}

	if (getDY() < 0) {
		p.y = getY() + getFilasAvatar() - 1;
		if (p.y >= getLimiteSuperior() && p.y < getLimiteInferior()) {
			for (int i = getX(); i <= (getX() + getColumnasAvatar()); i++) {
				p.x = i;
				llaveActual = Coordenada2DALlave(p, mapaCaracteresEscenario->getAncho());
				gotoxy(p.x, p.y);
				cout << mapaCaracteresEscenario->ObtenerCaracter(llaveActual);
			}
		}
	}

	if (getDY() > 0) {
		p.y = getY();
		if (p.y >= getLimiteSuperior() && p.y < getLimiteInferior()) {
			for (int i = getX(); i <= (getX() + getColumnasAvatar()); i++) {
				p.x = i;
				llaveActual = Coordenada2DALlave(p, mapaCaracteresEscenario->getAncho());
				gotoxy(p.x, p.y);
				cout << mapaCaracteresEscenario->ObtenerCaracter(llaveActual);
			}
		}
	}

	setX(getX() + getDX());

	if (getDX() < 0) {
		if (getX() + getColumnasAvatar() < getLimiteIzquierda()) {
			setX(getLimiteDerecha());
		}
	}

	if (getDX() > 0) {
		if (getX() > getLimiteDerecha()) {
			setX(getLimiteIzquierda() - getColumnasAvatar());
		}
	}

	setY(getY() + getDY());

	if (getDY() < 0) {
		if (getY() + getFilasAvatar() < getLimiteSuperior()) {
			setY(getLimiteInferior());
		}
	}

	if (getDY() > 0) {
		if (getY() > getLimiteInferior()) {
			setY(getLimiteSuperior() - getFilasAvatar());
		}
	}


	Mostrar();


}

