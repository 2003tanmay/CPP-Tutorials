#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "type your age " << endl;
    cin >> age;
    //***********************If-Else*********************
    if (age < 18)
    {
        cout << "You are a kid." << endl;
    }
    else if (age >= 18)
    {
        cout << "You are a men." << endl;
    }

    return 0;
}