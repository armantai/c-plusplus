#include <iostream>
#include <string>
using namespace std;

class vehicle
{
public:
    virtual void startengine() = 0;
    virtual void drive() = 0;

    virtual ~vehicle() {}
};

class car : public vehicle
{

    void startengine()
    {
        cout << "car engine started." << endl;
    }

    void drive()
    {
        cout << "driving the car." << endl;
    }
};

class bike : public vehicle
{

    void startengine()
    {
        cout << "bike engine started." << endl;
    }

    void drive()
    {
        cout << "riding the bike." << endl;
    }
};

int main()
{

    car c;
    bike b;

    vehicle *vehicles[2];
    vehicles[0] = &c;
    vehicles[1] = &b;

    for (int i = 0; i < 2; ++i)
    {
        cout << "\nvehicle " << i + 1 << ":" << endl;
        vehicles[i]->startengine(); 
        vehicles[i]->drive();       
    }

    return 0;
}