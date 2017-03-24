main:	Ser.o Bando.o Marina.o Piratas.o Revolucionarios.o FrutaDiablo.o Paramecia.o Zoan.o Logia.o main.o 
	g++ Ser.o Bando.o Marina.o Piratas.o Revolucionarios.o FrutaDiablo.o Paramecia.o Zoan.o Logia.o main.o -o main -std=c++11

main.o:	main.cpp
	g++ main.cpp -c

Ser.o: Ser.h
	g++ Ser.cpp -c -std=c++11

Bando.o:	Bando.h
	g++ Bando.cpp -c

Marina.o:	Marina.h
	g++ Marina.cpp -c	

Piratas.o:	Piratas.h
	g++ Piratas.cpp -c	

Revolucionarios.o:	Revolucionarios.h
	g++ Revolucionarios.cpp -c

FrutaDiablo.o:	FrutaDiablo.h
	g++ FrutaDiablo.cpp -c

Paramecia.o:	Paramecia.h 
	g++ Paramecia.cpp -c

Zoan.o:	Zoan.h
	g++ Zoan.cpp -c

Logia.o:	Logia.h
	g++ Logia.cpp -c


clean:
	rm *.o main
