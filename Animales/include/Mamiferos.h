#ifndef MAMIFEROS_H
#define MAMIFEROS_H
#include <string>
#include <iostream>
using namespace std;

class Mamiferos
{
    protected:
        int patas;
        string pelaje;
        int edad;
    public:
        Mamiferos();
        string andar();
        string sonido();
        int vivir();

};

#endif // MAMIFEROS_H
