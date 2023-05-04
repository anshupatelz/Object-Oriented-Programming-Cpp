/* Create a class called "Shape" that has a virtual method called "calculateArea."
Create subclasses of "Shape" for different shapes like "Circle," "Rectangle," and "Triangle."
Implement the "calculateArea" method for each subclass. */

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float calculateArea(float, float){};
};

class Circle : public Shape
{
public:
    float calculateArea(float radius, float pi)
    {
        return pi * radius * radius;
    }
};

class Rectangle : public Shape
{
public:
    float calculateArea(float length, float breadth)
    {
        return length * breadth;
    }
};

class Triangle : public Shape
{
public:
    float calculateArea(float base, float height)
    {
        return (1.0 / 2) * base * height;
    }
};

int main()
{

    Shape *shape_1 = new Circle();
    Shape *shape_2 = new Rectangle();
    Shape *shape_3 = new Triangle();

    cout << "Area of Circle: " << shape_1->calculateArea(10, 3.14) << endl;
    cout << "Area of Rectangle: " << shape_2->calculateArea(3, 4) << endl;
    cout << "Area of Triangle: " << shape_3->calculateArea(5, 10) << endl;

    delete shape_1;
    delete shape_2;
    delete shape_3;

    return 0;
}

// Done