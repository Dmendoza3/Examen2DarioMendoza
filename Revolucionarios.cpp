#include "Revolucionarios.h"

Revolucionarios::Revolucionarios(string fecha)
{
	fechaIngreso = fecha;
}

string Revolucionarios::to_string()
{
	return "Revolucionarios\nFecha de ingreso: " + fechaIngreso + "\n";
}

