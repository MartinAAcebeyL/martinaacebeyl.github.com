#pragma once

#include <vector>
#include <algorithm>

using namespace std;

template<typename Componente>
class Composite : public Componente
{
protected:
	vector<Componente*> hijos; //Lista de los hijos componentes.
	
public:
	typedef	typename vector<Componente*>::iterator IteradorHijo;
	
	void AgregarHijo(Componente* hijo)
	{
		IteradorHijo itr = find(hijos.begin(), hijos.end(), hijo);
		if (itr == hijos.end())
		{
			hijos.push_back(hijo);
		}
	}
	Componente* ObtenerHijo(int indice) {
		return hijos.pop_back(indice);
	}

	Componente* Obtener(int indice) {
		return hijos[indice];
	}

	void EliminarHijo(Componente* hijo)
	{
		IteradorHijo itr = find(hijos.begin(), hijos.end(), hijo);
		if (itr != hijos.end())
		{
			hijos.erase(itr);
		}
	}

	void VaciarHijos()
	{
		hijos.clear();
	}

	virtual ~Composite()
	{

	}
}; 