#include "Bando.h"

#ifndef REVOLUCIONARIOS
#define REVOLUCIONARIO

class Revolucionarios : public Bando
{
	public:
		Revolucionarios();

		string fechaIngreso;

		string to_string()
        {
            return "Revolucionarios\nFecha de ingreso" + fechaIngreso + "\n";
        }
};

#endif
