#pragma once
#ifndef DRAGON_HPP
#define DRAGON_HPP
#include <string>
#include "FamiliaNoble.hpp"
#include "GuardiaReal.hpp"

using namespace std;

class Dragon{
	private:
		string nombre, color;
		int size, d_llama, ataque, defensa;
		//void simulacion(int x);
	public:
		//friend void FamiliaNoble::simulacion();
                //friend void GuardiaReal::simulacion();
		Dragon();
		Dragon(string a, string b, int c, int d, int e, int f);
		//void ataque();
};
#endif
