#include <iostream>
using namespace std;

class employee // creating class
{
private: // private member of class can only be access by class member.
    int a, b, c;

public: // public member of class can be access by anyone.
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getdata()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void employee ::setdata(int a1, int b1, int c1) // for accessing function we use '::' symbol.
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{

    employee tashu;
    // tashu.a = 40;     //a can not be access directly because a is a private.
    tashu.d = 80; // d is public so any one can access this.
    tashu.e = 40;
    tashu.setdata(1, 2, 5); // for accessing a,b,c we use setdata which is a member of a class
    tashu.getdata();

    return 0;
}