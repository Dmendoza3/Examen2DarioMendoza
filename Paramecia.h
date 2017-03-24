#include "FrutaDiablo.h"

#ifndef PARAMECIA
#define PARAMECIA

class Paramecia : public FrutaDiablo
{
	public:
		string descripcion;	

		string to_string()
		{
			return "Paramecia\nNombre: " + nombre + "\nDescripcion: " + descripcion + "\n";
		}
};

#endif
