#include "Bando.h"

#ifndef REVOLUCIONARIOS
#define REVOLUCIONARIOS

class Revolucionarios : public Bando
{
	public:
		string fechaIngreso;

		Revolucionarios(string fecha){
			fechaIngreso = fecha;
		}

		string to_string()
        {
            return "Revolucionarios\nFecha de ingreso" + fechaIngreso + "\n";
        }
};

#endif
