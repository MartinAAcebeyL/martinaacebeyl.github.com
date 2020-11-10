#include "GameManager.h"
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include "Utilitarios.h"

//implementacion del singleton
GameManager* GameManager::instancia = 0;

GameManager* GameManager::getInstancia(){
	if (instancia == 0){
		instancia = new GameManager();
	}
	return instancia;
}

GameManager::GameManager() {
	//srand(time(NULL));
	gameOver = false;
	ganar = false;
	mapaCaracteresEscenario = new MapaElementosPantalla (120, 28);
	pisoJuego = new Panel(0, 0, 120, 28, 1, 6, '.', 120, ' ', 0, mapaCaracteresEscenario);

	//prototype usado en potenciadores
	/*FabricaPotenciadores::Inicializar();
	Potenciador01 = FabricaPotenciadores::getObjetoTipoEnergia();
	Potenciador02 = FabricaPotenciadores::getObjetoTipoSalto();
	Potenciador03 = FabricaPotenciadores::getObjetoTipoVelocidad();
	Potenciador04 = FabricaPotenciadores::getObjetoTipoVida();

	Potenciador05 = new PotenciadoresContretosTipo1(55, 5, 5, 5, 'P', 0, 0, 15, 0, 0);
	Potenciador06 = Potenciador05->Clonar();*/

	//pasando el tipo de franja al director de BUILDER

	// Franja Rio
	DirectorFE.setBuilder(&franjaRio);
	FERio = DirectorFE.getFranjaEscenario(mapaCaracteresEscenario);

	// Franja Medio
	DirectorFE.setBuilder(&franjaMedio);
	FEMedio = DirectorFE.getFranjaEscenario(mapaCaracteresEscenario);

	// Franja Calle
	DirectorFE.setBuilder(&franjaCalle);
	FECalle = DirectorFE.getFranjaEscenario(mapaCaracteresEscenario);

	// Franja Casa
	DirectorFE.setBuilder(&franjaCasas);
	FECasas = DirectorFE.getFranjaEscenario(mapaCaracteresEscenario);

	// Franja Inicio
	DirectorFE.setBuilder(&franjaInicioBuilder);
	FEInicio = DirectorFE.getFranjaEscenario(mapaCaracteresEscenario);

	/*//lista de objetos creado con factory method
	listaObjetos.push_back(Objetos::getObjeto("Espina", 5, 15, 4, 3));
	listaObjetos.push_back(Objetos::getObjeto("Bloque", 20, 4, 10, 5));
	listaObjetos.push_back(Objetos::getObjeto("CuboEnergia", 50, 4, 1, 1));
	//lista de Actor creado con factory method
	/*Facundo = Actor::getActor("Sapo", 5, 25, 0, 0);
	listaActor.push_back(Actor::getActor("Cocodrilo", 5, 5, -1, 0));
	listaActor.push_back(Actor::getActor("Tortuga", 5, 10, 1, 0));
	listaActor.push_back(Actor::getActor("Auto", 5, 15, 1, 0));
	//		Adaptando la clase de terceros aguila nuestro proyecto con ADAPTER		
	/*vector<string> avatarAguila = { {"   ^   "}, {"^^^^^^"}, {"___^___"} };
	AguilaAdapter* Aguilucho = new AguilaAdapter(avatarAguila, 110, 20, -1, 0, 0, 0, 120, 28, mapaCaracteresEscenario);
	listaActoresFila6.push_back(new AguilaAdapter(avatarAguila, 90, 20, -1, 0, 0, 0, 120, 28, mapaCaracteresEscenario));
	listaActoresFila6.push_back(new AguilaAdapter(avatarAguila, 100, 20, -1, 0, 0, 0, 120, 28, mapaCaracteresEscenario));
	listaActoresFila7.push_back(new AguilaAdapter(avatarAguila, 70, 10, -1, 0, 0, 0, 120, 28, mapaCaracteresEscenario));
	//		probando el patron brigge 
	vector<string> avatarCocodrilo = {
		{"           /^^^^\\                "},
		{" /^^\\____/0      \\               "},
		{"(                 `-------^^^^^^^"},
		{" V^V^V^V^V^V^\\..................."} };
	Juancho = new Cocodrilo(avatarCocodrilo, 70, 20, -1, 0, 1, 25, 1, 119);*/

	/*for (int i = 0; i < franjaInicioBuilder.getEspinasFranjaEscenario(mapaCaracteresEscenario).size(); i++) {
		espinasEscenario.push_back(franjaInicioBuilder.getEspinasFranjaEscenario(mapaCaracteresEscenario).at(i));
	}*/
	auto fr = franjaInicioBuilder.getEspinasFranjaEscenario(mapaCaracteresEscenario);

	espinasEscenario.insert(espinasEscenario.begin(), fr.begin(), fr.end());

	/*for (auto it = franjaInicioBuilder.getEspinasFranjaEscenario(mapaCaracteresEscenario).begin(); 
		it != franjaInicioBuilder.getEspinasFranjaEscenario(mapaCaracteresEscenario).end();++it) {
		espinasEscenario.push_back(*it);
	}*/

	m = new Mosca({ {"* *"},{"[+]"} }, 70, 15, 0, 0, 3, 7, mapaCaracteresEscenario);
	nombreJugador = new CuadroTexto(91, 20, 25, 10, 2, 5, ' ');//
	marcadorJuego = new Marcador(0, 28, 120, 5, 8, 15, 177, 1, 2, 15, '#');
}

