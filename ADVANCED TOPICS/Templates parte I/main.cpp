#include <iostream>
using namespace std;

template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main()
{
    int num1=       -4;
    float num2 =    -23.42;
    double num3 =   -1221.4567;
    mostrarAbs(num1 );
    mostrarAbs(num2 );
    mostrarAbs(num3 );

    return 0;
}

template<class TIPOD>
void mostrarAbs(TIPOD numero){
    if (numero < 0){
        numero = numero*-1;
    }
    cout << "El valor absoluto del numero es:"<< numero << endl;
}
