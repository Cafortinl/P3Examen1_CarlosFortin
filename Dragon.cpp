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

