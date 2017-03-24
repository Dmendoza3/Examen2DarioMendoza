#include "Logia.h"

Logia::Logia(string name, string ele) : FrutaDiablo(name){
	elemento = ele;
}

string Logia::to_string()
{
	return "Logia\n\tNombre: " + nombre + "\n\tElemento: " + elemento + "\n";
}

