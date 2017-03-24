#include <string>

using namespace std;

#ifndef BANDO
#define BANDO

class Bando
{
	public:
		Bando();
		virtual ~Bando(){}

		virtual string to_string() = 0;
};

#endif
