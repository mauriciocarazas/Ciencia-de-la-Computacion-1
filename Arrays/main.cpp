#include <iostream>

using namespace std;

int main()
{
/*
    //ARRAYS
    int score [5];
    //arrays de 5 elemento , va desde 0 hasta 4


    score [0] = 6;
    score [1] = 7;
    score [2] = 12;
    score [3] = 56;
    score [4] = 9;
    cout << "el elemento 1 en la posicion : 0 ...es igual a : " << score [0] << endl;
    cout << "el elemento 2 en la posicion : 1 ...es igual a : " << score [1] << endl;
    cout << "el elemento 3 en la posicion : 2 ...es igual a : " << score [2] << endl;
    cout << "el elemento 4 en la posicion : 3 ...es igual a : " << score [3] << endl;
    cout << "el elemento 5 en la posicion : 4 ...es igual a : " << score [4] << endl;

    **************************************************************************
    */
    int score [6];
    int c = 5;
    score [0] = c++;
    score [1] = c++;
    score [2] = c++;
    score [3] = c++;
    score [4] = c++;
    score [5] = c++;

    c =5;

    cout << "el arregclo es: " << score [c--] << endl;
    cout << "el arregclo es: " << score [c--] << endl;
    cout << "el arregclo es: " << score [c--] << endl;
    cout << "el arregclo es: " << score [c--] << endl;
    cout << "el arregclo es: " << score [c--] << endl;
    cout << "el arregclo es: " << score [c--] << endl;
    return 0;
}
