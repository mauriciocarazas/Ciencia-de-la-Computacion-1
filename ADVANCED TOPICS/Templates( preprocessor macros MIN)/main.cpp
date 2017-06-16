#include <iostream>

using namespace std;
#define numin(x,y)(x<y?x:y)
int main()
{
    int num1 = 5;
    int num2 = -6;
    float num3 = 23.32;
    float num4 = 12.43;
    double num5 = 456.154;
    double num6 = 852.147;
    cout <<numin(num1,num2) << endl;
    cout <<numin(num4,num3)<< endl;
    cout <<numin(num5,num6)<< endl;


    return 0;
}
