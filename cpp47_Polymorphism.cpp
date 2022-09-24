//*************************Polymorphism************************
/*“Poly” means several and “morphism” means form. So we can say that polymorphism is something that has 
several forms or we can say it as one name and multiple forms. 
There are two types of polymorphism:
1. Compile-time polymorphism => In this polymorphism, it is already known which function will run. it is 
   also called early binding, which means that you are already bound to the function call and you know that 
   this function is going to run. There are two types of compile-time polymorphism:
1.1 Function Overloading
1.2 Operator Overloading
2. Run time polymorphism => In the run-time polymorphism, the compiler doesn’t know already what will 
   happen at run time. Run time polymorphism is also called late binding. The run time polymorphism is 
   considered slow because function calls are decided at run time. This can be achieved from the:
2.1 Virtual Function
---------------------------------------------------------------------------------------------------------------*/

//***********************Operator Overloading**********************
/*In C++, we can change the way operators work for user-defined types like objects and structures. This is 
known as operator overloading. For example, suppose we have created three objects c1, c2 and result from a 
class named Complex that represents complex numbers. since operator overloading allows us to change how 
operators work, we can redefine how the + operator works and use it to add the complex numbers of c1 and c2.

Syntax for C++ Operator Overloading
class className {
    ... .. ...
    public
       returnType operator symbol (arguments) {
           ... .. ...
       } 
    ... .. ...
};
Here,
-> returnType is the return type of the function.
-> operator is a keyword.
-> symbol is the operator we want to overload. Like: +, <, -, ++, etc.
-> arguments is the arguments passed to the function.
----------------------------------------------------------------------------------------------------------------*/

// C++ program to overload the binary operator +
// This program adds two complex numbers

#include <iostream>
using namespace std;

class Complex {
   private:
    float real;
    float imag;

   public:
    // Constructor to initialize real and imag to 0
    Complex() : real(0), imag(0) {}

    void input() {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }

    // Overload the + operator
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void output() {
        if (imag < 0)
            cout << "Output Complex number: " << real << imag << "i";
        else
            cout << "Output Complex number: " << real << "+" << imag << "i";
    }
};

int main() {
    Complex c1, c2, result;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

   // c1 calls the operator function
   // c2 is passed as an argument to the function
    result = c1 + c2;
    result.output();

    return 0;
}