#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    x = 10;
    y = 20;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

}
