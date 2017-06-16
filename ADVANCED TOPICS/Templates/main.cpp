#include <iostream>

using namespace std;

template <typename T, typename U>
U sum (const T a, const U b){
    return a+b;

}


int main()
{

    cout << sum <int> (1,2) << endl;
    cout << sum <float> (1.21,2.43) << endl;





    return 0;
}
