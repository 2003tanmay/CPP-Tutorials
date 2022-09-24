#include <iostream>
using namespace std;

//***********************Function Overloading********************
/*more than function with same name but different work.*/

int volume(int a)
{ // volume of cube.
    return a * a * a;
}

int volume(int l, int w, int h)
{ // volume of cuboid.
    return l * w * h;
}

int volume(double r, int h)
{ // volume of cylinder.
    return (3.14 * r * r * h);
}

int main()
{

    cout << volume(5) << endl;
    cout << volume(5, 4, 3) << endl;
    cout << volume(5, 4) << endl;

    return 0;
}