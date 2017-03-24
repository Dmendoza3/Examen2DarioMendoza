#include "FrutaDiablo.h"

#ifndef ZOAN
#define ZOAN

class Zoan : public FrutaDiablo
{
	public:
		int tipo;
		string animal;

		Zoan(string name, int ti, string ani);
		

		string Tipo(){
			return (string[3]){"Normal", "Prehistorica", "Legendaria"}[tipo];
		}
		
		string to_string();
};

#endif
