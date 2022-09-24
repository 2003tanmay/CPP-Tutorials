#include <iostream>
using namespace std;

class complex; /*forward declaretion. If we not declare forward then when we use complex obj. as
                 argument in calculator class then it give error because of it not determine any
                 complex class*/

class calculator
{
public:
    int sumRealComplex(complex, complex); // function declaretion
    int sumCompComplex(complex, complex); // function declaretion

    //  int sumRealComplex(complex o1, complex o2){   /* If we define function here then compilor can't
    //  return (o1.a + o2.a);                            determine o1.a and o2.a so we define it after
    //  }                                                complex class */
};

class complex
{
    int a, b;

    //*****************Friend class****************
    /*Friend class are those classes that have the right to access the private
    data members of class even though they are not defined inside the class.*/

    // Below line means that all functions of non member - calculator class is allowed to do anything with my private member.
    friend class calculator;

    // Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);

    // Aliter: Declaring the entire calculator class as friend

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
};

int calculator::sumRealComplex(complex o1, complex o2) // function defination
{
    return (o1.a + o2.a);
}

int calculator::sumCompComplex(complex o1, complex o2) // function defination
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator cal;
    int res = cal.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = cal.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;

    return 0;
}