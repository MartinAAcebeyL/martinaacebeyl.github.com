#include "Cocodrilos.h"
#include "Utilitarios.h"
#include "Sapos.h"

using namespace std;

Cocodrilos::Cocodrilos(vector<string> _avatar, int _x, int _y, int _dx, int _dy, int _limiteIzquierda, int _limiteDerecha, MapasCaracteres* _mce):Actores(_avatar, _x, _y, _dx, _dy, 0, _mce->getAlto(), _limiteIzquierda, _limiteDerecha, _mce) {
}

