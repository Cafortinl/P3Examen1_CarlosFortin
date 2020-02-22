#include "Targaryen.hpp"
#include <iostream>
#include <string>
#include <array>
#include "Dragon.hpp"

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
	reina = x;
}

string Targaryen::getReina(){
	return reina;
}

void Targaryen::setEmblema(string x){
	emblema = x;
}

string Targaryen::getEmblema(){
	return emblema;
}

void Targaryen::setLema(string x){
	lema = x;
}

string Targaryen::getLema(){
	return lema;
}

void Targaryen::setEjercito(Dragon x){
	if(c_ejercito < 10){
		ejercito[c_ejercito] = x;
		c_ejercito++;
	}
	else
		cout << "El ejercito esta lleno!" << endl;
}

void Targaryen::getEjercito(){
	for(int i = 0; i < c_ejercito; i++){
                cout << "----------" << endl;
                cout << "Nombre:" << ejercito[i].getNombre() << endl;
                cout << "Color:" << ejercito[i].getColor() << endl;
                cout << "Size:" << ejercito[i].getSize() << endl;
		cout << "Distancia de llama:" << ejercito[i].getDLLama() << endl;
                cout << "----------" << endl;
        }
}

void Targaryen::setBarcos(int x){
	c_barcos = x;
}

int Targaryen::getBarcos(){
	return c_barcos;
}
