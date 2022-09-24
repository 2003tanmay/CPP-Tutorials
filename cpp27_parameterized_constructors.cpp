#include<iostream>
using namespace std;


class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // Constructor defination ----> This is a parameterized constructor as
{                               // it takes 2 parameters as input. To take input we have to methods 
    a = x;                      // 1.Implicit call    2.Explicit call
    b = y;
    cout<<"Hello coder ";
}                                 
                                


int main(){
    // Implicit call
    Complex t(4, 6);
    t.printNumber();

    // Explicit call
    Complex s = Complex(5, 7);
    s.printNumber();

    return 0;
}