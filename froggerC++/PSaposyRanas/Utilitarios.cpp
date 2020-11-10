#include "Utilitarios.h"

void gotoxy(int x, int y)
{
	HANDLE hCon;
	//Recupera el control de la consola
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	//Son coodenadas
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);
}

void OcultarCursor()
{
	HANDLE hCon;
	//Recupera el control de la consola
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 50;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hCon, &cci);
}

void EstablecerColor(int _colorFondo, int _colorCaracter) {
	int ValorFondoBorde;
	ValorFondoBorde = _colorFondo * 16 + _colorCaracter;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ValorFondoBorde);
}

Coordenada2D LlaveACoordenada2D(int _llave, int _ancho)
{
	Coordenada2D posicionXY;
	posicionXY.x = _llave % _ancho;
	posicionXY.y = (_llave - _llave % _ancho) / _ancho;
	//posicionXY.y = int(_llave / ancho);

	return posicionXY;
}

int Coordenada2DALlave(Coordenada2D _c, int _ancho)
{
	int llave = 0;
	llave = _c.y * _ancho + _c.x;
	return llave;
	//return _c.y * ancho + _c.x;
}

void GameOver(bool opcion) {

	vector<string> ganaste = {
	{"  ________                               __        ._._._."},
	{" /  _____/_____    ____ _____    _______/  |_  ____| | | |"},
	{"/   \\  ___\\__  \\  /    \\\\__  \\  /  ___/\\   __\\/ __ \\ | | |"},
	{"\\    \\_\\  \\/ __ \\|   |  \\/ __ \\_\\___ \\  |  | \\  ___/\\|\\|\\|"},
	{" \\______  (____  /___|  (____  /____  > |__|  \\___  >_____"},
	{"        \\/     \\/     \\/     \\/     \\/            \\/\\/\\/\\/"} };


	vector<string> gameOver = {
	{"  ________                      ________                     "},
	{" /  _____/_____    _____   ____ \\_____  \\___  __ ___________ "},
	{"/   \\  ___\\__  \\  /     \\_/ __ \\ /   |   \\  \\/ // __ \\_  __ \\"},
	{"\\    \\_\\  \\/ __ \\|  Y Y  \\  ___//    |    \\   /\\  ___/|  | \\/"},
	{" \\______  (____  /__|_|  /\\___  >_______  /\\_/  \\___  >__|   "},
	{"        \\/     \\/      \\/     \\/        \\/          \\/       	"} };

	if (opcion) {
		for (int i = 0; i < ganaste.size(); i++) {
			gotoxy(35, 10 + i);
			cout << ganaste[i] << endl;
		}
	}
	else {
		for (int i = 0; i < gameOver.size(); i++) {
			gotoxy(35, 10 + i);
			cout << gameOver[i] << endl;
		}
	}
}
