#include <iostream>

using namespace std;
//3)Escriba un programa en C++ que verifique si el número ingresado es par o impar. El programa debe solicitar el número por teclado y solamente debe detenerse cuando el usuario ingresa -1



int paridad(int n){

    if (n==-1)

        cout << n << " Es invalido";

    else{

        if (n%2==0)

            cout << n << " Es par" ;

        else

            cout << n << " Es impar";

    }

}


int main()
{
    //3

    cout << "Dame un numero para determinar si es par o impar: " ;

    int n;

    cin >> n;

    paridad(n);


    return 0;
}
