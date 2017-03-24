#include "FrutaDiablo.h"

#ifndef LOGIA
#define LOGIA

class Logia : public FrutaDiablo
{
	public:
		string elemento;
		
		Logia(string name, string ele);

		string to_string();
};

#endif
