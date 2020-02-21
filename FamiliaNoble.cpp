#include "FamiliaNoble.hpp"
#include <iostream>
#include <string>

using namespace std;

FamiliaNoble::FamiliaNoble(){
}

FamiliaNomble::FamiliaNoble(string a, string b, string c, int d, int e){
	nombre = a;
	escudo = b;
	lema = c;
	ataque = d;
	defensa = e;
}

void FamiliaNomble::setNombre(string x){
	nombre = x;
}

string FamiliaNomble::getNombre(){
	return nombre;
}

void FamiliaNomble::setEscudo(string x){
	escudo = x;
}

string FamiliaNomble::getEscudo(){
	return escudo;
}

void FamiliaNomble::setLema(string x){
	lema = x;
}

string FamiliaNomble::getLema(){
	return lema;
}
