#include "Bando.h"

#ifndef PIRATAS
#define PIRATAS

class Piratas : public Bando
{
	public:
		Piratas();

		int oceano;
		string tripulacion;
		string funcion;

		string Oceano(){
			return (string){"east", "west", "south", "north blue", "grand line", "new world"}[oceano];
		}

		string to_string()
        {
            return "Piratas\nOceano" + Oceano() + "\nTribulacion:\n" + tripulacion + "\nFuncion: \n" + funcion;
        }
};

#endif
