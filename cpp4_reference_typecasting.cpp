#include <iostream>
using namespace std;
int x = 4100; // global variable.
int main()
{
    int x = 455;
    int &y = x; // y is a reference variable and it take reference from x and deleared by &.
    cout << x << endl
         << y << endl;
    cout << ::x << endl; //'::' is symbol to print global variable.

    //************************Type Casting************************
    float c = 5.999;
    cout << (int)c << endl; // we type casted float type variable into a integer type.
    cout << int(c);

    const int s = 420; // cosnt int fix the value of s as 420 we can't change it.
    return 0;
}