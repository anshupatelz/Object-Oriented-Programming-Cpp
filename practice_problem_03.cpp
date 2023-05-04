/*Create a class called "Student" that has a name and age property.
Use inheritance to create a subclass called "UndergradStudent" that has a major property,
and another subclass called "GradStudent" that has a researchTopic property.*/

#include <iostream>
#include <string>
using namespace std;

// Student Class
class Student
{
protected:
    string name;
    int age;

public:
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

// UndergradStudent Class inheritance from Student Class
class UndergradStudent : public Student
{
protected:
    string major;

public:
    UndergradStudent(string name, int age, string major) : Student(name, age)
    {
        this->major = major;
    }

    void display()
    {
        cout << "Undergrad Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Major: " << major << endl
             << endl;
    }
};

// GradStudent Class inheritance from Student Class
class GradStudent : public Student
{
protected:
    string researchTopic;

public:
    GradStudent(string name, int age, string researchTopic) : Student(name, age)
    {
        this->researchTopic = researchTopic;
    }

    void display()
    {
        cout << "Grad Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Research Topic: " << researchTopic << endl
             << endl;
    }
};

int main()
{
    UndergradStudent undrgrad("Anshu", 18, "Programming In C");
    undrgrad.display();

    GradStudent grad("Aakash", 22, "Artificial Intelligence");
    grad.display();

    return 0;
}

// Done