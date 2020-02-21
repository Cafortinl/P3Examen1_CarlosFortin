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
		int edad, ataque, defensa;
		static const int CABALLERO = 1;
		static const int JINETE = 2;
		static const int ARQUERO = 3;
		//simulacion(int x);
	public:
		//friend void GuardiaReal::simulacion();
		//friend void FamiliaNoble::simulacion();
		GuardiaReal();
		GuardiaReal(string a, int b, int c, int d, int e);
		//void ataque();
};
#endif
