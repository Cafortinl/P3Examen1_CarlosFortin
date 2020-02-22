#pragma once
#ifndef GUARDIAREAL_HPP
#define GUARDIAREAL_HPP
#include <string>
#include "Dragon.hpp"
#include "FamiliaNoble.hpp"

using namespace std;

class GuardiaReal{
	private:
		string nombre;
		int edad, ataque, defensa, tipo;
	public:
		friend void simulacion();
		static const int CABALLERO = 1;
                static const int JINETE = 2;
                static const int ARQUERO = 3;
		GuardiaReal();
		GuardiaReal(string a, int b, int c, int d, int e);
		string getNombre();
		string getTipo();
		int getEdad();
};
#endif
