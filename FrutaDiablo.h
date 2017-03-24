#include <string>

using namespace std;

#ifndef FRUTA
#define FRUTA

class FrutaDiablo
{
	public:
		string nombre;

		//Constructor
		FrutaDiablo(string name){
			nombre = name;
		}

		virtual to_string() = 0; 

		virtual ~FrutaDiablo(){};
};

#endif
