#include "FrutaDiablo.h"

#ifndef ZOAN
#define ZOAN

class Zoan : public FrutaDiablo
{i
	public:
		int tipo;
		string animal;

		string Tipo(){
			return (string[]){"Normal", "Prehistorica", "Legendaria"}[tipo];
		}
		
		string to_string()
        {
            return "Zoan\nNombre: " + nombre + "\nTipo: " + Tipo + "\nAnimal: " + animal + "\n";
        }
};

#endif
