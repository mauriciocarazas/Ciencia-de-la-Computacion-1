#include <iostream>

using namespace std;
//4)Escriba una función para calcular la potencia de dos números, dicha función debe recibir dos argumentos, la base y el exponente y debe retornar el resultado



int potencia (int b, int e){

    if (e==0)

        return 1;

    if (e==1)

        return b;

    else{

        for (int i=1 ; i<e ; i++){

            int temp = b;

            b = b*temp ;

        }

        return b;

    }

}


int main()
{
    //4

    cout << "La Base" << endl ;

    int b;

    cin >> b;



    cout << "El Exponente "<< endl ;

    int e;

    cin >> e;



    cout << potencia (b,e);
    return 0;
}
