#include <iostream>

using namespace std;
//2) Escriba una programa en C++ que muestre una tabla con grados Fahrenheit y su correspondiente en grados Celsius, el rango de grados Fahrenheit debe ir de 0 a 300 subiendo de 20 en 20.



int convgra(int x){

    for  (float c=0 ;c <=300 ; c+=20){

        float f = c*9/5 +32;

        cout << "Grados Celcius : " << c << "  " << "Grados Fahrenheit: " << f << endl;

    }

    return 0;

}
int main()
{
    convgra(0);

    cout << endl;
    return 0;
}