GameManager::~GameManager(){
	//delete Tortuguin;
}

void GameManager::Bucle() {
	while (!gameOver) {
		for (auto it = std::begin(listaActorFila1); it != std::end(listaActorFila1); ++it) {
			(*it)->Mover();		
			esta.push(moverseJuntosColi(*it));
			Facundo->Mostrar();
			m->Mostrar();
		}
		
		for (auto it = std::begin(listaActorFila2); it != std::end(listaActorFila2); ++it) {
			(*it)->Mover();
			esta.push(moverseJuntos(*it));
			Facundo->Mostrar();
			m->Mostrar();
		}

		for (auto it = std::begin(listaActorFila3); it != std::end(listaActorFila3); ++it) {
			(*it)->Mover();			
			esta.push(moverseJuntos(*it));
			Facundo->Mostrar();
			m->Mostrar();
		}

		for (auto it = std::begin(listaActorFila4); it != std::end(listaActorFila4); ++it) {
			(*it)->Mover();
			// Comprobando si hay colision entre el cocodrilo y el sapo
			Colision(*(*it)->getMapaElementoPantallaActor());
			m->Mostrar();
		}

		for (auto it = std::begin(listaActorFila5); it != std::end(listaActorFila5); ++it) {
			(*it)->Mover();
			// Comprobando si hay colision entre el cocodrilo y el sapo
			Colision(*(*it)->getMapaElementoPantallaActor());
			m->Mostrar();
		}

		/*for (auto it = espinasEscenario.begin(); it != espinasEscenario.end(); ++it) {
			Colision((*it)->getMapaElementoPantalla());
		}*/

		colisionEspinas(FEInicio->getEspinasFE());
		
		ComerMosca(*m->getMapaElementoPantallaActor());

		muerteSapo();

		if (Tecla()) {
			Facundo->setDX(dxSapo);
			Facundo->setDY(dySapo);
			Facundo->Mover();
			Beep(500,250);
			GanarPuntos();
		}	

		if (Facundo->getPuntos() == 400) {
			ganar = true;
			gameOver = true;
		}
	}
	
}

bool GameManager::Tecla() {
	bool teclaPresionada = false;
	dxSapo = 0;
	dySapo = 0;
	
	char key = ';';
	int noPasoCasas = mostrarObjeto(FECasas->getBloquesFE());
	int noPasoMedio = mostrarObjeto(FEMedio->getBloquesFE());
	int noPasoInicio = mostrarObjeto(FEInicio->getBloquesFE());
	int noPasoCalle = mostrarObjeto(FECalle->getBloquesFE());

	if (_kbhit()) {
		key = _getch();
	}

	if (key == 72) {

		if (noPasoCasas == 3 || noPasoMedio == 3 || noPasoInicio == 3 || noPasoCalle == 3)
			dySapo = 0;
		else
			dySapo = -1;
		teclaPresionada = true;
	}

	if (key == 80) {
		if (noPasoCasas == 4 || noPasoMedio == 4 || noPasoInicio == 4 || noPasoCalle == 4)
			dySapo = 0;
		else
			dySapo = 1;
		teclaPresionada = true;
	}

	if (key == 75) {
		if (noPasoCasas == 2 || noPasoMedio == 2 || noPasoInicio == 2 || noPasoCalle == 2)
			dxSapo = 0;
		else
			dxSapo = -1;
		teclaPresionada = true;
	}

	if (key == 77) {
		if (noPasoCasas == 1 || noPasoMedio == 1 || noPasoInicio == 1 || noPasoCalle == 1)
			dxSapo = 0;
		else
			dxSapo = 1;
		teclaPresionada = true;
	}

	if (key == 27) {
		gameOver = true;
	}

	if (key == 113) {
		
	}
	return teclaPresionada;
}

