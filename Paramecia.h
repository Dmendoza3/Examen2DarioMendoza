#include "FrutaDiablo.h"

#ifndef PARAMECIA
#define PARAMECIA

class Paramecia : public FrutaDiablo
{
	public:
		string descripcion;	

		//Constructor
		Paramecia(string name, string des);

		string to_string();
};

#endif
