#include <iostream>
using namespace std;

//************************Recursiv Function****************************
// when function call itself is called recursion and that function is called recursiv function.
int fac(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    else
    {
        return a * fac(a - 1);
    }
}

int fib(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}

int main()
{

    int x, y;
    cout << "enter a no." << endl;
    cin >> x;
    cout << "factorial of " << x << " is " << fac(x) << endl;
    cout << "enter again a no." << endl;
    cin >> y;
    cout << "term at position " << y << " in fibonacci is " << fib(y) << endl;
    return 0;
}