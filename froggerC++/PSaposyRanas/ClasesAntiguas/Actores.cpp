#include "Actores.h"
#include "Utilitarios.h"

int Actores::numeroActores = 0;

int Actores::getNumeroActores()
{
	return numeroActores;
}

Actores::Actores(vector<string> _avatar, int _x, int _y, int _dx, int _dy, int _limiteSuperior, int _limiteInferior, int _limiteIzquierda, int _limiteDerecha, MapasCaracteres* _mce) {
	nombre = "";
	avatar = _avatar;
	filasAvatar = ObtenerNumeroFilasAvatar();
	
	int numeroColumnas = 0;
	columnasAvatar = 0;
	 
	for (int i = 0; i < filasAvatar; i++) {
		numeroColumnas = ObtenerNumeroCaracteresString(avatar[i]);
		if (numeroColumnas > columnasAvatar) {
			columnasAvatar = numeroColumnas;
		}
	}
	
	x = _x;
	y = _y;
	dx = _dx;
	dy = _dy;

	limiteSuperior = _limiteSuperior;
	limiteInferior = _limiteInferior;
	limiteIzquierda = _limiteIzquierda;
	limiteDerecha = _limiteDerecha;
	mapaCaracteresEscenario = new MapasCaracteres();
	mapaCaracteresEscenario = _mce;
	mapaCaracteresAvatar = new map<int, char>();

	numeroActores++;
	numero = numeroActores;
}

void Actores::Mostrar() {
	
	mapaCaracteresAvatar->clear();
	Coordenada2D p = { 0, 0 };
	auto avatarActor = getAvatar();
	for (int i = 0; i < getFilasAvatar(); i++) {
		for (int j = 0; j < ObtenerNumeroCaracteresString(avatarActor[i]); j++) {
			if (getX() + j >= limiteIzquierda && getX() + j < limiteDerecha && getY() + i >= limiteSuperior && getY() + i < limiteInferior) {
				p.x = getX() + j;
				p.y = getY() + i;
				gotoxy(p.x, p.y);
				cout << avatarActor[i][j] << endl;
				mapaCaracteresAvatar->insert(pair<int, char>(Coordenada2DALlave(p, mapaCaracteresEscenario->getAncho()), avatarActor[i][j]));
				//ActualizarMapaCaracteresAvatar(Coordenada2DALlave(p, mapaCaracteresEscenario->getAncho()), avatarActor[i][j]);
			}
		}
	}
}

void Actores::ActualizarMapaCaracteresAvatar(int _llave, char _caracterMapa)
{
	auto itmc = mapaCaracteresAvatar->find(_llave);
	if (itmc != mapaCaracteresAvatar->end()) {
		itmc->second = _caracterMapa;
	}
	else {

		mapaCaracteresAvatar->insert(pair<int, char>(_llave, _caracterMapa));
	}
}


void Actores::Mover()
{
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
			setY(getLimiteSuperior()- getFilasAvatar());
		}
	}


	Mostrar();
}

bool Actores::DeterminarColision(map<int, char>* _mapaCaracteresAvatarSegundoActor)
{
	for (auto elemento = _mapaCaracteresAvatarSegundoActor->begin(); elemento != _mapaCaracteresAvatarSegundoActor->end(); ++elemento) {
		auto itmc = mapaCaracteresAvatar->find(elemento->first);
		if (itmc != mapaCaracteresAvatar->end()) {
			return false;
		}
		else {
			return true;
		}
	}

}
