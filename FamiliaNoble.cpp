#include "FamiliaNoble.hpp"
#include <iostream>
#include <string>

using namespace std;

FamiliaNoble::FamiliaNoble(){
}

FamiliaNoble::FamiliaNoble(string a, string b, string c, int d, int e){
	nombre = a;
	escudo = b;
	lema = c;
	ataque = d;
	defensa = e;
}

void FamiliaNoble::setNombre(string x){
	nombre = x;
}

string FamiliaNoble::getNombre(){
	return nombre;
}

void FamiliaNoble::setEscudo(string x){
	escudo = x;
}

string FamiliaNoble::getEscudo(){
	return escudo;
}

void FamiliaNoble::setLema(string x){
	lema = x;
}

string FamiliaNoble::getLema(){
	return lema;
}
