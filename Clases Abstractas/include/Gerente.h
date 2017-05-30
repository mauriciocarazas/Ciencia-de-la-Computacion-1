#ifndef GERENTE_H
#define GERENTE_H
#include "Persona.h"
#include <string.h>
using namespace std;

class Gerente :public Persona {
private:
	string area;
	int codigo;

public:
	Gerente(string, int,Birthday,string,int);
	const string mostrarDatos();
	const string mostrarArea();
	const int mostrarCodigo();


};
