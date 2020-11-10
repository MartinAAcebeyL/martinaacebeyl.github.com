#include "AguilaAdapter.h"

AguilaAdapter::AguilaAdapter(vector<string> _avatar, int _x, int _y, int _dx, int _dy, int _limiteSuperior, int _limiteInferior, int _limiteIzquierda, int _limiteDerecha, MapasCaracteres* _mce):Aguila("NombreAguila", AvatarARepresentacionVisual(_avatar), _x, _x + 5, _y, _y), Actores(_avatar, _x, _y, _dx, _dy, _limiteSuperior, _limiteInferior, _limiteIzquierda, _limiteDerecha, _mce){

}

void AguilaAdapter::Mostrar()
{
	VisualizarEnPantalla();
}

void AguilaAdapter::MostrarInformacionClase()
{
}

