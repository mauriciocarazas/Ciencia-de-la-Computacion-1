#include <iostream>

using namespace std;


// HACER SUMA, PROMEDIO, INVERSION Y ORDENAMIENTO CON PUNTEROS

int sum (const int *arreglo, const int length){
    long sum = 0;
    for (int i=0 ; i < length ; sum += *arreglo+i++);
    return sum;
}


int main()
{

    int arr[] = {1,2,3,4,5,6,7};
    cout << "Suma de elementos del arreglos es : " << sum(arr,7) << endl;


    return 0;
}
