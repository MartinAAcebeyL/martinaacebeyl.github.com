#pragma once
#include"../InterfazTexto/Panel.h"
#include "Bloques.h"
#include "Espinas.h"
#include "../Actores/Tortuga.h"
#include "../Actores/Auto.h"
#include <vector>

class FranjasEscenario{
private:
	Panel* panelFE;
	vector<Bloques*> bloquesFE;
	vector<Espinas*> espinasFE;
public:
	void Mostrar();
	Panel* getPanelFE() { return panelFE; }
	vector<Bloques*> getBloquesFE() { return bloquesFE; }
	vector<Espinas*> getEspinasFE() { return espinasFE; }
	void setPanelFE(Panel* _panelFE) { panelFE = _panelFE; }

	void setBloquesFE(vector<Bloques*> _bloquesFE) { bloquesFE = _bloquesFE; }
	void setEspinasFE(vector<Espinas*> _espinasFE) { espinasFE = _espinasFE; }
};