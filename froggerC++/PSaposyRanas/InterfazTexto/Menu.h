#pragma once
#include "..\Composite.h"
#include "ComponenteIT.h"
#include "Marco.h"

class Menu : public Composite<ComponenteIT>, public ObjetoIT
{
private:
	int numeroElementos;
	int indiceElementoActual;
	int indiceElementoAnterior;
	bool opcionSalir;
	Marco* marco;

public:
	Menu(int _x, int _Y, int _ancho, int _alto, int _colorFondoBase, int _colorCaracterBase, int _caracterBase);
	void Mostrar();
	bool getTecla();
	void Bucle();
	void Iniciar();
	void MostrarSelector();

	void setNumeroElementos(int _numeroElementos) { numeroElementos = _numeroElementos; }
	int getNumeroElementos() { return numeroElementos; }

	void setIndiceElementoActual(int _indiceElementoActual) { indiceElementoActual = _indiceElementoActual; }
	int getIndiceElementoActual() { return indiceElementoActual; }

	void setIndiceElementoAnterior(int _indiceElementoAnterior) { indiceElementoAnterior = _indiceElementoAnterior; }
	int getIndiceElementoAnterior() { return indiceElementoAnterior; }
};
