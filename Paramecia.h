#include "FrutaDiablo.h"

#ifndef PARAMECIA
#define PARAMECIA

class Paramecia : public FrutaDiablo
{
	public:
		string descripcion;	

		//Constructor
		Paramecia(string name, string des) : FrutaDiabloi(name){
			descripcion = des;
		}

		string to_string()
		{
			return "Paramecia\n\tNombre: " + nombre + "\n\tDescripcion: " + descripcion + "\n";
		}
};

#endif
