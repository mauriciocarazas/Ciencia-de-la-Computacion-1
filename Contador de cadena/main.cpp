#include <iostream>

using namespace std;



//IMPORTAR UNA FUNCION PARA OBTENER EL TAMAÑO DE LA CADENA

int contar (const char array[]){
    int cont = 0;
    for (int i=0; array[i] != '\0' ;i++){
        cont++;
    }
    return cont;
}

int main()
{


    cout << "El numero de elementos de el array es: " << contar("hola") << endl;


    return 0;
}
