#pragma once
#ifndef TARGARYEN_HPP
#define TARGARYEN_HPP
#include <iostream>
#include <string>
#include <array>
#include "Dragon.hpp"

using namespace std;

class Targaryen{
	private:
		string reina, emblema, lema;
		array<Dragon, 10> ejercito;
		int c_barcos, c_ejercito = 0;
	public:
		Targaryen();
		Targaryen(string a, string b, string c, int d);
		void setReina(string x);
		string getReina();
		void setEmblema(string x);
		string getEmblema();
		void setLema(string x);
		string getLema();
		void setEjercito(Dragon x);
		void getEjercito();
		void setBarcos(int x);
		int getBarcos();
};
#endif
