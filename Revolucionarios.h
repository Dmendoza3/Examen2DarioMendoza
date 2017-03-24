#include "Bando.h"

#ifndef REVOLUCIONARIOS
#define REVOLUCIONARIOS

class Revolucionarios : public Bando
{
	public:
		string fechaIngreso;

		Revolucionarios(string fecha);	
		

		string to_string();
};

#endif
