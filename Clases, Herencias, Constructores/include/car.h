#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
using namespace std;
class car
{
    public:
        car(string l,int y,string s);
        car();
    protected:

    private:
        string license;
        int year;
        string style;
};

#endif // CAR_H
