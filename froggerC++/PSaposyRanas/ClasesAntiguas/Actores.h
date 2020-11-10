#pragma once
#include<iostream>
#include<vector>
#include "MapasCaracteres.h"
#include "Utilitarios.h"

using namespace std;

class Actores
{
	
private:
	static int numeroActores;

	int numero;
	string nombre;
	vector<string> avatar;
	MapasCaracteres* mapaCaracteresEscenario;
	map<int, char>* mapaCaracteresAvatar;
	map<int, ElementoPantalla>* mapaElementoPantallaActor;
	int filasAvatar;
	int columnasAvatar;
	int x;
	int y;
	int dx;
	int dy;
	int limiteSuperior;
	int limiteInferior;
	int limiteIzquierda;
	int limiteDerecha;

public:
	static int getNumeroActores();

	Actores(vector<string> _avatar, int _x, int _y, int _dx, int _dy, int _limiteSuperior, int _limiteInferior, int _limiteUzquierda, int _limiteDerecha, MapasCaracteres* _mce);
	virtual void Mostrar();
	virtual void Mover();
	virtual void MostrarInformacionClase() = 0;

	inline int ObtenerNumeroFilasAvatar() const { return avatar.size(); }
	inline int ObtenerNumeroCaracteresString(string cadenaCaracteres) const { return cadenaCaracteres.length(); }
	inline int ObtenerAreaAvatar() const { return filasAvatar * columnasAvatar; }
	void ActualizarMapaCaracteresAvatar(int _llave, char _caracterMapa);

	int getNumero() { return numero; }
	string getNombre() { return nombre; }
	vector<string> getAvatar() const { return avatar; }
	map<int, char>* getMapaCaracteresAvatar() { return mapaCaracteresAvatar; }
	void setMapaCaracteresAvatar(map<int, char>* _mapaCaracteresAvatar) { mapaCaracteresAvatar = _mapaCaracteresAvatar; }

	int getFilasAvatar() const { return filasAvatar; }
	int getColumnasAvatar() const { return columnasAvatar; }
	int getX() const { return x; }
	int getY() const { return y; }
	int getDX() const { return dx; }
	int getDY() const { return dy; }

	void setX(int _x) { this->x = _x; }
	void setY(int _y) { this->y = _y; }
	void setDX(int _dx) { this->dx = _dx; }
	void setDY(int _dy) { this->dy = _dy; }

	void setNumero(int _numero) { numero = _numero; }
	void setNombre(string _nombre) { nombre = _nombre; }

	int getLimiteSuperior() { return limiteSuperior; }
	void setLimiteSuperior(int _limiteSuperior) { limiteSuperior = _limiteSuperior; }

	int getLimiteInferior() { return limiteInferior; }
	void setLimiteInferior(int _limiteInferior) { limiteInferior = _limiteInferior; }

	int getLimiteIzquierda() { return limiteIzquierda; }
	void setLimiteIzquierda(int _limiteIzquierda) { limiteIzquierda = _limiteIzquierda; }

	int getLimiteDerecha() { return limiteDerecha; }
	void setLimiteDerecha(int _limiteDerecha) { limiteDerecha = _limiteDerecha; }

	bool DeterminarColision(map<int, char>* _mapacarActeresAvatarSegundoActor);

};

