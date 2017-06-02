#include <iostream>
#include "persona.h"
#include "Gerente.h"
#include "Conserge.h"
#include "Birthday.h"
using namespace std;
#include<string>
int main() {
	Birthday c1(12, 12, 1999);
	Birthday c2(11, 6, 2015);
	Birthday c3(10, 2, 1990);
	//Persona p1("luis ",71213933, c1);
	Gerente g1("mateo ", 711232124,c2,"Licenciado", 78123);
	Conserje d1("marcos ", 87465462,c3,"UCSP", 100);
	/*Persona *arr = new Persona[3];
	arr[0] = p1;
	arr[1] =g1;
	arr[2] = d1;
	for (int i = 0;i < 3;i++) {
		cout << arr[i]->mostrarDatos() << endl;
	}
	//cout << g1.mostrarDatos() << endl;
	//cout << c1.mostrarDatos() << endl;


	*/
	return 0;
}
