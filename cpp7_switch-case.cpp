#include <iostream>
using namespace std;

int main()
{
    char grade;
    cout << "type your grade  " << endl;
    cin >> grade;
    //***********************Switch-Case*********************
    switch (grade)
    {
    case 'A':
        cout << "You are above 75%." << endl;
        break; // break statement exit the code at that point and will not execute further code.

    case 'B':
        cout << "You are above 50% and less than 75%." << endl;
        break;

    default:
        cout << "You are fail." << endl;
        break;
    }
    return 0;
}