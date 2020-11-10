#pragma once
#include "Actores.h"
#include "Aguila.h"

class AguilaAdapter :
    public Actores, public Aguila
{
public:
    AguilaAdapter(vector<string> _avatar, int _x, int _y, int _dx, int _dy, int _limiteSuperior, int _limiteInferior, int _limiteIzquierda, int _limiteDerecha, MapasCaracteres* _mce);
    void Mostrar();
    void MostrarInformacionClase();
    
	inline string AvatarARepresentacionVisual(vector<string> _avatar) {
		string rvt = "";


		for (int i = 0; i < _avatar.size(); i++) {
			for (int j = 0; j < _avatar[i].length(); j++) {
				rvt = rvt + _avatar[i][j];
			} 
			//rvt = rvt + '\n';
		}

		return rvt;
	}
};

