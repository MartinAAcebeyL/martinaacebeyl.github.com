#pragma once
#include "SapoMovimiento.h"
class SapoMovimientoNormal :
    public SapoMovimiento
{
private:

public:
    SapoMovimientoNormal(vector<string> _avatar, int _x, int _y, int _dx, int _dy, int _limiteSuperior, int _limiteInferior, int _limiteIzquierda, int _limiteDerecha, MapasCaracteres* _mce);
    void Mostrar();
    void Mover();

    inline int ObtenerNumeroFilasAvatar() const { return avatar.size(); }
    inline int ObtenerNumeroCaracteresString(string cadenaCaracteres) const { return cadenaCaracteres.length(); }
    inline int ObtenerAreaAvatar() const { return filasAvatar * columnasAvatar; }
	vector<string> getAvatar() const { return avatar; }
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

	int getLimiteSuperior() { return limiteSuperior; }
	void setLimiteSuperior(int _limiteSuperior) { limiteSuperior = _limiteSuperior; }

	int getLimiteInferior() { return limiteInferior; }
	void setLimiteInferior(int _limiteInferior) { limiteInferior = _limiteInferior; }

	int getLimiteIzquierda() { return limiteIzquierda; }
	void setLimiteIzquierda(int _limiteIzquierda) { limiteIzquierda = _limiteIzquierda; }

	int getLimiteDerecha() { return limiteDerecha; }
	void setLimiteDerecha(int _limiteDerecha) { limiteDerecha = _limiteDerecha; }


};

