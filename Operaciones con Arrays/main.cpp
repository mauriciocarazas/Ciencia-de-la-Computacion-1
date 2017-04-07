#include <iostream>
using namespace std;

//FUNCION SUMA DE ELEMENTOS DE UN ARRAY
int sum (const int array[], const int length){
    int sum = 0;
    for (int i=0; i < length ; sum +=array[i++]);
    return sum;
}


//FUNCION PROMEDIO DE LOS ELEMENTOS DEL ARRAY
float promedio (const int array[], const int length){
    return (float) sum(array, length)/length;
}


//INVERTIR EL ARREGLO
int invertir (int arreglo[], int longitud){
    for (int i = 0 ; i<longitud/2 ; i++ ){
        int temp;
        temp = arreglo[i];
        arreglo [i] = arreglo [longitud-i-1];
        arreglo [longitud-i-1] = temp;
    }
    return 0;
}

//ORDENAR LOS ELEMENTOS DEL ARRAY
int ordenar (int array[], const int length){}


/*
IMPORTAR UNA FUNCION PARA OBTENER EL TAMAÑO DE LA CADENA
char arr [] = "hello"

'h' 'e' 'l' 'l' 'o'

*/

int main(){
//INICIAR UN ARREGLO DE ENTEROS DE 'n' ELEMENTOS
    cout << "Dame un numero de elemento para el array: ";
    int n; cin >> n;
    int arya [n];

//LE DA VALORES A LOS
    for (int i=0; i < n ; i++ ){
        cout << "Dame un valor para el elemento en la posicion " << i << endl;
        int (a);
        cin >> a;
        arya[i] = a;
    }

//IMPRIME EL ARRAY INDICANDO VALORES Y POSICIONES
    for (int i=0; i < n ; i++ ){
        cout << "El valor del elemento: " << i+1 << " es = " << arya[i] << endl;
    }


/*
cout << "La suma de los elementos del array es: " << sum(arya,n) << endl;

cout << "El promedio de los elementos del array es: " << promedio(arya,n) << endl;

cout << "El array invertido es :" <<  endl;
invertir (arya,n);
for (int i=0; i < n ; i++ ){
        cout << "El valor del elemento: " << i+1 << " es = " << arya[i] << endl;
    }
*/




    return 0;
}
