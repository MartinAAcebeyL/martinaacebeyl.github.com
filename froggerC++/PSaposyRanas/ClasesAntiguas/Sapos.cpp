#include "Sapos.h"
#include "Utilitarios.h"
#include <iostream>
using namespace std;


Sapos::Sapos(vector<string> _avatar, int _x, int _y, int _dx, int _dy,
	int _limiteSuperior, int _limiteInferior, int _limiteIzquierda, int _limiteDerecha, int _salto, int _numeroVidas, MapasCaracteres* _mce)
	:Actores(_avatar, _x, _y, _dx, _dy, _limiteSuperior, _limiteInferior, _limiteIzquierda, _limiteDerecha, _mce), salto(_salto){
	numeroVidas = _numeroVidas;
}


//Sapos::Sapos(int _numero, string _nombre, vector<string> _avatar, int _x, int _y, int _dx, int _dy, int _salto, int _numeroVidas):Actores(_numero, _nombre, _avatar, _x, _y, _dx, _dy){
//	salto = _salto;
//	numeroVidas = _numeroVidas;
//}

void Sapos::Comer() {
	
}

//void Sapos::Mostrar() const{
//	auto avatarSapo = getAvatar();
//	for (int i = 0; i < getFilasAvatar(); i++) {
//		gotoxy(getX(), getY() + i);
//		cout << "|" << avatarSapo[i] << "|" << endl;
//	}
//}
//
//void Sapos::Mover(int dx, int dy) {
//
//
//	for (int i = 0; i < getFilasAvatar(); i++) {
//		for (int j = 0; j < getColumnasAvatar() + 2; j++) {
//			gotoxy(getX() + j, getY() + i);
//			cout << " " << endl;
//		}
//	}
//	
//	setX(getX() + dx);
//	setY(getY() + dy);
//	Mostrar();
//}