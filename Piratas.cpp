#include "Piratas.h"

Piratas::Piratas(int oc, string trip, string func){
	oceano = oc;
	tripulacion = trip;
	funcion = func;
}

string Piratas::to_string()
{
	return "Piratas\nOceano: " + Oceano() + "\nTribulacion: " + tripulacion + "\nFuncion: " + funcion;
}
