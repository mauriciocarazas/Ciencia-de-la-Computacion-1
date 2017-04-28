#include <iostream>

using namespace std;
int lectura (int n){
    if (n==0 or n==1 or n==2 or n==3 or n==4 or n==5 or n==6 or n==7 or n==8 or n==9){
        if (n==0)
            cout << "El numero es : " <<  "cero" ;
        if (n==1)
            cout << "El numero es : " <<  "uno" ;
        if (n==2)
            cout << "El numero es : " <<  "dos" ;
        if (n==3)
            cout << "El numero es : " <<  "tres" ;
        if (n==4)
            cout << "El numero es : " <<  "cuatro" ;
        if (n==5)
            cout << "El numero es : " <<  "cinco" ;
        if (n==6)
            cout << "El numero es : " <<  "seis" ;
        if (n==7)
            cout << "El numero es : " <<  "siete" ;
        if (n==8)
            cout << "El numero es : " <<  "ocho" ;
        if (n==9)
            cout << "El numero es : " <<  "nueve" ;

    }
    else
        cout << "El numero es invalido";
        return 0;


}
int main()
{
    //5
    cout << "Dame un numero : " ;
    int n;
    cin >> n ;
    lectura  (n);
    return 0;
}
