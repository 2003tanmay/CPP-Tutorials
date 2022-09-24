//************************Inheritance*****************
/*
Inheritance = the capebility of a class to derive properties and characteristics from another class is
              called inheritance. In this new classes are created from the existing class. New class is
              called derived or child class and existing class is called base or parent class.

What is Inheritance in C++?
--> The concept of reusability in C++ is supported using inheritance
--> We can reuse the properties of an existing class by inheriting it
--> The existing class is called a base class
--> The new class which is inherited from the base class is called a derived class
--> Reusing classes saves time and money
--> There are different types of inheritance in C++

Forms of Inheritance in C++
--> Single Inheritance = Single inheritance is a type of inheritance in which a derived class is inherited
                         with only one base class.
--> Multiple Inheritance =  Multiple inheritances are a type of inheritance in which one derived class is
                            inherited with more than one base class.
--> Hierarchical Inheritance = A hierarchical inheritance is a type of inheritance in which several derived
                               classes are inherited from a single base class.
--> Multilevel Inheritance = Multilevel inheritance is a type of inheritance in which one derived class is
                             inherited from another derived class.
--> Hybrid Inheritance = Hybrid inheritance is a combination of multiple inheritance and multilevel
                         inheritance. In hybrid inheritance, a class is derived from two classes as in
                         multiple inheritances.
-----------------------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)      //constructor
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}            //blank constructor
};

// Derived Class syntax
/*class derived-class-name : visibility-mode base-class-name
{
    class members/methods/etc...
}*/

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}
