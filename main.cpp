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
	string path = "./seres/" + ser->name + ".log";
	ofstream fileSer(path.c_str());

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
	}while(Opcion(op,2));

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
			}while(Opcion(rango, 4));

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
			}while(Opcion(oceano, 5));
			
			cout << "Ingrese la tripulacion:";
			cin.ignore();
			getline(cin, tripulacion);
			
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

FrutaDiablo* pedirFruta()
{
	int op = 0;

	do{
		cout << "Que tipo de fruta es: \n"
		<<		"0. Paramecia\n"
		<<		"1. Zoan\n"
		<<		"2. Logia\n"
		<<		"->";
		cin >> op;
	}while(Opcion(op,2));
	
	string nombre;
	cout << "Ingrese el nombre de la Fruta del diablo: ";
	cin.ignore();
	getline(cin, nombre);

	switch(op)
	{
		case 0:{
			string descripcion;
			cout << "Ingrese la descripcion:";
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
			}while(Opcion(tipo, 2));
			
			cout << "Ingrese el animal al que representa: ";
			cin >> animal;

			return new Zoan(nombre, tipo, animal);
			break;
		}
		case 2:{
			string elemento;
		
			cout << "Ingrese el elemento: ";
			cin >> elemento;

			return new Logia(nombre, elemento);
			break;
		}
	}
}

void agregarSer(vector<Ser*> &seres, vector<FrutaDiablo*> &frutas)
{
	int raza;
	int edad;
	string name;
	FrutaDiablo* fruta;
	bool hakiObs;
	bool hakiArmadura;
	bool hakiRey;
	Bando* bando;

	
	do{
		cout << "Ingrese el tipo: \n"
		<<		"0. gyojin\n"
		<<		"1. kyojin\n"
		<<		"2. ningyo\n"
		<<		"3. humano\n"
		<<		"4. mink\n"
		<<		"5. skypieans\n"
		<<		"->";
		cin >> raza;
	}while(Opcion(raza, 5));

	do{
		cout << "Ingrese la edad: ";
		cin >> edad;
	}while(edad < 0);

	cout << "Ingrese el nombre: ";
	cin.ignore();
	getline(cin, name);

	char resp;
	cout << "Tiene fruta del diablo[S/N]: ";
	cin >> resp;
	if(resp == 'S' || resp == 's')
	{
		fruta = pedirFruta();
		frutas.push_back(fruta);
	}else fruta = new FrutaDiablo();

	cout << "Maneja el haki de observacion?[S/N]";
	cin >> resp;
	hakiObs = (resp == 'S' || resp == 's');

	cout << "Maneja el haki de armadura?[S/N]";
	cin >> resp;
	hakiArmadura = (resp == 'S' || resp == 's');

	cout << "Maneja el haki del Rey?[S/N]";
	cin >> resp;
	hakiRey = (resp == 'S' || resp == 's');

	bando = pedirBando();


	seres.push_back(new Ser(raza, edad, name, fruta, hakiObs, hakiArmadura, hakiRey, bando));
	guardarSer(seres.back());
}

void verSeres(vector<Ser*> seres)
{
	for(int i = 0; i < seres.size(); i++)
	{
		cout << "\n________________________________________________\n"
		<<		seres[i]->to_string();
	}
	cout << "\n________________________________________________\n";
}

void verFrutas(vector<FrutaDiablo*> frutas)
{
	for(int i = 0; i < frutas.size(); i++)
	{
		cout << "\n________________________________________________\n"
		<<		frutas[i]->to_string();
	}
	cout << "\n________________________________________________\n";
}

int main()
{
	vector<Ser*> seres;
	vector<FrutaDiablo*> frutas;

	int op = 1;

	while(op != 0)
	{
		cout << "1. Agregar ser.\n"
		<< 		"2. Ver seres.\n"
		<<		"3. Ver frutas del diablo \n"
		<<		"0. Salir\n"
		<<		"->";
		cin >> op;
		if(op == 1)
			agregarSer(seres, frutas);
		else if(op == 2)
			verSeres(seres);
		else if(op == 3)
			verFrutas(frutas);
		else if(op != 0)
			cout << "Opcion no valida";
	}


	for(int i = 0; i < seres.size(); i++)
		delete seres[i];
	for(int i = 0; i < frutas.size(); i++)
		delete frutas[i];
	return 0;
}


