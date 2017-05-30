#ifndef FELINO_H
#define FELINO_H
#include <string>
#include "Mamiferos.h"
#include <iostream>
using namespace std;


class felino:public Mamiferos
{
   private:
       int garras;


   public:

        felino(string pelaje, int edad);

            int getpatas();

            string getpelaje();

            int getedad();

};

#endif // FELINO_H
