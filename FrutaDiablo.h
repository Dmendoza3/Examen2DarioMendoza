#include <string>

using namespace std;

#ifndef FRUTA
#define FRUTA

class FrutaDiablo
{
	public:
		string nombre;

		//Constructor
		FrutaDiablo(){}
		FrutaDiablo(string name);

		virtual string to_string(){return "No tiene fruta del diablo.";}

		virtual ~FrutaDiablo(){};
};

#endif
