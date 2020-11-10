#pragma once

#include <Windows.h>
#include <vector>
#include <iostream>

using namespace std;

struct Coordenada2D {
	int x;
	int y;
};


struct ElementoPantalla {
	int x;
	int y;
	char caracter;
	int colorCaracter;
	int colorFondo;
};


void gotoxy(int x, int y);
void OcultarCursor();
void GameOver(bool);

/*
The different color codes are

0   BLACK
1   BLUE
2   GREEN
3   CYAN
4   RED
5   MAGENTA
6   BROWN
7   LIGHTGRAY
8   DARKGRAY
9   LIGHTBLUE
10  LIGHTGREEN
11  LIGHTCYAN
12  LIGHTRED
13  LIGHTMAGENTA
14  YELLOW
15  WHITE
*/

void EstablecerColor(int _colorFondo, int _colorCaracter);

Coordenada2D LlaveACoordenada2D(int _llave, int _ancho);
int Coordenada2DALlave(Coordenada2D _c, int _ancho);
