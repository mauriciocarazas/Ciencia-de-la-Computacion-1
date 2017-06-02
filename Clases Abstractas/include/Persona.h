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
	virtual const string mostrarDatos()=0;
	virtual const string mostrarNombre()=0;
	const int mostrardni();


};

#endif // PERSONA_H
