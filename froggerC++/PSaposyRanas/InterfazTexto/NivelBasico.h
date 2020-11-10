#pragma once
#include "SeleccionObjetoIT.h"
#include "../GameManager.h"
#include "../Actores/FabricaActorNivelBasico.h"

class NivelBasico :
    public SeleccionObjetoIT
{
public:
    FabricaActor* faNivelBasico = new FabricaActorNivelBasico;
    GameManager* gm01 = GameManager::getInstancia();
    void presEnter() {
      //  system("C:\\Users\\User\\Desktop\\PSaposyRanas\\Recursos\\basico.wav");
        gm01->IniciarJuego(faNivelBasico);
    }
    bool fin() {
        return gm01->fin();
    }
};

