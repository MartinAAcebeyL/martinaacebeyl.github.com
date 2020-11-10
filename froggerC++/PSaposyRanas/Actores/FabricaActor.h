#pragma once
#include"Actor.h"
#include"Tortuga.h"
#include"Cocodrilo.h"
#include"Sapo.h"
#include"Auto.h"
#include"Tronco.h"
/*#include"DecoradorActor.h"
#include"Decorador1.h"
#include"Decorador2.h"*/
/*esta es la interfaz necesaria en abstract Factory*/
class FabricaActor {
public:
	//creando metodos que las fabrizas especializadas sobrecargaran obligatoriamente
	FabricaActor() {
		anchoTortuga = anchoCorrect(avatarTortuga);
		anchoCocodrilo = anchoCorrect(avatarCocodrilo);
		anchoAuto1 = anchoCorrect(avatarAuto1);
		anchoAuto2 = anchoCorrect(avatarAuto2);
		anchoTronco = anchoCorrect(avatarTronco);
	}
	virtual Actor* CrearSapo(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) = 0;

	virtual Actor* CrearCocodrilo(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) = 0;
	virtual Actor* CrearAuto1(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) = 0;
	virtual Actor* CrearAuto2(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) = 0;
	virtual Actor* CrearTortuga(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) = 0;
	virtual Actor* CrearTronco(int _x, int _y, int _dx, int _dy, MapaElementosPantalla* m) = 0;
protected:
	int anchoTortuga;
	int anchoCocodrilo;
	int anchoAuto1;
	int anchoAuto2;
	int anchoTronco;

	int anchoCorrect(vector<string> avatar)const {
		int max = 0;
		for (int i = 0; i < avatar.size(); i++) {
			if (avatar[i].size() > max)
				max = avatar[i].size();
		}
		return max;
	};

	//los avatares que lo usaran las diferentes fabricas 
	vector<string> avatarSapo = { {"\\o/"}, {"_O_"} };

	vector<string> avatarTortuga = {
		  {" ______   ____"},
		  {"/      \\ | o |"},
		  {"|      |/___\\|"},
		  {"|______ /     "} };

	vector<string> avatarCocodrilo = {
		{"           /^^^^\\                "},
		{" /^^\\____/0      \\               "},
		{"(                 `-------^^^^^^^"},
		{" V^V^V^V^V^V^\\..................."} };

	vector<string> avatarAuto1 = {
		{"  ______     "},
		{" /|_||_\\`.__ "},
		{"(_  _    _  \\"},
		{"=`-(_)--(_)-' "} };

	vector<string> avatarAuto2 = { {"        __"},
								   {"\\  ii  | o|"},
								   {" |>#########"},
								   {"/ (_O_O_O_O_)"} };

	vector<string> avatarTronco = { {" _________  __ _________"},
								   {"!#######///////////#\\\\"},
								   {"!_____________________ _"} };

};