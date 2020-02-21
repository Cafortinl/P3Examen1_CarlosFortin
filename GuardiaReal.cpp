#include "GuardiaReal.hpp"
#include <string>

using namespace std;

GuardiaReal::GuardiaReal(){
}

GuardiaReal::GuardiaReal(string a, int b, int c, int d, int e){
	nombre = a;
	tipo = b;
	edad = c;
	ataque = d;
	defensa = e;

}

string GuardiaReal::getNombre(){
	return nombre;
}

string GuardiaReal::getTipo(){
	string salida;
	if(tipo == 1)
		salida = "Caballero";
	else if(tipo == 2)
		salida = "Jinete";
	else if(tipo == 3)
		salida = "Arquero";

	return salida;
}

int GuardiaReal::getEdad(){
	return edad;
}
