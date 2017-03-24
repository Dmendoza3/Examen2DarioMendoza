#include <string>

#include "FrutaDiablo.h"
#include "Bando.h"

using namespace std;

#ifndef SER
#define SER

class Ser
{
	public:
		int raza;
		int edad;
		string name;
		FrutaDiablo* fruta;
		bool hakiObs;
		bool hakiArmadura;
		bool hakiRey;
		Bando* bando;
		
		//Metodos
		Ser(int ra, int ed, string na, FrutaDiablo* fr, bool haki1, bool haki2, bool haki3, Bando* ba);

		string Raza(){
			return (string[6]){"gyojin", "kyojin", "ningyo", "humano", "mink", "skypieans"}[raza];
		};

		string Fruta()
		{
			if (fruta == NULL)
				return "\nNo tiene fruta del diablo.\n";
			
			//return fruta.to_string();
		}

		string Hakis()
		{
			string msg = "";
			
			if(hakiObs) msg += "\nManeja Haki de observacion.\n";
			if(hakiArmadura) msg += "\nManeja Haki de armadura.\n";
			if(hakiRey) msg += "\nManeja Haki del rey.\n";

			return msg;
		}

		string to_string();

		~Ser();
};

#endif
