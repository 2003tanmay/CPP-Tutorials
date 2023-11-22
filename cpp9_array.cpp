#include <iostream>
using namespace std;

int main()
{

    //********************Arrays********************
    int marks[5] = {56, 35, 95, 55, 85}; /*int datatype array those name is marks and having size of 5
                                           with 5 values and in array indexing is start from 0. */
    cout << marks[4] << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}
