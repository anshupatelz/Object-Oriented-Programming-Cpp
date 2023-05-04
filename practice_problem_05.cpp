/*Create a class called "Vehicle" that has a virtual method called "drive."
Create subclasses of "Vehicle" for different types of vehicles
like "Car," "Truck," and "Motorcycle." Implement the "drive" method for each subclass.*/

#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void drive()
    {
        cout << "Driving a vehicle..." << endl;
    }
};

class Car : public Vehicle
{
public:
    void drive()
    {
        cout << "Driving a car..." << endl;
    }
};

class Truck : public Vehicle
{
public:
    void drive()
    {
        cout << "Driving a truck..." << endl;
    }
};

class Motorcycle : public Vehicle
{
public:
    void drive()
    {
        cout << "Driving a motorcycle..." << endl;
    }
};

int main()
{
    // create objects of each subclass
    Vehicle *v1 = new Car();
    Vehicle *v2 = new Truck();
    Vehicle *v3 = new Motorcycle();

    // call drive() method on each object
    v1->drive();
    v2->drive();
    v3->drive();

    return 0;
}

// Done