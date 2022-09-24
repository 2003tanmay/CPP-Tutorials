#include <iostream>
using namespace std;

//************************Inline Function***********************
/*inline function is basically substitute code of that function at place of function called so the
compiler not call function every time. it function is only used when the code written in the function
is not complex.*/
inline int product(int a, int b)
{
    return (a * b);
}

//*************************Default Argument**********************
/*A argument which have its own default value.*/
double FDcal(int a,int b, int c = 5)
{   
    return (a*b*c);
}

//***********************Constant Argument***********************
// Constant arguments are used when you don’t want your values to be changed or modified by the function.
int strlen(const char *p)
{

}

int main()
{

    int x = 10, y = 5;
    cout << product(x, y) << endl;

    double m = FDcal(10, 5); /*here we not provide value of interest and because interest is a
                               default argument it takes its own default value.*/
    cout << m;

    return 0;
}