#include <iostream>
using namespace std;

template <class T1, class T2> // template with multiple parameters
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << data1 << endl
             << data2;
    }
};

int main()
{
    // myClass<int, char> obj(1, 'c');      //using object "obj" for int and char data type
    // obj.display();

    myClass<int, float> obj(1, 1.8);        // using same object "obj" for int and float data type
    obj.display();

    return 0;
}
