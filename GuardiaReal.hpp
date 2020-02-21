#pragma once
#ifndef GUARDIAREAL_HPP
#define GUARDIAREAL_HPP
#include <string>

using namespace std;

class GuardiaReal{
	private:
		friend Dragon;
		friend FamiliaNoble;
		string nombre;
		int edad, ataque, defensa;
		static const int CABALLERO = 1;
		static const int JINETE = 2;
		static const int ARQUERO = 3;
	public:
		GuardiaReal();
		GuardiaReal(string a, int b, int c, int d, int e);
		void ataque();
};
#endif
