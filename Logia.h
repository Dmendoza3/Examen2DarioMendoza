#include "FrutaDiablo.h"

#ifndef LOGIA
#define LOGIA

class Logia : public FrutaDiablo
{
	public:
		string elemento;
		
		string to_string()
        {
            return "Logia\nNombre: " + nombre + "\nElemento: " + elemento + "\n";
        }
};

#endif
