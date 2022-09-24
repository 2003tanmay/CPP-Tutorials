#include <iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "this is the time when constructor is called for object number " << count << endl;
    }

    //*********************Destructor********************
    /*when object is created constructor is called and when compiler known that object is no longer needed
    distructor is called and distructor free the memory occupied by that object.Destructor never takes an
    argument nor does it return any value.*/
    ~num()
    {
        cout << "this is the time when distructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;

    {                                          //{block} = we can create block by this symbol and
        cout << "Entering this block" << endl; // member inside are venished when this block is end
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    } // here block is ended so there is no need of n2 and n3 so distructor is called here for n2 and n3.

    cout << "Back to main" << endl;
    // here main function is ended so there is no need of n1 so distructor is called here for n1.
    return 0;
}