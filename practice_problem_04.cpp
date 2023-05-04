/*Create a class called "Person" that has a name and age property.
Use abstraction to create subclasses called "Teacher" and "Student"
that have additional properties and methods specific to their roles.
*/

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    virtual void introduce() = 0;
};

class Teacher : public Person
{
protected:
    string department;

public:
    Teacher(string name, int age, string department) : Person(name, age)
    {
        this->department = department;
    }

    void introduce()
    {
        cout << "Hello, my name is " << name << ", I'm " << age << " years old, and I'm a teacher in the " << department << " department." << endl
             << endl;
    }
};

class Student : public Person
{
protected:
    string major;
    float gpa;

public:
    Student(string name, int age, string major, float gpa) : Person(name, age)
    {
        this->major = major;
        this->gpa = gpa;
    }

    void introduce()
    {
        cout << "Hello, my name is " << name << ", I'm " << age << " years old, and I'm a student majoring in " << major << " with a GPA of " << gpa << "." << endl
             << endl;
    }
};

int main()
{
    Person *people[4];
    people[0] = new Teacher("Satnaam Patel", 32, "Mathematics");
    people[1] = new Student("Anshu Patel", 18, "Computer Science", 9.2);
    people[2] = new Student("Rashi Patel", 17, "Biology", 9.4);
    people[3] = new Teacher("Rashmi Singh", 24, "Science");

    for (int i = 0; i < 4; i++)
    {
        people[i]->introduce();
    }
    return 0;
}

// Done