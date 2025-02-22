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
int f1, f2, c_e1 = 0, c_e2 = 0, c_e3 = 0;

void simulacion(){
	int af1, df1, af2, df2;
	if(f1 == 1 && f2 == 2){
		for(int i=0;i<c_e1;i++){
			af1 += stark.ejercito[i].ataque;
		}
		cout << af1 << endl;
	}
	else if(f1 == 1 && f2 == 3){
	}
	else if(f1 == 2 && f2 == 1){
	}
	else if(f1 == 2 && f2 == 3){
	}
	else if(f1 == 3 && f2 == 1){
	}
	else if(f1 == 3 && f2 == 2){
	}
}

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
						      if(stark.getJefe() == "vacia"){
							      cout << "Ingrese el jefe de la familia: ";
							      cin >> jefe;
							      cout << "Ingrese el animal emblema: ";
							      cin >> emblema;
							      cout << "Ingrese el lema de la familia: ";
							      cin >> lema;
							      cout << "Ingrese la cantidad de lobos huargos: ";
							      cin >> lobos;
							      cout << "Ingrese la cantidad de integrantes: ";
							      cin >> integrantes;
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
                                                       int dinero, fuerza, integrantes;
                                                       if(lannister.getJefe() == "vacia"){
                                                               cout << "Ingrese el jefe de la familia: ";
                                                               cin >> jefe;
                                                               cout << "Ingrese el animal emblema: ";
                                                               cin >> emblema;
                                                               cout << "Ingrese el lema de la familia: ";
                                                               cin >> lema;
                                                               cout << "Ingrese la cantidad de dinero: ";
                                                               cin >> dinero;
                                                               cout << "Ingrese la fuerza: ";
                                                               cin >> fuerza;
							       cout << "Ingrese la cantidad de integrantes:";
							       cin >> integrantes;
                                                               lannister.setJefe(jefe);
                                                               lannister.setEmblema(emblema);
                                                               lannister.setLema(lema);
                                                               lannister.setDinero(dinero);
                                                               lannister.setIntegrantes(integrantes);
							       lannister.setFuerza(fuerza); 
                                                       }
                                                       else
                                                               cout << "La familia Lannister ya esta creada!" << endl;
						       break;
					       }

					case 3:{
						       string reina, emblema, lema;
                                                       int barcos;
                                                       if(targaryen.getReina() == "vacia"){
                                                               cout << "Ingrese la Reina de la familia: ";
                                                               cin >> reina;
                                                               cout << "Ingrese el animal emblema: ";
                                                               cin >> emblema;
                                                               cout << "Ingrese el lema de la familia: ";
                                                               cin >> lema;
                                                               cout << "Ingrese la cantidad de barcos: ";
                                                               cin >> barcos;
                                                               targaryen.setReina(reina);
                                                               targaryen.setEmblema(emblema);
                                                               targaryen.setLema(lema);
                                                               targaryen.setBarcos(barcos);
 
                                                       }
                                                       else
                                                               cout << "La familia Targaryen ya esta creada!" << endl;
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
			       int o_ej;
			       mostrarFamilias();
			       cin >> o_ej;
			       switch(o_ej){
				       case 1:{
						      string nombre, escudo, lema;
						      int ataque, defensa;
						      cout << "Ingrese el nombre: ";
						      cin >> nombre;
						      cout << "Ingrese el ecudo: ";
						      cin >> escudo;
						      cout << "Ingrese el lema: ";
						      cin >> lema;
						      cout << "Ingrese el nivel de ataque: ";
						      cin >> ataque;
						      cout << "Ingrese el nivel de defensa: ";
						      cin >> defensa;
						      FamiliaNoble t(nombre, escudo, lema, ataque, defensa);
						      stark.setEjercito(t);
						      c_e1++;
						      break;
					      }

				       case 2:{
						      string nombre;
						      int tipo, edad, ataque, defensa;
						      cout << "Ingrese el nombre: ";
						      cin >> nombre;
						      cout << "Ingrese el tipo: \n1. Caballero\n2.Jinete\n3.Arquero";
						      cin >> tipo;
						      cout << "Ingrese la edad: ";
						      cin >> edad;
						      cout << "Ingrese el nivel del ataque: ";
						      cin >> ataque;
						      cout << "Ingrese el nivel de defensa: ";
						      cin >> defensa;

						      switch(tipo){
							      case 1:{
									     GuardiaReal t(nombre, GuardiaReal::CABALLERO, edad, ataque, defensa);
									     lannister.setEjercito(t);
									     c_e2++;
									     break;
								     }

							      case 2:{
									     GuardiaReal t(nombre, GuardiaReal::JINETE, edad, ataque, defensa);
                                                                             lannister.setEjercito(t);
									     c_e2++;
									     break;
								     }

							      case 3:{
									     GuardiaReal t(nombre, GuardiaReal::ARQUERO, edad, ataque, defensa);
                                                                             lannister.setEjercito(t);
									     c_e2++;
									     break;
								     }

							      default:{
									      cout << "No se pudo crear el soldado, el tipo ingresado no es valido" << endl;
									      break;
								      }
						      }

						      break;
					      }

				       case 3:{
						      string nombre, color;
						      int size, d_llama, ataque, defensa;
						      cout << "Ingrese el nombre: ";
						      cin >> nombre;
						      cout << "Ingrese el color: ";
						      cin >> color;
						      cout << "Ingrese el tamaño: ";
						      cin >> size;
						      cout << "Ingrese la distancia de la llama: ";
						      cin >> d_llama;
						      cout << "Ingrese el nivel de ataque: ";
						      cin >> ataque;
						      cout << "Ingrese el nivel de defensa: ";
						      cin >> defensa;
						      Dragon t(nombre, color, size, d_llama, ataque, defensa);
						      targaryen.setEjercito(t);
						      c_e3++;
						      break;
					      }

				       default:{
						       cout << "La opcion ingresada no es valida" << endl;
						       break;
					       }
			       }
			       break;
		       }

		case 3:{
			       int o_l;
			       mostrarFamilias();
			       cin >> o_l;
			       switch(o_l){
				       case 1:{
						      stark.getEjercito();
						      break;
					      }

				       case 2:{
						      lannister.getEjercito();
						      break;
					      }

				       case 3:{
						      targaryen.getEjercito();
						      break;
					      }

				       default:{
						       cout << "La opcion ingresada no es valida" << endl;
						       break;
					       }
			       }
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
			       mostrarFamilias();
			       cout << "Seleccione la primera familia: ";
			       cin >> f1;
			       cout << "Seleccione la segunda familia: ";
			       cin >> f2;
			       while(f1 == f2){
				       cout << "No puede seleccionar la misma familia. Ingrese otra: ";
				       cin >> f2;
			       }
			       simulacion();
			       break;
		       }

		case 3:{
			       cout << "Fin del programa" << endl;
			       exit(0);
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
	targaryen.setReina("vacia");
	int opcion = 0;
	do{
		menuP();
		cin >> opcion;
		opciones(opcion);
		cout << endl;
	}while(opcion != 3);
	return 0;
}
