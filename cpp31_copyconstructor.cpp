#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    //**********************Copy Constructor**********************
    /*A copy constructor is a type of constructor that creates a copy of another object of same class.
    If we want one object to resemble another object we can use a copy constructor. For creating copy
    it takes a reference to an object of the same class as an argument.If no copy constructor is
    written in the program compiler will supply its own copy constructor.*/
    Number(Number &obj)
    {                   // copy constructor
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    
    Number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();

    // z1 should exactly resemble z or x or y

    return 0;
}
