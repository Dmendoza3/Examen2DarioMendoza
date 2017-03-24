#include "Marina.h"

Marina::Marina(string fecha, int ran)
{
	fechaIngreso = fecha;
	rango = ran;
}

string Marina::to_string()
{
	return "Marina\nFecha de ingreso: " + fechaIngreso + "\nRango: " + Rango();
}

