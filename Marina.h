#include "Bando.h"

#ifndef MARINA
#define MARINA

class Marina : public Bando
{
	public:
		Marina();

		string fechaIngreso;
		int rango;

		string Rango(){
			return (string){"cadete", "teniente", "vice-almirante", "almirante", "almirante de flota"}[rango];
		}

		string to_string()
		{
			return "Marina\nFecha de ingreso" + fechaIngreso + "\nRango:\n" + Rango();
		}
};

#endif
