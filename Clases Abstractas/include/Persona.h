#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string.h>
#include "Birthday.h"
using namespace std;
class Persona {
protected:
	string nombre;
	int dni;
	Birthday cumple;
public:
	Persona(string, int,Birthday);
	Persona();
	virtual const string mostrarDatos();
	virtual const string mostrarNombre();
	const int mostrardni();


};

#endif // PERSONA_H
