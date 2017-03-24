#include "FrutaDiablo.h"

#ifndef ZOAN
#define ZOAN

class Zoan : public FrutaDiablo
{i
	public:
		int tipo;
		string animal;

		Zoan(string name, int ti, string ani) : FrutaDiablo(name){
			tipo = tipo;
			animal = ani;
		}

		string Tipo(){
			return (string[3]){"Normal", "Prehistorica", "Legendaria"}[tipo];
		}
		
		string to_string()
        {
            return "Zoan\n\tNombre: " + nombre + "\n\tTipo: " + Tipo + "\n\tAnimal: " + animal + "\n";
        }
};

#endif
