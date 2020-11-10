#include "Calles.h"
#include "Utilitarios.h"

void Calles::Mostrar() {
	for (int i = 0; i < ancho; i++) {
		for (int j = 0; j < alto; j++) {
			gotoxy(x + i, y + j);
			cout << caracter;
		}
	}
}