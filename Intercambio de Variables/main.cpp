#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    float a_cuadrado;
    float a_circulo;
    float a_rectangulo;
    float pi ;
    float l_cuadrado;
    float radio_circulo;
    float alt_rectangulo;
    float base_rectangulo;

    pi = 3.14;

    cout << "Dame un lado del cuadrado";
    cin >> l_cuadrado;
    cout << "Area del cuadrado = " << l_cuadrado << "**" << l_cuadrado << endl;
    a_cuadrado = l_cuadrado*l_cuadrado;
    cout << "Area del cuadrado = " << a_cuadrado << endl;

    cout << "Dame el radio del circulo";
    cin >> radio_circulo;
    cout << "radio del circulo = " << radio_circulo << "**" << radio_circulo << "*" << pi << endl;
    a_circulo= radio_circulo*radio_circulo*pi;
    cout << "area del circulo = " << a_circulo << endl;


    cout << "Dame la altura del rectangulo" ;
    cin >> alt_rectangulo;
    cout << "Dame la base del rectangulo";
    cin >> base_rectangulo;
    cout << "area del rectangulo = " << alt_rectangulo << "*" << base_rectangulo << endl;
    a_rectangulo = alt_rectangulo * base_rectangulo;
    cout << "area del rectangulo = " << a_rectangulo ;
    return 0;
}

