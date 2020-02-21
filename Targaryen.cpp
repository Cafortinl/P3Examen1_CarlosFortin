#include "Targaryen.hpp"
#include <iostream>
#include <string>
#include <array>

using namespace std;

Targaryen::Targaryen(){
}

Targaryen::Targaryen(string a, string b, string c, int d){
	reina = a;
	emblema =b;
	lema = c;
	c_barcos = d;
}

void Targaryen::setReina(string x){
}

string Targaryen::getReina(){
}

void Targaryen::setEmblema(string x){
}

string Targaryen::getEmblema(){
}

void Targaryen::setLema(string x){
}

string Targaryen::getLema(){
}

void Targaryen::setEjercito(Dragon x){
	if(c_ejercito < 10)
		ejercito[c_ejercito] = x;
	else
		cout << "El ejercito esta lleno!" << endl;
}

string Targaryen::getEjercito(){
}

void Targaryen::setBarcos(int x){
}

int Targaryen::getBarcos(){
}
