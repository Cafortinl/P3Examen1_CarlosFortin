#include <iostream>
#include "Stark.hpp"
#include <string>
#include <array>
#include "FamiliaNoble.hpp"

using namespace std;

Stark::Stark(){
}

Stark::Stark(string a, string b, string c, int d, int e){
	jefe = a;
	emblema = b;
	lema = c;
	c_lobos = d;
	c_integrantes = e;
}

void Stark::setJefe(string x){
	jefe = x;
}

string Stark::getJefe(){
	return jefe;
}

void Stark::setEmblema(string x){
	emblema = x;
}

string Stark::getEmblema(){
	return emblema;
}

void Stark::setLema(string x){
	lema = x;
}

string Stark::getLema(){
	return lema;
}

void Stark::setEjercito(FamiliaNoble x){
	if(c_ejercito < 10){
		ejercito[c_ejercito] = x;
		c_ejercito++;
	}
	else
		cout << "El ejercito ya esta lleno!" << endl;
}

void Stark::getEjercito(){
	for(int i = 0; i < c_ejercito; i++){
		cout << "----------" << endl;
		cout << "Nombre:" << ejercito[i].getNombre() << endl;
		cout << "Escudo:" << ejercito[i].getEscudo() << endl;
		cout << "Lema:" << ejercito[i].getLema() << endl;
		cout << "----------" << endl;
	}
}

void Stark::setLobos(int x){
	c_lobos = x;
}

int Stark::getLobos(){
	return c_lobos;
}

void Stark::setIntegrantes(int x){
	c_integrantes = x;
}

int Stark::getIntegrantes(){
	return c_integrantes;
}
