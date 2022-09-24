#include <iostream>
using namespace std;

int main()
{

    int a = 3;
    int *b = &a; // we create pointer by '*' symbol and with '&' symbol we take refrence.
    int **c = &b;
    int marks[4] = {35, 95, 55, 85};
    int *d = marks; // we create pointer by '*' symbol of marks and in array there is no need of '&' symbol to take refrence.

    cout << "value at a = " << a << endl;     // a hold data of a.
    cout << "value at b = " << b << endl;     // b hold address of (data present at a).
    cout << "value at *b = " << *b << endl;   //*b derefrence pointer b and hold value of a (which hold data).
    cout << "value at &a = " << &a << endl;   //&a hold value of b which is pointer so &a hold address of (data present at a).
    cout << "value at c = " << c << endl;     // c hold address of (data present at b).
    cout << "value at *c = " << *c << endl;   //*c derefrence pointer c and hold value of b (which hold address of data present at a).
    cout << "value at **c = " << **c << endl; //**c double derefrence pointer b and hold value of a.
    cout << "value at &b = " << &b << endl;   //&b hold value of c which is pointer so &b hold address of (data present at b).

    cout << "value at d=" << d << " & at (d+1)=" << (d + 1) << " & at (d+2)=" << (d + 2) << " & at (d+3)=" << (d + 3) << endl;
    /* d hold address of value at marks[0] & (d+1) hold address of value at marks[1]
    & (d+2) hold address of value at marks[2] & (d+3) hold address of value at marks[3].*/

    cout << "value at *d=" << *d << " & at *(d+1)=" << *(d + 1) << " & at *(d+2)=" << *(d + 2) << " & at *(d+3)=" << *(d + 3) << endl;
    /* *d hold value at marks[0] & (d+1) hold value at marks[1]
    & (d+2) hold value at marks[2] & (d+3) hold value at marks[3].*/

    return 0;
}