void GameManager::IniciarJuego(FabricaActor* _f) {
	nombreJugador->Mostrar();

	marcadorJuego->setNombre(nombreJugador->getTexto());
	pisoJuego->Mostrar();
	// mostrando las franjas
	FERio->Mostrar();
	FEInicio->Mostrar();
	FEMedio->Mostrar();
	FECalle->Mostrar();
	FECasas->Mostrar();



	for (int i = 0; i < 3; i++) {
		listaActorFila1.push_back(_f->CrearCocodrilo(0 + (i * 50), 10, -1, 0, mapaCaracteresEscenario));
	}

	for (int i = 0; i < 2; i++) {
		listaActorFila3.push_back(_f->CrearTortuga(0 + (i * 50), 6, 1, 0, mapaCaracteresEscenario));
	}

	for (int i = 0; i < 3; i++) {
		listaActorFila2.push_back(_f->CrearTronco(10 + (i * 50), 3, -1, 0, mapaCaracteresEscenario));
	}

	for (int i = 0; i < 3; i++) {
		listaActorFila4.push_back(_f->CrearAuto1(20 + (i * 50), 17, 1, 0, mapaCaracteresEscenario));
	}

	for (int i = 0; i < 2; i++) {
		listaActorFila5.push_back(_f->CrearAuto2(15 + (i * 50), 22, -1, 0, mapaCaracteresEscenario));
	}


	Facundo = _f->CrearSapo(65, 26, 0, 0,mapaCaracteresEscenario);
	Facundo->Mostrar();

	marcadorJuego->setVidas(Facundo->getVidas());
	marcadorJuego->setPuntos(Facundo->getPuntos());
	marcadorJuego->Mostrar();

	m->Mostrar();
	//m->Mover();
	

	Bucle();

	Sleep(1000);
	system("cls");
	GameOver(ganar);
	Sleep(2000);
	EstablecerColor(0, 0);
	system("cls");
}

bool GameManager::fin() {
	return gameOver;
}

void GameManager::ComerMosca(map<int, ElementoPantalla> _mapaElementosPantalla){
	bool colision = false;
	for (auto it = std::begin(_mapaElementosPantalla); it != std::end(_mapaElementosPantalla); ++it) {
		for (auto it1 = std::begin(*Facundo->getMapaElementoPantallaActor()); it1 != std::end(*Facundo->getMapaElementoPantallaActor()); ++it1) {
			if ((*it).first == (*it1).first) {
				colision = true;
				break;
			}
		}
		if (colision)
			break;
	}
	if (colision){
		Facundo->setVidas(Facundo->getVidas()+1);
		m->Mover();
		marcadorJuego->setVidas(Facundo->getVidas());
		marcadorJuego->Mostrar();
	}
}

void GameManager::Colision(map<int, ElementoPantalla> *mapaElementosPantalla) {
	bool colision = false;

	for (auto it = mapaElementosPantalla->begin(); it != mapaElementosPantalla->end(); ++it) {
		for (auto it1 = std::begin(*Facundo->getMapaElementoPantallaActor()); it1 != std::end(*Facundo->getMapaElementoPantallaActor()); ++it1) {
			if (it->first == it1->first) {
				Facundo->setVidas(Facundo->getVidas() - 1);
				colision = true;
				break;
			}
		}
		if (colision)
			break;
	}
	if (Facundo->getVidas() == 0)
		gameOver = true;
	if (colision) {
		Facundo->setX(65);
		Facundo->setY(26);
		Facundo->setDX(0);
		Facundo->setDY(0);
		Facundo->Mover();
		m->Mover();
		marcadorJuego->setVidas(Facundo->getVidas());
		marcadorJuego->Mostrar();
	}
}

