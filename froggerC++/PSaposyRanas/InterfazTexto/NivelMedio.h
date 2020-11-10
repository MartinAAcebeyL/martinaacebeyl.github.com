#pragma once
#include "SeleccionObjetoIT.h"
#include "../GameManager.h"
#include "../Actores/FabricaActorNivelIntermedio.h"
class NivelMedio :
    public SeleccionObjetoIT
{
public:
	FabricaActor* faNivelIntermedio = new FabricaActorNivelIntermedio;
	GameManager* gm01 = GameManager::getInstancia();
	void presEnter() {
		//system("C:\\Users\\User\\Desktop\\PSaposyRanas\\Recursos\\medio.wav");
		gm01->IniciarJuego(faNivelIntermedio);
	}
	bool fin() {
		return gm01->fin();
	}
};

