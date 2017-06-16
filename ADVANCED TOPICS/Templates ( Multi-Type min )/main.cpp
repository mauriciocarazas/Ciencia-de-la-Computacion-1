#include <iostream>

using namespace std;

template <class T>
void numin(T x,T y);

int main()
{

    int num1 = 5;
    int num2 = -6;
    float num3 = 23.32;
    float num4 = 12.43;
    double num5 = 456.154;
    double num6 = 852.147;
    numin(num1,num2);
    numin(num4,num3);
    numin(num5,num6);
    //numin(num3,num6);
    return 0;
}
template <class T>
void numin(T x,T y){
    if (x<y){
            cout << "el menor numero es:" << x<< endl;
    }
    else {
            cout << "el menor numero es:" << y<< endl;
    }

}
