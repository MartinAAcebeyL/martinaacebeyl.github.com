#include "Interface.h"
#include <iostream>

using namespace std;

Interface::Interface() {

	
	//panelPrincipal  = Panel(0, 0, 120, 25, 5, 1, ' ', 2, 3, 4, NULL);
	//menuPrincipal = Menu(5, 5, 16, 12, 0, 7, 176);
	/*Panel panelMensajes(25, 5, 70, 10, 0, 1, ' ', 1, 0, 1, '#');
	Marco m(25, 6, 70, 15, 6, 1, ' ', "INDICACIONES", '-', '|', 1);
	Marco m1(30, 2, 70, 3, 7, 3, ' ', "", '-', '|', 1);
	Marco m2(100, 10, 8, 5, 7, 3, ' ', "", '*', '*', 1);*/
}

void Interface::IniciarInterface() {
	NivelBasico basico;
	NivelMedio medio;
	NivelAvanzado avanzado;
	ObjetoSalir salir;

	Etiqueta* et1 = new Etiqueta("Menu principal", 10, 14);
	Boton bm1("Nivel Basico", 10, 15, 14, 3, 6, 15, 176);
	bm1.setSeleccionObjetoIT(&basico);
	//bm1.Mostrar();
	Boton bm2("Nivel Medio", 10, 18, 14, 3, 2, 15, 177);
	bm2.setSeleccionObjetoIT(&medio);
	Boton bm3("Nivel Avanzado", 10, 21, 14, 3, 5, 15, 177);
	bm3.setSeleccionObjetoIT(&avanzado);
	Boton bm4("Salir", 10, 24, 14, 3, 1, 15, 177);
	bm4.setSeleccionObjetoIT(&salir);

	Menu menuPrincipal(9, 13, 16, 15, 4, 15, 176);
	menuPrincipal.AgregarHijo(et1);
	menuPrincipal.AgregarHijo(&bm1);
	menuPrincipal.AgregarHijo(&bm2);
	menuPrincipal.AgregarHijo(&bm3);
	menuPrincipal.AgregarHijo(&bm4);

	//menuPrincipal.Mostrar();

	Panel panelPrincipal(0, 0, 120, 30, 5, 1, ' ', 3, 3, 4, ' ');
	panelPrincipal.AgregarHijo(new Etiqueta("JUEGO SAPOS Y RANAS", 15, 1));
	panelPrincipal.AgregarHijo(&menuPrincipal);

	panelPrincipal.Mostrar();

	Etiqueta* eti = new Etiqueta("JUEGO SAPOS Y RANAS", 50, 1);
	eti->Mostrar();

	Marco marcoHistoria(5, 3, 110, 10, 0, 1, 176, 1, 0, 1, 186, 205);
	marcoHistoria.setTitulo("HISTORIA");
	marcoHistoria.setContenido(
		"Estes un Juego que se hizo porque la mejor forma de aprender seria haciendo un fuego. El objetivo del juego es guiar una rana hasta su hogar. Para hacerlo, la rana debe evitar coches mientras cruza una carretera congestionada y luego cruzar un rio lleno de amenazas. El jugador habil obtendra puntos adicionales a lo largo del camino."
	);
	marcoHistoria.Mostrar();

	menuPrincipal.Iniciar();

}