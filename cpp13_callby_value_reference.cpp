#include <iostream>
using namespace std;

//***********************Call-by-Value***********************
int swap(int a, int b)
{
    /*when swap function called in main() function copy of x and y goes to a and b then
     swap perform so value of a and b is swapped but value of x and y is not swapped.*/
    int temp = a;
    a = b;
    b = temp;
}

//***********************Call-by-Pointer***********************
int swappoint(int *a, int *b)
{
    /*when swappoint function called in main() function address of s and t goes to a and b then swap
    perform then a and b swapped so address of s and t is swapped so data at s and t is swapped.*/
    int temp = *a;
    *a = *b;
    *b = temp;
}

//***********************Call-by-Reference***********************
int swapref(int &a, int &b)
{
    /*when swapref function called in main() function address of m and n goes to a and b then swap
    perform then a and b swapped so address of m and n is swapped so data at s and t is swapped.*/
    int temp = a;
    a = b;
    b = temp;
}

int main()
{

    int x = 10, y = 20, s = 30, t = 40, m = 5, n = 4;
    cout << "The value of x is " << x << " and the value of y is " << y << " before calling swap function." << endl;
    swap(x, y); // This will not swap a and b
    cout << "The value of x is " << x << " and the value of y is " << y << " after calling swap function." << endl;
    cout << "The value of s is " << s << " and the value of t is " << t << " before calling swappoint function." << endl;
    swappoint(&s, &t); // This will swap a and b using pointer
    cout << "The value of s is " << s << " and the value of t is " << t << " after calling swappoint function." << endl;
    cout << "The value of m is " << m << " and the value of n is " << n << " before calling swapref function." << endl;
    swapref(m, n); // This will swap a and b using reference variables
    cout << "The value of m is " << m << " and the value of n is " << n << " after calling swapref function." << endl;

    return 0;
}