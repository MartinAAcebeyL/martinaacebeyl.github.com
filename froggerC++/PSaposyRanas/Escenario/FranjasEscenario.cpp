#include "FranjasEscenario.h"

void FranjasEscenario::Mostrar() {
	panelFE->Mostrar();

	for (auto it = std::begin(bloquesFE); it != std::end(bloquesFE); ++it) {
		(*it)->Mostrar();
	}

	for (auto it = std::begin(espinasFE); it != std::end(espinasFE); ++it) {
		(*it)->Mostrar();
	}
}