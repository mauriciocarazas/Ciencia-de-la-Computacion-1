#include <iostream>

using namespace std;


// 1) Escriba una programa en C++ que convierta de millas a kil�metros. Su programa debe solicitar por teclado el ingreso de las millas.

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

//3)Escriba un programa en C++ que verifique si el n�mero ingresado es par o impar. El programa debe solicitar el n�mero por teclado y solamente debe detenerse cuando el usuario ingresa -1

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

//4)Escriba una funci�n para calcular la potencia de dos n�meros, dicha funci�n debe recibir dos argumentos, la base y el exponente y debe retornar el resultado

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

//5 Escriba un programa que retorne el n�mero ingresado en palabras. Por ejemplo si el usuario ingresa el n�mero 1 el programa debe retornar �uno�, si el usuario ingresa el n�mero 0 el programa retorna �cero�� el programa solo permite n�meros del 0 al 9, caso contrario debe imprimir el mensaje �N�mero no permitido� y debe terminar cuando el usuario ingresa el n�mero -1.

int lectura (int n){
    if (n==0 or n==1 or n==2 or n==3 or n==4 or n==5 or n==6 or n==7 or n==8 or n==9){
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
    }
    else
        cout << "El numero es invalido";
        return 0;

}
//7. Escriba una funci�n para el intercambio de dos n�meros usando paso por referencia.


void changeNumbers(int &a , int &b);

//8 Reescriba la funci�n de intercambio de dos n�meros, utilice punteros en lugar de paso por  referencia.
void changeNumbers(int *r , int *b);


//9Reescriba la funci�n de intercambio de dos n�meros, utilice punteros en lugar de paso por referencia.
void insertionSort(int arreglo[] , int lenght);
void createArreglo(int arreglo[], int lenght);
void printArreglo(int arreglo[], int lenght);

//10

//************************************************************************************************************************************
int main(){
/
// 1
    float m;
    float k;
    cout << "Dame la Distancia en Millas : " ;
    cin >> m;
    converdist(m,k);
    cout << endl;

/*
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


//5
    cout << "Dame un numero : " ;
    int n;
    cin >> n ;
    lectura  (n);

    return 0;


//6
    char sum = '+',
       minus = '-',
       mult = '*',
       divi = '/';
  double numa , numb,resultado;
  char opera;

  cout << "Bienvenido !! " << endl;
  cout << "Soy una calculadora basica y te ayudare a hacer algunas operaciones " << endl;
  cout << "Ingresa 2 numeros seguidos de un operador" << endl;
  cout << "*---------------------*" << endl;
  cout << sum << "Adicion" << endl;
  cout << minus << "Resta" << endl;
  cout << mult << "Multiplicacion" << endl;
  cout << divi << "Division" << endl;
  cout << "*---------------------*" << endl;
  cout << endl << endl;
  cout << "Empezemos !! " << endl;
  cout << "Ingresa el Primer Numero " << endl;
  cin >> numa ;
  cout << "Ingresa el Segundo Numero " << endl;
  cin >> numb ;

  bool cortador = true;
  while (cortador)
  {
    cout << "Ingresa el operador";
    cin >> opera;
    if(opera=='+' || opera == '-' || opera == '*' || opera == '/')
    {
      cortador = false;
    }
    else
    {
      cout << endl << endl << "Ingresa un operador correcto" << endl;
    }
  }
  if (opera == '+'){resultado = numa + numb;}
  else if (opera == '-'){resultado = numa - numb;}
  else if (opera == '*'){resultado = numa * numb;}
  else if (opera == '/'){resultado = numa / numb;}

  cout << "Los valores ingresados fueron " << endl;
  cout << numa << "    " << numb <<endl <<  "El operador escogido fue " << opera << endl;
  cout << "El resultado es " << endl;
  cout << resultado << endl;
  return 0;


//7. Escriba una funci�n para el intercambio de dos n�meros usando paso por referencia.
int number_a , number_b;
  cout << "Intercambiaremos 2 numeros " << endl;
  cout << "Ingresa el numero A" << endl;
  cin >> number_a;
  cout << "Ingresa el numero B" << endl;
  cin >> number_b;

  cout << "El valor de A es " << number_a << endl;
  cout << "El valor de B es " << number_b << endl;

  //uso de la funcion intercambio
  changeNumbers(number_a, number_b);

  cout << "El valor de A ahora es " << number_a << endl;
  cout << "El valor de B ahora es " << number_b << endl;

}

//funcion intercambio
void changeNumbers(int &a , int &b)
{
  int temporal = a;
  a = b;
  b = temporal;
}


//8 Reescriba la funci�n de intercambio de dos n�meros, utilice punteros en lugar de paso por  referencia.

//Declaracion e ingreso de datos para ambos numeros
  int number_a , number_b;
  cout << "Intercambiaremos 2 numeros " << endl;
  cout << "Ingresa el numero A" << endl;
  cin >> number_a;
  cout << "Ingresa el numero B" << endl;
  cin >> number_b;

  cout << "El valor de A es " << number_a << endl;
  cout << "El valor de B es " << number_b << endl;

  //uso de la funcion intercambio con punteros
  int *ptrA = &number_a;
  int *ptrB = &number_b;
  changeNumbers(ptrA, ptrB);

  cout << "El valor de A ahora es " << number_a << endl;
  cout << "El valor de B ahora es " << number_b << endl;

}

//funcion intercambio con punteros
void changeNumbers(int *r, int *s)
  {
     int temp = *r;
     *r = *s;
     *s = temp;
     return;


//9 Reescriba la funci�n de intercambio de dos n�meros, utilice punteros en lugar de paso por referencia.
cout << "Utilizando insertionSort"<< endl;
  cout << "Cuantos elementos ingresaras a la lista: ";
  int lenght; cin >> lenght;
  cout << endl;
  int arreglo[lenght];//declarando el arreglo
  createArreglo(arreglo,lenght);//creando el arreglo
  cout << endl;
  printArreglo(arreglo,lenght);//imprimiendo el arreglo

  insertionSort(arreglo,lenght);// llamando a insertionSort
  printArreglo(arreglo,lenght);// imprimiendo el arreglo ordenando




}

void createArreglo( int arreglo[],int lenght)
{
  //Ingresar los valores de un arreglo pidiendo un lenght
  for( int i = 0 ; i < lenght ; i++)
  {
    int askNumber; cin >> askNumber;
    arreglo[i] = askNumber;
  }


}
void insertionSort( int arreglo[], int lenght)
{

  for( int  i = 1 ; i < lenght ; i++)
  {
    int j = i;
    while ( j > 0 && arreglo[j-1] > arreglo [j])
    {
      int temp = arreglo[j];
      arreglo[j]=arreglo[j-1];
      arreglo[j-1]=temp;
      j--;
    }
  }

}

void printArreglo(int arreglo[],int lenght)
{
  //imprime los valores del arreglo
  cout << "La lista es: ";
  for(int x = 0 ; x < lenght ; x++)
  {
    cout << arreglo[x] << " " ;
  }
  cout << endl;

*/
}
