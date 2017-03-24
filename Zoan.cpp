#include "Zoan.h"

Zoan::Zoan(string name, int ti, string ani) : FrutaDiablo(name){
	tipo = tipo;
	animal = ani;
}

string Zoan::to_string()
{
	return "Zoan\n\tNombre: " + nombre + "\n\tTipo: " + Tipo() + "\n\tAnimal: " + animal + "\n";
}
