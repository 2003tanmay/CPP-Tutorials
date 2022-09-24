#include <iostream>
using namespace std;

class A
{
    int a;

public:
    //****************************"this" operator***************************
    /*As we know that every object has copy of all data member and function present in class. When every
    object has 1 single copy of all data members then how value changes in all objects so here comes
    "this" pointer.
    */
    void setData(int a)
    {
        this->a = a;
    }
    /*In code "this" pointer point a object "c" (in main function) which is called setData, for that
    object "this" pointer set the value of "a" variable present in private section of a class "A" =
    value of "a" variable present in setData(int a).
    */

    // Another use of this pointer
    A &set(int a)
    {
        this->a = a;
        return *this;
    }
    /*In the function “set” the reference of the object is returned using “this” pointer.
    In the main program by using a object we have made a chain of the function calls.
    The main thing to note here is that the function “set” is returning an object on which we have
    used the “getData” function. so we don’t need to call the function “getData” explicitly.
    */

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A c, d;
    c.setData(4);
    c.getData();
    d.set(5).getData(); // chain of the function calls.

    return 0;
}
