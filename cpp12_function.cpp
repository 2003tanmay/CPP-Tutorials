#include <iostream>
using namespace std;

//***********************Function*******************
int mux(int x, int y)
{ // mux function declaretion.
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int min(int, int); // min function prototype.

int main()
{

    int a = 10, b = 20;
    int m = mux(a, b); // mux function calling.
    int n = min(a, b); // min function calling.
    cout << "maximum number is = " << m << endl;
    cout << "minimum number is = " << n;
    return 0;
}

int min(int x, int y)
{ // min function declaretion.
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}