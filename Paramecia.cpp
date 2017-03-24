#include "Paramecia.h"

Paramecia::Paramecia(string name, string des) : FrutaDiablo(name)
{
	descripcion = des;
}

string Paramecia::to_string()
{
	return "Paramecia\n\tNombre: " + nombre + "\n\tDescripcion: " + descripcion + "\n";
}

