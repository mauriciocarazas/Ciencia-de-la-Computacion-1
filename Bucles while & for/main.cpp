#include <iostream>

using namespace std;

int main()
{

// HACER UN ARRAY Y DESPUES INVERTIRLO USANDO WHILE Y FOR

   int arreglo [4];

//CREAMOS LA LISTA CON FOR
   for (int i = 0 ; i < 4; i++){ //EL FOR ESTA HECHO DE MANERA FOR (INICIALIZO , CONDICION , INC)
    cout << "dame un valor para el elemento " << i << " del array :" <<endl;
    cin >> arreglo [i];
   }

// IMPRIMIR LOS CALORES DEL ARREGLO
    cout << "los valores originales son: " << endl;
    cout << "El valor 1 de la lista es:" << arreglo [0] << endl;
    cout << "El valor 2 de la lista es:" << arreglo [1] << endl;
    cout << "El valor 3 de la lista es:" << arreglo [2] << endl;
    cout << "El valor 4 de la lista es:" << arreglo [3] << endl;
    cout << endl;

/*
*************************************************************************
INVERTIR EL ARREGLO
    for (int i = 0 ; i<longitud/2 ; i++ ){
        int temp;
        temp = arreglo[i];
        arreglo [i] = arreglo [longitud-i-1];
        arreglo [longitud-i-1] = temp;
    }
    cout << "los valores cambiados son: " << endl;
    cout << "El valor 1 de la lista es:" << arreglo [0] << endl;
    cout << "El valor 2 de la lista es:" << arreglo [1] << endl;
    cout << "El valor 3 de la lista es:" << arreglo [2] << endl;
    cout << "El valor 4 de la lista es:" << arreglo [3] << endl;

**************************************************************************

SUMAR LOS ELEMENTOS DEL ARREGLO
    int a = 0;

    for (int i=0 ; i < 4 ; i++){
        a = a + arreglo [i];
    }
    cout << "la suma de los elementos de la lista es " << a << endl;

***************************************************************************

//HALALR EL MAYOR DE LOS ELEMENTOS DE UN ARREGLO

    int i = 0;
    int temp;
    while ( i < 4){
        if (arreglo [i] > arreglo [i+1]){
            temp = arreglo [i];
            i++;
        }
        else{
            temp = arreglo [i + 1];
            i++;
            }
    }
    cout << "El mayor de los elementos del arreglo es : " << temp << endl;

****************************************************************************

*/
    return 0;
}
