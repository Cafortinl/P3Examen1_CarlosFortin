#pragma once
#ifndef STARK_HPP
#define STRAK_HPP
#include <string>
#include <array>
#include "FamiliaNoble.hpp"

using namespace std;

class Stark{
	private:
		string jefe, emblema, lema;
		array<FamiliaNoble, 10> ejercito;
		int c_lobos, c_integrantes, c_ejercito = 0;
	public:
		Stark();
		Stark(string a, string b, string c, int d, int e);
		void setJefe(string x);
		string getJefe();
		void setEmblema(string x);
		string getEmblema();
		void setLema(string x);
		string getLema();
		void setEjercito(FamiliaNoble x);
		void getEjercito();
		void setLobos(int x);
		int getLobos();
		void setIntegrantes(int x);
		int getIntegrantes();
};
#endif
