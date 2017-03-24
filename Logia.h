#include "FrutaDiablo.h"

#ifndef LOGIA
#define LOGIA

class Logia : public FrutaDiablo
{
	public:
		string elemento;
		
		Logia(string name, string ele) : FrutaDiablo(name){
			elemento = ele;
		}

		string to_string()
        {
            return "Logia\n\tNombre: " + nombre + "\n\tElemento: " + elemento + "\n";
        }
};

#endif
