#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    //***********************Initialization List in Constructors*********************
    /* The initialization list in constructors is another concept of initializing the data members of
       the class. A constructor is written first and then the initializations section is written.
       In the initialization section, the data members are initialized.*/

    /* Test(int i, int j) : a(i), b(j + 2)  ==> Not throw error
       Test(int i, int j) : a(i), b(a + j)  ==> Not throw error
       Test(int i, int j) : b(j), a(i + b)  ==> the compiler will throw an error because the data
                                                member “a” is being initialized first and the “b” is
                                                being initialized second so we have to assign the
                                                value to “a” data member first then "b".*/

    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}