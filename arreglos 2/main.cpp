#include <iostream>

using namespace std;

int main()
{
    //CREA UN ARRAY DE CUATRO ELEMENTOS Y LUEGO HAS QUE SE INVIERTAN EN EL MISMO ARRAYU

    int arreglo [4];
    cout << "Dame valor para elemento 1" << endl;
    cin  >> arreglo [0];

    cout << "Dame valor para elemento 2" << endl;
    cin  >> arreglo [1];

    cout << "Dame valor para elemento 3" << endl;
    cin  >> arreglo [2];

    cout << "Dame valor para elemento 4" << endl;
    cin  >> arreglo [3];

    cout << "El arrays oringinal tiene: " << endl;
    cout << "el valor de arrelgo 1 es: " << arreglo [0] << endl;
    cout << "el valor de arrelgo 2 es: " << arreglo [1] << endl;
    cout << "el valor de arrelgo 3 es: " << arreglo [2] << endl;
    cout << "el valor de arrelgo 4 es: " << arreglo [3] << endl;
    cout << endl;

    int temp;
    temp =arreglo [0];
    arreglo [0] = arreglo [3];
    arreglo [3] = temp;

    temp =arreglo [1];
    arreglo [1] = arreglo [2];
    arreglo [2] = temp;


    cout << "El arrays variado tiene: " << endl;
    cout << "el valor de arrelgo 1 es: " << arreglo [0] << endl;
    cout << "el valor de arrelgo 2 es: " << arreglo [1] << endl;
    cout << "el valor de arrelgo 3 es: " << arreglo [2] << endl;
    cout << "el valor de arrelgo 4 es: " << arreglo [3] << endl;












    return 0;
}
