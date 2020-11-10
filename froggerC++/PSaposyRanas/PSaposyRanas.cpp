#include <iostream>
// #include "Mosca.h"
#include "Utilitarios.h"
#include <conio.h>
#include <stdio.h>
//#include "FabricaActores.h"
//#include "FabricaActoresNivelBasico.h"
//#include "FabricaActoresNivelIntermedio.h"
#include "InterfazTexto/Interface.h"
#include "InterfazTexto/Panel.h"
#include "GameManager.h"

using namespace std;
Interface pantalla;

int main(){

	OcultarCursor();
	//Panel panelPrincipal(0, 0, 120, 25, 5, 1, ' ', 2, 3, 4, NULL);
	//panelPrincipal.Mostrar();
	/*pantalla = Interface();
	pantalla.IniciarInterface();*/
	Interface().IniciarInterface();
	//_getch();

	//		Aplicando el nuevo abstract factory (usado para hacer los diferentes niveles del juego) usando 
	//		los nuevos actores echos con brigge 	
	//FabricaActor* faNivelBasico = new FabricaActorNivelBasico;			//-> con tortugas y facuando
	//FabricaActor* faNivelIntermedio = new FabricaActorNivelIntermedio;	//-> con cocodrilos y facuando
	//GameManager* gm01 = GameManager::getInstancia();
	//
	///* Esta es la parte del singleton de GameManager
	//gm01->IniciarJuego();
	//gm01->IniciarJuego(faNivelBasico);*/
	//gm01->IniciarJuego(faNivelIntermedio);
}