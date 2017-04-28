#include <iostream>

using namespace std;

// 1) Escriba una programa en C++ que convierta de millas a kilómetros. Su programa debe solicitar por teclado el ingreso de las millas.

int converdist(int m , int k ){

    k = m/6*10;

    cout << "La Distancia en Kilometros es : " << k << endl;

}


int main()
{
   float m;

    float k;

    cout << "Dame la Distancia en Millas : " ;

    cin >> m;

    converdist(m,k);

    cout << endl;
    return 0;
}
