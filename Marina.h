#include "Bando.h"

#ifndef MARINA
#define MARINA

class Marina : public Bando
{
	public:
		string fechaIngreso;
		int rango;

		Marina(string fecha, int ran);

		string Rango(){
			return (string[5]){"cadete", "teniente", "vice-almirante", "almirante", "almirante de flota"}[rango];
		}

		string to_string();
};

#endif
