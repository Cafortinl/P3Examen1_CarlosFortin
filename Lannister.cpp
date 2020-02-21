#include "Lannister.hpp"
#include <iostream>
#include <string>
#include <array>

using namespace std;

Lannister::Lannister(){
}

Lannister::Lannister(string a, string b, string c, int d, int e, int f){
	jefe = a;
	emblema = b;
	lema = c;
	c_dinero = d;
	fuerza_m = e;
	c_integrantes = f;
}

void Lannister::setJefe(string x){
}

string Lannister::getJefe(){
}

void Lannister::setEmblema(string x){
}

string Lannister::getEmblema(){
}

void Lannister::setLema(string x){
}

string Lannister::getLema(){
}

void Lannister::setEjercito(GuardiaReal x){
	if(c_ejercito < 10)
		ejercito[c_ejercito] = x;
	else
		cout << "El ejercito ya esta lleno!" << endl;
}

string Lannister::getEjercito(){
}

void Lannister::setDinero(int x){
}

int Lannister::getDinero(){
}

void Lannister::setFuerza(int x){
}

int Lannister::getFuerza(){
}

void Lannister::setIntegrantes(int x){
}

int Lannister::getIntegrantes(){
}

