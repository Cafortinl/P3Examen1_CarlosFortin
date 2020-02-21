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
	jefe = x;
}

string Lannister::getJefe(){
	return jefe;
}

void Lannister::setEmblema(string x){
	emblema = x;
}

string Lannister::getEmblema(){
	return emblema;
}

void Lannister::setLema(string x){
	lema = x;
}

string Lannister::getLema(){
	return lema;
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
	c_dinero = x;
}

int Lannister::getDinero(){
	return c_dinero;
}

void Lannister::setFuerza(int x){
	fuerza_m = x;
}

int Lannister::getFuerza(){
	return fuerza_m;
}

void Lannister::setIntegrantes(int x){
	c_integrantes = x;
}

int Lannister::getIntegrantes(){
	return c_integrantes;
}

