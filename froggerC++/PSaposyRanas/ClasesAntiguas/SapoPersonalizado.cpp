#include "SapoPersonalizado.h"

SapoPersonalizado::SapoPersonalizado(vector<string> _avatar, int _x, int _y, int _dx, int _dy, int _limiteSuperior, int _limiteInferior, int _limiteIzquierda, int _limiteDerecha):
	avatar(_avatar), x(_x), y(_y), dx(_dx), dy(_dy), limiteInferior(_limiteInferior), limiteSuperior(_limiteSuperior), limiteIzquierda(_limiteIzquierda),
	limiteDerecha(_limiteDerecha)
{
	sapoMovimiento = new SapoMovimiento(_avatar, _x, _y, _dx, _dy, _limiteSuperior, _limiteInferior, _limiteIzquierda, _limiteDerecha);
}
