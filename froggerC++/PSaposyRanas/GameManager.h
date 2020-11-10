#pragma once

#include <list>
#include <queue>
#include "InterfazTexto/Panel.h"
#include "Escenario/FranjasEscenario.h"
#include "Escenario/DirectorFranjasEscenario.h"
#include "Escenario/BuilderFranjasEscenario.h"
#include "Escenario/FranjaInicioBuilder.h"
#include "Escenario/FranjaRioBuilder.h"
#include "Escenario/FranjaCalleBuilder.h"
#include "Escenario/FranjaMedioBuilder.h"
#include "Escenario/FranjaCasaBuilder.h"
#include "Escenario/FabricaPotenciadores.h"
#include "Escenario/Potenciadores.h"
#include "Actores/FabricaActor.h"

#include "InterfazTexto/Marcador.h"
#include "InterfazTexto/CuadroTexto.h"
#include "Actores/Mosca.h"

class GameManager{
	//simgleton de GameManager
private:
	static GameManager* instancia;
	GameManager();
public:
	static GameManager* getInstancia();

private:
	int dxSapo;
	int dySapo;
	bool gameOver;
	bool ganar;
	MapaElementosPantalla* mapaCaracteresEscenario;

	//Superficies* pisoJuego;
	Panel* pisoJuego;

	//potenciadores
	Potenciadores* Potenciador01;
	Potenciadores* Potenciador02;
	Potenciadores* Potenciador03;
	Potenciadores* Potenciador04;
	Potenciadores* Potenciador05;
	Potenciadores* Potenciador06;
	
	//Actor independientes;
	Actor* Facundo;
	//Cocodrilo* Juancho;

	list<Actor*> listaActorFila1;
	list<Actor*> listaActorFila2;
	list<Actor*> listaActorFila3;
	list<Actor*> listaActorFila4;
	list<Actor*> listaActorFila5;

	//franjas del juego echos con Builder
	DirectorFranjasEscenario DirectorFE; // el director
	//Inicio
	FranjasEscenario* FEInicio;
	FranjaInicioBuilder franjaInicioBuilder;

	//Rio
	FranjasEscenario* FERio;
	FranjaRioBuilder franjaRio;

	//Medio
	FranjasEscenario* FEMedio;
	FranjaMedioBuilder franjaMedio;

	//Calle
	FranjasEscenario* FECalle;
	FranjaCalleBuilder franjaCalle;

	//Casa
	FranjasEscenario* FECasas;
	FranjaCasaBuilder franjaCasas;


	//listas que almacenaran objetos echos por  factory metod
	list<Objetos*> listaObjetos;
	list<Actor*> listaActor;

	CuadroTexto* nombreJugador;
	Marcador* marcadorJuego;
	Mosca* m;
	queue<bool> esta;
	list<Espinas*> espinasEscenario;
public:
	//GameManager();
	~GameManager();
	void Bucle();
	bool Tecla();
	//void IniciarJuego();
	//void IniciarJuego(FabricaActores* _f);//->sin brigge
	void IniciarJuego(FabricaActor* _f);
	// Metodo para determinar la colicion
	void Colision(map<int, ElementoPantalla> _mapaElementosPantalla);
	void GanarPuntos();
	// Metodo para que Sapo se mueva junto a otro actor
	void Colision(map<int, ElementoPantalla>* _mapaElementosPantalla);
	bool moverseJuntos(Actor* actor);
	bool moverseJuntosColi(Actor* actor);
	void ComerMosca(map<int, ElementoPantalla> _mapaElementosPantalla);
	void muerteSapo();
	int mostrarObjeto(vector<Bloques*>);
	void colisionEspinas(vector<Espinas*>);
	void MostrarMapaElementosPantalla(map<int, ElementoPantalla> _mapaElementosPantalla);
	bool fin();
};