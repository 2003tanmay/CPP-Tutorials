#include <iostream>
using namespace std;

class employee
{
    int id; /*id is not in any access modifier so by default it is in private.
              id is only accessible by class members.*/

    //*************************Static Datamember**********************
    /*When a static data member is created, there is only a single copy
     of the data member which is shared between all the objects of the class.*/
    static int count;

public:
    void setdata(void)
    {
        cout << "enter employee id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is " << id << " and the employee no. is " << count << endl;
    }

    //*************************Static Method************************
    /*When a static method is created, they become independent of any object and class.
    Static methods can only access static data members and static methods.
    Static methods can only be accessed using the scope resolution operator(::).*/
    static void getCount(void)
    {
        // cout<<id; // throws an error because id is not a static member.
        cout << "The value of count is " << count << endl;
    }
};

int employee::count; // Default value is 0

int main()
{

    employee tashu, ayush, pradeep;

    tashu.setdata();
    tashu.getdata();
    employee::getCount(); // called by using class name and scope resolution operator because it is a static method.

    ayush.setdata();
    ayush.getdata();
    employee::getCount();

    pradeep.setdata();
    pradeep.getdata();
    employee::getCount();

    return 0;
}