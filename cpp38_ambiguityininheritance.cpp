//***************************Ambiguity in Inheritance**************************
/*Ambiguity in inheritance can be defined as when one class is derived for two or more base classes then
  there are chances that the base classes have functions with the same name. So it will confuse derived
  class to choose from similar name functions.
  To solve this ambiguity we can define in derived class which function it choose from which class.
------------------------------------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2 ::greet(); //we define, when we call greet function with Derived class object compiler choose
                         //Base2 class greet function.
    }
};

int main()
{
    // Ambibuity 1
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();
    
    /*Ambibuity 2 :when we have same name function in derived class and base class and when we call those
                   function with Derived class object then compiler called Derived class function and when
                   Derived class has not that same name function then compiler callse base class function*/
    return 0;
}