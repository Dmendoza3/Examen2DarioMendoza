#include <string>

using namespace std;

#ifndef FRUTA
#define FRUTA

class FrutaDiablo
{
	public:
		string nombre;

		//Constructor
		FrutaDiablo(){};

		virtual to_string() = 0; 

		virtual ~FrutaDiablo(){};
};

#endif
