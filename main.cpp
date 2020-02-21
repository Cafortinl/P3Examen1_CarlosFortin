#include <iostream>
#include <string>
#include "Stark.hpp"
#include "Lannister.hpp"
#include "Targaryen.hpp"
#include "FamiliaNoble.hpp"
#include "Dragon.hpp"
#include "GuardiaReal.hpp"

using namespace std;

Stark stark;
Lannister lannister;
Targaryen targaryen;

void mostrarFamilias(){
	cout << "--------Familias--------" << endl;
	cout << "1. Stark" << endl;
	cout << "2. Lannister" << endl;
	cout << "3. Targaryen" << endl;
	cout << "Opcion ingresada: ";
}

void opcionesF(int opcion){
	switch(opcion){
		case 1:{
			       int fam;
			       mostrarFamilias();
			       cin >> fam;
			       cout << endl;
			       switch(fam){
				       case 1:{
						      string jefe, emblema, lema;
						      int lobos, integrantes;
						      if(stark.getJefe == "vacia"){
							      cout << "Ingrese el jefe de la familia: ";
							      cin >> jefe;
							      cout << "Ingrese el animal emblema: ";
							      cin >> emblema;
							      cout << "Ingrese el lema de la familia: ";
							      cin >> lema;
							      cout << "Ingrese la cantidad de lobos huargos: ";
							      cin >> lobos;
							      cout << "Ingrese la cantidad de integrantes: ";
							      cin >> integrantesl;
							      stark.setJefe(jefe);
							      stark.setEmblema(emblema);
							      stark.setLema(lema);
							      stark.setLobos(lobos);
							      stark.setIntegrantes(integrantes);

						      }
						      else
							      cout << "La familia Stark ya esta creada!" << endl;
						      break;
					      }

					case 2:{
						       string jefe, emblema, lema;
                                                       int lobos, integrantes;
                                                       if(stark.getJefe == "vacia"){
                                                               cout << "Ingrese el jefe de la familia: ";
                                                               cin >> jefe;
                                                               cout << "Ingrese el animal emblema: ";
                                                               cin >> emblema;
                                                               cout << "Ingrese el lema de la familia: ";
                                                               cin >> lema;
                                                               cout << "Ingrese la cantidad de lobos huargos: ";
                                                               cin >> lobos;
                                                               cout << "Ingrese la cantidad de integrantes: ";
                                                               cin >> integrantesl;
                                                               stark.setJefe(jefe);
                                                               stark.setEmblema(emblema);
                                                               stark.setLema(lema);
                                                               stark.setLobos(lobos);
                                                               stark.setIntegrantes(integrantes); 
                                                       }
                                                       else
                                                               cout << "La familia Stark ya esta creada!" << endl;
						       break;
					       }

					case 3:{
						       break;
					       }

					default:{
							cout << "La opcion ingresada no es valida" << endl;
							break;
						}
			       }
			       break;
		       }

		case 2:{
			       break;
		       }

		case 3:{
			       break;
		       }

		default:{
				cout << "La opcion ingresada no es valida" << endl;
				break;
			}
	}
}

void menuF(){
	cout << "--------Familias--------" << endl;
	cout << "1. Crear Familia" << endl;
	cout << "2. Crear Soldado" << endl;
	cout << "3. Listar Ejercito" << endl;
	cout << "Opcion ingresada: ";
}

void opciones(int opcion){
	switch(opcion){
		case 1:{
			       int o_fam;
			       menuF();
			       cin >> o_fam;
			       cout << endl;
			       opcionesF(o_fam);
			       break;
		       }

		case 2:{
			       break;
		       }

		case 3:{
			       break;
		       }

		default:{
				cout << "La opcion ingresada no es valida" << endl;
				break;
			}
	}
}

void menuP(){
	cout << "--------Game of Thrones--------" << endl;
	cout << "1. Familias" << endl;
	cout << "2. Simulacion" << endl;
	cout << "3. Salir" << endl;
	cout << "Opcion ingresada: ";
}

int main(){
	stark.setJefe("vacia");
	lannister.setJefe("vacia");
	targaryen.setJefe("vacia");
	int opcion = 0;
	do{
		menuP();
		cin >> opcion;
		opciones(opcion);
		cout << endl;
	}while(opcion != 3)
	return 0;
}
