#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    //********************Constructor**********************
    /*A constructor is a special member function with the same name as the class.
    Constructors are automatically invoked whenever an object is created.*/
    complex(void); // Construction declaretion

    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void) // Constructor defination ----> This is a default constructor as it takes no parameters.
{
    a = 10;
    b = 8;
}

int main()
{
    complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();

    return 0;
}

/*
Important Characteristics of Constructors in C++

A constructor should be declared in the public section of the class.
Constructors are used to initialize the objects of its class.
They are automatically invoked whenever the object is created.
They cannot return values and do not have return types.
It can have default arguments.
We cannot refer to their address.
*/