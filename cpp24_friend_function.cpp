#include <iostream>
using namespace std;

class complax
{
    int a, b;

public:
    //*****************Friend functions****************
    /*Friend functions are those functions that have the right to access the private
    data members of class even though they are not defined inside the class.*/

    // Below line means that non member - sumComplex funtion is allowed to do anything with my private member.
    friend complax sumComplex(complax o1, complax o2); // Declaretion of friend function

    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void printdata()
    {
        cout << "your complax no is " << a << "+" << b << "i" << endl;
    }
};

complax sumComplex(complax o1, complax o2)
{ // Defination of friend function
    complax o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{

    complax c1, c2, sum;

    c1.setdata(1, 4);
    c1.printdata();

    c2.setdata(5, 8);
    c2.printdata();

    sum = sumComplex(c1, c2);
    sum.printdata();

    return 0;
}

/*
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class.
c1.sumComplax() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name
to access any member.
*/