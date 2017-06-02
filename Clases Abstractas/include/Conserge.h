#ifndef CONSERGE_H
#define CONSERGE_H
#include "Persona.h"
#include <string.h>
using namespace std;
class Conserje :public Persona {
private:
	string edificio;
	int llaves;

public:
	Conserje(string, int,Birthday, string, int);
	virtual const string mostrarDatos();
	virtual const int  mostrarllaves();
	const string mostraredificio();

};
#endif
