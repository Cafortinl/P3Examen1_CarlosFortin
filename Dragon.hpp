#pragma once
#ifndef DRAGON_HPP
#define DRAGON_HPP
#include <string>

using namespace std;

class Dragon{
	private:
		string nombre, color;
		int size, d_llama, ataque, defensa;
	public:
		Dragon();
		Dragon(string a, string b, int c, int d, int e, int f);
		void ataque();
};
#endif
