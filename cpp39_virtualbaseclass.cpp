//***************************Virtual Base class**************************
/*
The virtual base class is a concept used in multiple inheritances to prevent ambiguity between multiple
instances.
For example: Class “A” is a parent class of two classes “B” and “C” and both “B” and “C” classes are the
parent of class “D”. The main thing to note here is that the data members and member functions of class “A”
will be inherited twice in class “D” because class “B” and “C” are the parent classes of class “D” and they
both are being derived from class “A”. So when the class “D” will try to access the data member or member
function of class “A” it will cause ambiguity for the compiler and the compiler will throw an error. To
solve this ambiguity we will make class “A” as a virtual base class. To make a virtual base class “virtual”
keyword is used. When one class is made virtual then only one copy of its data member and member function
is passed to the classes inheriting it.
---------------------------------------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

class Test : virtual public Student // Virtual base class Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void print_marks(void)
    {
        cout << "You result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student // Virtual base class Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

/*Class Student is a Virtual base class of two classes Test and Sports and both Test and Sports classes are 
the parent of class Result.*/

int main()
{

    Result harry;
    harry.set_number(4200); // Here when we call set_number function from object of Result Derived class 
                            // and set_number is a function of virtual base class so it make no ambiguity.
    harry.set_marks(78.9, 99.5);
    harry.set_score(9);
    harry.display();
    return 0;
}