#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 6;
    //*******************Arithmetic Operators********************
    cout << " Arithmetic Operators --" << endl;
    cout << " + operator give output " << (a + b) << endl;
    cout << " - operator give output " << (a - b) << endl;
    cout << " * operator give output " << (a * b) << endl;
    cout << " / operator give output " << (a / b) << endl;
    cout << " '%' operator give output " << (a % b) << endl;
    cout << " a++ operator give output " << (a++) << endl;
    cout << " a-- operator give output " << (a--) << endl;
    cout << " ++a operator give output " << (++a) << endl;
    cout << " --a operator give output " << (--a) << endl;

    //***********Assignment Operators Ex. '='
    //*******************Comparison Operators*********************
    cout << "\n Comparison Operators" << endl; //'\n' and 'endl' use for line break.
    cout << " == operator give output " << (a == b) << endl;
    cout << " != operator give output " << (a != b) << endl;
    cout << " >= operator give output " << (a >= b) << endl;
    cout << " <= operator give output " << (a <= b) << endl;
    cout << " > operator give output " << (a > b) << endl;
    cout << " < operator give output " << (a < b) << endl;

    //*******************Logical Operators************************
    cout << "\n Logical Operators" << endl;
    cout << ((a < b) && (a > b)) << endl; //'&&' operator compare both conditions then give true or false.
    cout << ((a < b) || (a > b)) << endl; //'||' operator compare omly one condition then give true or false.

    return 0;
}