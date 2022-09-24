#include <iostream>
using namespace std;

class complax
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void setDatabySum(complax o1, complax o2)   //passing obj as argument.
    {
        a = o1.a + o2.b;
        b = o1.b + o2.b;
    }

    void printdata()
    {
        cout << "your complax no is " << a << "+" << b << "i" << endl;
    }
};

int main()
{

    complax c1, c2, c3;

    c1.setdata(1, 2);
    c1.printdata();

    c2.setdata(3, 4);
    c2.printdata();

    c3.setDatabySum(c1, c2);
    c3.printdata();
    return 0;
}