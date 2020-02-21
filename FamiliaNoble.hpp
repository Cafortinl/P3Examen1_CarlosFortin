#pragma once
#ifndef FAMILIANOBLE_HPP
#define FAMILIANOBLE_HPP
#include <string>
#include "Dragon.hpp"
#include "GuardiaReal.hpp"

using namespace std;

class FamiliaNoble{
	private:
		string nombre, escudo, lema;
		int ataque, defensa;
		//void simulacion(int x);
	public:
		//friend void Dragon::simulacion();
                //friend void GuardiaReal::simulacion();
		FamiliaNoble();
		FamiliaNoble(string a, string b, string c, int d, int e);
		void setNombre(string x);
		string getNombre();
		void setEscudo(string x);
		string getEscudo();
		void setLema(string x);
		string getLema();
};
#endif
