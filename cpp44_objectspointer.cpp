//************************Pointer to objects***********************
/*Pointers are used to store addresses of variables which have data types like int, float, double
etc. But pointer can also store the address of an object.*/

#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    Complex *ptr = new Complex;
    (*ptr).setData(1, 54);
    (*ptr).getData();

    // Arrow operator
    ptr->setData(1, 4);
    ptr->getData();

    // insted of "(*ptr)." we can also use "ptr->"
    return 0;
}
