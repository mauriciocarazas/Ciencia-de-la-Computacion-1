#ifndef CANINO_H
#define CANINO_H
#include "Mamiferos.h"
#include <string>
#include <iostream>
using namespace std;


class canino:public Mamiferos
{
   private:
       int dientes;
       string edad;

   public:

        canino(string pelaje, int edad);

            int getpatas();

            string getpelaje();

            int getedad();

};


#endif // CANINO_H
