#ifndef BIRTHDAY_H
#define BIRTHDAY_H

class Birthday {
protected:
	int dia;
	int mes;
	int year;
public:
	Birthday(int, int, int);
	Birthday();
	const int mostrarEdad();
	const int mostrardia();
	const int mostrarmes();
	const int mostraryear();
};
#endif
