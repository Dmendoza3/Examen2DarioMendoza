#include <iostream>
#include <vector>
#include <fstream>

#include "Ser.h"

#include "Bando.h"
#include "Marina.h"
#include "Piratas.h"
#include "Revolucionarios.h"

#include "FrutaDiablo.h"
#include "Paramecia.h"
#include "Zoan.h"
#include "Logia.h"

#define Opcion(o,r) o<0||o>r

void guardarSer(Ser* ser)
{
	ostream fileSer("./seres/" + ser->nombre.cstr() + ".log");

	fileSer << ser->to_string();

	fileSer.close();
}

Bando* pedirBando()
{
	int op = 0;

	do{
		cout << "A que bando pertenece?: \n"
		<<		"0. Marina\n"
		<<		"1. Piratas\n"
		<<		"2. Revolucionarios\n"
		<<		"->";
		cin >> op;
	}while(Opcion(op,3));

	switch(op)
	{
		case 0:{
			string fechaIngreso;
	        int rango;
	
			cout << "Ingrese la fecha: ";
			cin >> fechaIngreso;
			
			do{
				cout << "Ingrese el rango: \n"
				<<		"0. cadete\n"
				<<		"1. teniente\n"	
				<<		"2. vice-almirante\n"
				<<		"3. almirante\n"
				<<		"4. almirante de flota\n"
				<<		"->";
				cin >> rango;
			}while(Opcion(rango, 5));

			return new Marina(fechaIngreso, rango);
		}
		case 1:{
			int oceano;
	        string tripulacion;
    	    string funcion;

			do{
				cout << "Ingrese el oceano: \n"
				<<		"0. east\n"
				<<		"1. west\n"
				<<		"2. south\n"
				<<		"3. north blue\n"
				<<		"4. grand line\n"
				<<		"5. new world\n"
				<<		"->";
				cin >> oceano;
			}while(Opcion(oceano, 6));
			
			cout << "Ingrese la tripulacion:";
			cin >> tripulacion;
			
			cout << "Ingrese su funcion: ";
			cin >> funcion;


			return new Piratas(oceano, tripulacion, funcion);
			break;
		}
		case 2:{
			string fechaIngreso;	
		
			cout << "Ingrese la fecha: ";
			cin >> fechaIngreso;

			return new Revolucionarios(fechaIngreso);
			break;
		}
	}	
}

FrutaDiablo* agregarFruta()
{
	int op = 0;

	do{
		cout << "Que tipo de fruta es: \n"
		<<		"0. Paramecia\n"
		<<		"1. Zoan\n"
		<<		"2. Logia\n"
		<<		"->";
		cin >> op;
	}while(Opcion(op,3));
	
	string nombre;
	cout << "Ingrese el nombre de la Fruta del diablo: ";
	cin >> nombre;

	switch(op)
	{
		case 0:{
			strin descripcion;
			cout << "Ingrese la descripcion:"
			cin >> descripcion;
			return new Paramecia(nombre, descripcion);
		}
		case 1:{
			int tipo;
	        string animal;

			do{
				cout << "Ingrese el tipo: \n"
				<<		"0. Normal\n"
				<<		"1. Prehistorica\n"
				<<		"2. Legendaria\n"
				<<		"->";
				cin >> tipo;
			}while(Opcion(tipo, 3));
			
			cout << "Ingrese el animal al que representa: ";
			cin >> animal;

			return new Zoan(nombre, tipo, animal);
			break;
		}
		case 2:{
			string elemento;
		
			cout << "Ingrese el elemento: ";
			cin >> elemento;

			return new Logia(elemento);
			break;
		}
	}
}

void agregarSer(vector<Ser*> seres, vector<FrutaDiablo*> frutas)
{
	
}

int main()
{
	vector<Ser*> seres;
	vector<FrutaDiablo*> frutas;

	delete seres[];
	delete frutas[];
	return 0;
}


