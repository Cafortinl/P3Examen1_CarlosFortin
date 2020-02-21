#pragma once
#ifndef FAMILIANOBLE_HPP
#define FAMILIANOBLE_HPP
#include <string>

using namespace std;

class FamiliaNoble{
	private:
		string nombre, escudo, lema;
		int ataque, defensa;
	public:
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
