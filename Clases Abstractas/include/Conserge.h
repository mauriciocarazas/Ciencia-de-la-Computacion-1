#ifndef CONSERGE_H
#define CONSERGE_H
#include "Persona.h"
#include <string>
using namespace std;
class Conserje :public Persona {
private:
	string edificio;
	int llaves;

public:
	Conserje(string, int,Birthday, string, int);
	const string mostrarDatos();
	const string mostrarNombre();
	const int  mostrarllaves();
	const string mostraredificio();

};
#endif
