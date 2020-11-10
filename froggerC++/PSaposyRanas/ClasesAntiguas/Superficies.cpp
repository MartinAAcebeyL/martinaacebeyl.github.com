#include "Superficies.h"
#include "Utilitarios.h"
#include "MapasCaracteres.h"

int Superficies::numeroSuperficies = 0;


Superficies::Superficies(int _anchoPantalla, int _x, int _y, int _ancho, int _alto, int _borde, char _caracterFondo, char _caracterBorde):
	anchoPantalla(_anchoPantalla), x(_x), y(_y), ancho(_ancho), alto(_alto), borde(_borde), caracterFondo(_caracterFondo), caracterBorde(_caracterBorde)
{
	numeroSuperficies++;
	numero = numeroSuperficies;
	colorCaracterFondo = 0;
	colorFondoFondo = 1;
	colorCaracterBorde = 0;
	colorFondoBorde = 1;
	mapaElementosPantalla = new map<int, ElementoPantalla>();
}

void Superficies::GenerarBordes() {
	Coordenada2D c;
	int llave;
	ElementoPantalla elementoPantallaActual;

	elementoPantallaActual.caracter = caracterBorde;
	elementoPantallaActual.colorCaracter = colorCaracterBorde;
	elementoPantallaActual.colorFondo = colorCaracterFondo;
	EstablecerColor(colorCaracterBorde, colorFondoBorde);

	for (int i = 0; i < borde; i++) {
		for (int j = i; j < ancho - i; j++) {
			c.x = x + j;
			c.y = y + i;
			gotoxy(c.x, c.y);
			cout << caracterBorde << endl;
			llave = Coordenada2DALlave(c, anchoPantalla);
			elementoPantallaActual.x = c.x;
			elementoPantallaActual.y = c.y;
			mapaElementosPantalla->insert(pair<int, ElementoPantalla>(llave, elementoPantallaActual));

			c.x = x + j;
			c.y = y + alto - i - 1;
			gotoxy(c.x, c.y);
			cout << caracterBorde << endl;
			llave = Coordenada2DALlave(c, anchoPantalla);
			elementoPantallaActual.x = c.x;
			elementoPantallaActual.y = c.y;
			mapaElementosPantalla->insert(pair<int, ElementoPantalla>(llave, elementoPantallaActual));
		}

		for (int k = i; k < alto - i - 2; k++)
		{
			c.x = x + i;
			c.y = y + k + 1;
			gotoxy(c.x, c.y);
			cout << caracterBorde << endl;
			llave = Coordenada2DALlave(c, anchoPantalla);
			elementoPantallaActual.x = c.x;
			elementoPantallaActual.y = c.y;
			mapaElementosPantalla->insert(pair<int, ElementoPantalla>(llave, elementoPantallaActual));
			c.x = x + ancho - i - 1;
			c.y = y + k + 1;
			gotoxy(c.x, c.y);
			cout << caracterBorde << endl;
			llave = Coordenada2DALlave(c, anchoPantalla);
			elementoPantallaActual.x = c.x;
			elementoPantallaActual.y = c.y;
			mapaElementosPantalla->insert(pair<int, ElementoPantalla>(llave, elementoPantallaActual));
		}
	}
}

void Superficies::GenerarFondo()
{
	Coordenada2D c;
	int llave;
	ElementoPantalla elementoPantallaActual;
	elementoPantallaActual.caracter = caracterFondo;
	elementoPantallaActual.colorCaracter = colorCaracterFondo;
	elementoPantallaActual.colorFondo = colorFondoFondo;
	EstablecerColor(colorCaracterFondo, colorFondoFondo);


	for (int i = borde; i < ancho - borde; i++) {
		for (int j = borde; j < alto - borde; j++) {
			c.x = x + i;
			c.y = y + j;
			gotoxy(c.x, c.y);
			cout << caracterFondo << endl;
			llave = Coordenada2DALlave(c, anchoPantalla);
			elementoPantallaActual.x = c.x;
			elementoPantallaActual.y = c.y;
			mapaElementosPantalla->insert(pair<int, ElementoPantalla>(llave, elementoPantallaActual));
		}
	}
}

void Superficies::Mostrar() {
	GenerarBordes();
	GenerarFondo();
}
