#include "Tortugas.h"
#include "Utilitarios.h"

Tortugas::Tortugas(vector<string> _avatar, int _x, int _y, int _dx, int _dy, int _limiteIzquierda, int _limiteDerecha, MapasCaracteres* _mce) :Actores(_avatar, _x, _y, _dx, _dy, 0, _mce->getAlto(), _limiteIzquierda, _limiteDerecha, _mce) {
}

