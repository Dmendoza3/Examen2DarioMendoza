#include "Bando.h"

#ifndef PIRATAS
#define PIRATAS

class Piratas : public Bando
{
	public:
		int oceano;
		string tripulacion;
		string funcion;

		Piratas(int oc, string trip, string func){
			oceano = oc;
			tripulacion = trip;
			funcion = func;
		}

		string Oceano(){
			return (string[6]){"east", "west", "south", "north blue", "grand line", "new world"}[oceano];
		}

		string to_string()
        {
            return "Piratas\nOceano" + Oceano() + "\nTribulacion:\n" + tripulacion + "\nFuncion: \n" + funcion;
        }
};

#endif
