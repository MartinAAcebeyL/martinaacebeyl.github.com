#pragma once
#include "SeleccionObjetoIT.h"
#include "../GameManager.h"
#include "../Actores/FabricaActorNivelAvanzado.h"
#include <Windows.h>
class NivelAvanzado :
	public SeleccionObjetoIT
{
public:
	FabricaActor* faNivelAvanzado = new FabricaActorNivelAvanzado;
	GameManager* gm01 = GameManager::getInstancia();
	void presEnter() {
		//system("C:\\Users\\User\\Desktop\\PSaposyRanas\\Recursos\\avanzado.wav");
		gm01->IniciarJuego(faNivelAvanzado);
	}
	bool fin() {
		return gm01->fin();
	}
};