void GameManager::Colision(map<int, ElementoPantalla> _mapaElementosPantalla){
	bool colision = false;
	for (auto it = std::begin(_mapaElementosPantalla); it != std::end(_mapaElementosPantalla); ++it) {
		for (auto it1 = std::begin(*Facundo->getMapaElementoPantallaActor()); it1 != std::end(*Facundo->getMapaElementoPantallaActor()); ++it1) {
			// se va comparando si las llaves son iguales o por lo menos hay un significa cada actor estan en un mismo punto
			if ((*it).first == (*it1).first) {
				Facundo->setVidas(Facundo->getVidas() - 1);
				colision = true;
				break;
			}
		}
		if (colision)
			break;
	}
	if (Facundo->getVidas() == 0)
		gameOver = true;
	if(colision){
		Facundo->setX(65);
		Facundo->setY(26);
		Facundo->setDX(0);
		Facundo->setDY(0);
		Facundo->Mover();
		m->Mover();
		marcadorJuego->setVidas(Facundo->getVidas());
		marcadorJuego->Mostrar();
	}
}

void GameManager::GanarPuntos(){
	bool punto = false;
	for (auto it = std::begin(*Facundo->getMapaElementoPantallaActor()); it != std::end(*Facundo->getMapaElementoPantallaActor()); ++it) {
		// se va comparando si las llaves son iguales o por lo menos hay un significa cada actor estan en un mismo punto
		if ((*it).second.y <= FECasas->getPanelFE()->getY()) {
			punto = true;
			Facundo->setPuntos(Facundo->getPuntos() + 100);
			break;
		}
	}
	if (punto) {
		Facundo->setX(65);
		Facundo->setY(26);
		Facundo->setDX(0);
		Facundo->setDY(0);
		Facundo->Mover();
		m->Mover();
		marcadorJuego->setPuntos(Facundo->getPuntos());
		marcadorJuego->Mostrar();
	}
}

bool GameManager::moverseJuntos(Actor* actor){
	map<int, ElementoPantalla> _mapaElementosPantalla = *actor->getMapaElementoPantallaActor();
	int ancho = actor->getNroColumnas();
	int alto = actor->getAvatar().size();
	bool encuentro = false;
	bool rio = false;

	for (auto it = std::begin(_mapaElementosPantalla); it != std::end(_mapaElementosPantalla); ++it) {
		for (auto it1 = std::begin(*Facundo->getMapaElementoPantallaActor()); it1 != std::end(*Facundo->getMapaElementoPantallaActor()); ++it1) {		
			if ((*it1).second.x > (*it).second.x && (*it1).second.x + Facundo->getNroColumnas() < (*it).second.x + ancho && (*it1).second.y >= (*it).second.y && (*it1).second.y - 1 < (*it).second.y + alto) {
				encuentro = true;
				break;
			}
		}
		if (encuentro)
			break;
	}
	if (encuentro){
			Facundo->setDX(actor->getDX());
			Facundo->setDY(0);
			Facundo->Mostrar();
			Facundo->Mover();
		return true;
	}else 
		return false;
	
}

bool GameManager::moverseJuntosColi(Actor* actor){
	map<int, ElementoPantalla> _mapaElementosPantalla = *actor->getMapaElementoPantallaActor();
	int ancho = actor->getNroColumnas();
	int alto = actor->getAvatar().size();
	bool encuentro = false;
	bool rio = false;
	for (auto it = std::begin(_mapaElementosPantalla); it != std::end(_mapaElementosPantalla); ++it) {
		for (auto it1 = std::begin(*Facundo->getMapaElementoPantallaActor()); it1 != std::end(*Facundo->getMapaElementoPantallaActor()); ++it1) {		
			if ((*it1).second.x > (*it).second.x + 15 && 
				(*it1).second.x + Facundo->getNroColumnas() < (*it).second.x + ancho && 
				(*it1).second.y >= (*it).second.y && 
				(*it1).second.y < (*it).second.y + alto) {
				encuentro = true;
				break;
			}
		}
		if (encuentro)
			break;
	}
	if (encuentro){
			Facundo->setDX(actor->getDX());
			Facundo->setDY(0);
			Facundo->Mostrar();
			Facundo->Mover();
			return true;
	}
	else 
		return false;
	
}

