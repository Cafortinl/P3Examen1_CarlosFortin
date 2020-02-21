#pragma once
#ifndef LANNISTER_HPP
#define LANNISTER_HPP
#include <string>
#include <array>
#include <iostream>
#include "GuardiaReal.hpp"

using namespace std;

class Lannister{
	private:
		string jefe, emblema, lema;
		array<GuardiaReal, 10> ejercito;
		int c_dinero, fuerza_m, c_integrantes, c_ejercito = 0;
	public:
		Lannister();
		Lannister(string a, string b, string c, int d, int e, int f);
		void setJefe(string x);
		string getJefe();
		void setEmblema(string x);
		string getEmblema();
		void setLema(string x);
		string getLema();
		void setEjercito(GuardiaReal x);
		void getEjercito();
		void setDinero(int x);
		int getDinero();
		void setFuerza(int x);
		int getFuerza();
		void setIntegrantes(int x);
		int getIntegrantes();
};
#endif
