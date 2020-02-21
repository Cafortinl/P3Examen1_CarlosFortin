#include "Dragon.hpp"
#include <string>

using namespace std;

Dragon::Dragon(){
}

Dragon::Dragon(string a, string b, int c, int d, int e, int f){
	nombre = a;
	color = b;
	size = c;
	d_llama = d;
	ataque = e;
	defensa = f;
}

string Dragon::getNombre(){
	return nombre;
}

string Dragon::getColor(){
	return color;
}

int Dragon::getSize(){
	return size;
}

int Dragon::getDLLama(){
	return d_llama;
}
