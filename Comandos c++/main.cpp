#include <iostream>

using namespace std;

int main()
{

    /*

    ***********************
    int x = 4;
    int y = 8;

    cout << "x =" << x << endl;
    cout << "y =" << y << endl;

    cout << "x++ = " << endl;
    int a = x++ ;
    cout << a << endl;


    cout << "y++ = " << endl;
    int  b = y++;
    cout << b << endl;


    cout << "x-- = " << endl;
    int c = x--;
    cout << c << endl;


    cout << "y-- = " << endl;
    int d = y--;
    cout << d << endl;


    cout << "++x = " << endl;
    int e = ++x ;
    cout << e << endl;


    cout << "++y = " << endl;
    int f = ++y;
    cout << f << endl;


    cout << "--x = " << endl;
    int g = --x;
    cout << g << endl;


    cout << "--y = " << endl;
    int h = --y;
    cout << h << endl;

    ********************************



    int a = 6;
    int b = a+=2;
    cout << "b= "<< b << endl;


    a = 6;
    int c = a-=2;
    cout << "c= "<< c << endl;

    a = 6;
    int d = a*=2;
    cout << "d= "<< d << endl;

    a = 6;
    int e = a/=2;
    cout << "e= "<< e << endl;

    ********************************

    */

    int a ;
    int b ;
    int z ;
    cout << "Dame un valor para a: ";
    cin >> a;
    cout << "a= " << a << endl;
    cout << "Dame un valor para b: ";
    cin >> b;
    cout << "b= " << b << endl;
 /*

    if (a>b)
        z =a;
    else
        z =b;
    cout << " z= " << z;
.... ES LO MISMO QUE:

*/
//COMPARA E IGUALA LA MAYOR A "Z"
    z = (a>b)? a:b;
    cout <<"El mayor es : "<< z;

***********************
*/
    return 0;
}