void GameManager::muerteSapo(){
	bool junto = false;
	bool rio = false;
	for (int i = 0; i < esta.size(); i++) {
		if (esta.front()) {
			junto = true;
		}
		esta.pop();
	}
	if (!junto){
		for (auto it1 = std::begin(*Facundo->getMapaElementoPantallaActor()); it1 != std::end(*Facundo->getMapaElementoPantallaActor()); ++it1) {
			if ((*it1).second.y >= FERio->getPanelFE()->getY() && (*it1).second.y + Facundo->getAvatar().size() <= FERio->getPanelFE()->getY() + 11){
				Facundo->setVidas(Facundo->getVidas() - 1);
				rio = true;
				break;
			}
		}
		if (Facundo->getVidas() == 0)
			gameOver = true;
		if (rio){
			Facundo->setX(65);
			Facundo->setY(26);
			Facundo->setDX(0);
			Facundo->setDY(0);
			Facundo->Mover();
			m->Mover();
			marcadorJuego->setVidas(Facundo->getVidas());
			marcadorJuego->Mostrar();
		}
	}
}

int GameManager::mostrarObjeto(vector<Bloques*> bloque){
	int i = 0;
	bool colision = false;
	for (auto it = std::begin(bloque); it != std::end(bloque); ++it) {
		for (auto it1 = std::begin(*Facundo->getMapaElementoPantallaActor()); it1 != std::end(*Facundo->getMapaElementoPantallaActor()); ++it1) {
			if ((*it1).second.x + Facundo->getNroColumnas() + 1 > (*it)->getX() && (*it1).second.x - 1 < (*it)->getX() + (*it)->getAncho() && (*it1).second.y + Facundo->getAvatar().size() >= (*it)->getY() && (*it1).second.y < (*it)->getY() + (*it)->getAlto() + 1) {
				if ((*it1).second.x + Facundo->getNroColumnas() == (*it)->getX()) {
					i = 1;
				}
				if ((*it1).second.x == (*it)->getX() + (*it)->getAncho()) {
					i = 2;
				}
				if ((*it1).second.y == (*it)->getY() + (*it)->getAlto()) {
					i = 3;
				}
				if ((*it1).second.y + Facundo->getAvatar().size() == (*it)->getY()) {
					i = 4;
				}
				colision = true;
				break;
			}

		}
		if (colision)
			break;
	}
	return i;
}

void GameManager::colisionEspinas(vector<Espinas*> espina){
	int i = 0;
	bool colision = false;
	for (auto esp = std::begin(espina); esp != std::end(espina); ++esp) {
		int ancho = (*esp)->getAncho();
		int alto = (*esp)->getAlto();
		
		for (auto it1 = std::begin(*Facundo->getMapaElementoPantallaActor()); it1 != std::end(*Facundo->getMapaElementoPantallaActor()); ++it1) {
			/*
			gotoxy(35, 36 );
			cout << (*esp)->getX() << "    "<< (*esp)->getY() <<"    "<< (*it1).second.x<<"   "<<(*it1).second.y<<"     "<< endl;*/
			
			if ((*esp)->getX() == (*it1).second.x && (*esp)->getY() == (*it1).second.y) {
				gotoxy(35, 37);
				//cout << "entra";
				Facundo->setVidas(Facundo->getVidas() - 1);
				colision = true;
				break;
			}
		}
		if (colision)
			break;
	}
	if (Facundo->getVidas() == 0)
		gameOver = true;
	if (colision) {
		Facundo->setX(65);
		Facundo->setY(26);
		Facundo->setDX(0);
		Facundo->setDY(0);
		Facundo->Mover();
		m->Mover();
		marcadorJuego->setVidas(Facundo->getVidas());
		marcadorJuego->Mostrar();
	}
}

void GameManager::MostrarMapaElementosPantalla(map<int, ElementoPantalla> _mapaElementosPantalla){
	int i = 0;
	EstablecerColor(0,1);
	for (auto it = std::begin(_mapaElementosPantalla); it != std::end(_mapaElementosPantalla); ++it) {
		gotoxy(1, 40 + i);
		cout << (*it).first << " " << (*it).second.x << " " << (*it).second.y << " " << (*it).second.caracter << " " << (*it).second.colorCaracter << " " << (*it).second.colorFondo << endl;
		i++;
	}
}