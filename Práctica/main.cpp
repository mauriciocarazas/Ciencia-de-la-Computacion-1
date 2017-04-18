#include <iostream>

using namespace std;


// 1) Escriba una programa en C++ que convierta de millas a kilómetros. Su programa debe solicitar por teclado el ingreso de las millas.

int converdist(int m , int k ){
    k = m/6*10;
    cout << "La Distancia en Kilometros es : " << k << endl;
}

//2) Escriba una programa en C++ que muestre una tabla con grados Fahrenheit y su correspondiente en grados Celsius, el rango de grados Fahrenheit debe ir de 0 a 300 subiendo de 20 en 20.

int convgra(int x){
    for  (float c=0 ;c <=300 ; c+=20){
        float f = c*9/5 +32;
        cout << "Grados Celcius : " << c << "  " << "Grados Fahrenheit: " << f << endl;
    }
    return 0;
}

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

//5 Escriba un programa que retorne el número ingresado en palabras. Por ejemplo si el usuario ingresa el número 1 el programa debe retornar “uno”, si el usuario ingresa el número 0 el programa retorna “cero”… el programa solo permite números del 0 al 9, caso contrario debe imprimir el mensaje “Número no permitido” y debe terminar cuando el usuario ingresa el número -1.

int lectura (int n){
    if (n==0)
        cout << "El numero es : " <<  "cero" ;
        return 0;
    if (n==1)
        cout << "El numero es : " <<  "uno" ;
        return 0;
    if (n==2)
        cout << "El numero es : " <<  "dos" ;
        return 0;
    if (n==3)
        cout << "El numero es : " <<  "tres" ;
        return 0;
    if (n==4)
        cout << "El numero es : " <<  "cuatro" ;
        return 0;
    if (n==5)
        cout << "El numero es : " <<  "cinco" ;
        return 0;
    if (n==6)
        cout << "El numero es : " <<  "seis" ;
        return 0;
    if (n==7)
        cout << "El numero es : " <<  "siete" ;
        return 0;
    if (n==8)
        cout << "El numero es : " <<  "ocho" ;
        return 0;
    if (n==9)
        cout << "El numero es : " <<  "nueve" ;
        return 0;
    else
        cout << "El numero es invalido";
        return 0;


}



//************************************************************************************************************************************
int main()
{
/*potencia (3,2)
// 1
    float m;
    float k;
    cout << "Dame la Distancia en Millas : " ;
    cin >> m;
    converdist(m,k);
    cout << endl;

//2
    convgra(0);
    cout << endl;

//3
    cout << "Dame un numero para determinar si es par o impar: " ;
    int n;
    cin >> n;
    paridad(n);


//4
    cout << "La Base" << endl ;
    int b;
    cin >> b;

    cout << "El Exponente "<< endl ;
    int e;
    cin >> e;

    cout << potencia (b,e);

*/
//5
    cout << "Dame un numero : " ;
    int n;
    cin >> n ;
    lectura  (n);

    return 0;
}
