/*#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>
using namespace std;


class Vehicle{
    protected:
        string license;
        int year;
    public:
        Vehicle();
        Vehicle(const string);
        Vehicle( const string &myLicense , const int myYear)
            : license(myLicense), year(myYear) {}
        const string getDesc() const
            {return license + " from " + "stringyfy(year)";}
        const string &getLicense() const {return license;}
        const int getYear() const {return year;}
};


#endif // VEHICLE_H
*/
