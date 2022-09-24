//************************Visibility Mode***********************
/*
Visibility mode = it is besically decide how derived class access member of base class.

Protected Access Modifiers = they are similar to the private access modifiers but protected access
modifiers can be accessed in the derived class whereasmprivate access modifiers cannot be accessed in the
derived class.
*Default visibility mode is private.

Behavior of Visibility modes:
-----------------------------------------------------------------------------------------------------
                    |   Public Derivation   | 	Private Derivation  |  	Protected Derivation        |
-----------------------------------------------------------------------------------------------------
Private members     |  	Not Inherited       |   Not Inherited       |    Not Inherited              |
Protected members   |   Protected           |   Private             |    Protected                  |
Public members      |  	Public              |	Private             |    Protected                  |
-----------------------------------------------------------------------------------------------------

As shown in the table,

1. If the class is inherited in public mode then its private members cannot be inherited in child class.
2. If the class is inherited in public mode then its protected members are protected and can be accessed
   in child class.
3. If the class is inherited in public mode then its public members are public and can be accessed inside
   child class and outside the class.
4. If the class is inherited in private mode then its private members cannot be inherited in child class.
5. If the class is inherited in private mode then its protected members are private and cannot be accessed
   in child class.
6. If the class is inherited in private mode then its public members are private and cannot be accessed in
   child class.
7. If the class is inherited in protected mode then its private members cannot be inherited in child class.
8. If the class is inherited in protected mode then its protected members are protected and can be accessed
   in child class.
9. If the class is inherited in protected mode then its public members are protected and can be accessed in
   child class.
------------------------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b = 20;

public:
    void print(void)
    {
        cout << b << endl;
    }
};

class Derived : protected Base
{
public:
    Derived(int c)
    { // constructor 1
        a = c;
        cout << a << endl;
    }

    Derived()
    { // constructor 2
        print();
    }
};

int main()
{

    Derived e(40); // object e call constructor 1 and constructor 1 directly access a because
                   // it is protected and accessesible.
    Derived d;     // object d call constructor 2 and constructor 2 call print function present in
                   //  base class and print function directly access b because it is present in base class.
                   //

    // cout<<d.a; // Will not work since a is protected in both base as well as derived class.
    return 0;
}
