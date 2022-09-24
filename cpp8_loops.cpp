#include <iostream>
using namespace std;

int main()
{
    int i;
    // *********************For Loops*******************
    for (i = 0; i <= 3; i++) // in for loop we have (initialization; condition; updation;)
    {
        cout << i << endl;
    }

    //********************While Loops*******************
    int j = 4;
    while (j <= 6) // it is condition of a while loop.
    {
        cout << j << endl; // this is a block of statements.
        j++;
    }

    //********************Do While Loop*******************
    do // in do while loop we first do block of statement then check the condition written in while.
    {
        cout << j << endl;
        j++;
    } while (j <= 9);

    return 0;
}