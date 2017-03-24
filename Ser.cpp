#include "Ser.h"


Ser::Ser(int ra, int ed, string na, FrutaDiablo* fr, bool haki1, bool haki2, bool haki3, Bando* ba){
            raza = ra;
            edad = ed;
            name = na;
            fruta = fr;
            hakiObs = haki1;
            hakiArmadura = haki2;
            hakiRey = haki3;
            bando = ba;
}

string Ser::to_string()
{
	string to = "Ser\nRaza: ";
	to += Raza() + "\nEdad: ";
	to += "" + std::to_string(edad);
	to += "\nNombre: ";
	to += name + "\nFruta del diablo: ";
	to += fruta->to_string() + Hakis() + "Bando: " + bando->to_string() + "\n";
	return to;
}

Ser::~Ser()
{
	delete bando;
}

