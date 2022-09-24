#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setdata(void)
    {
        salary = 122;
        cout << "enter employee id " << endl;
        cin >> id;
    }
    
    void getdata(void)
    {
        cout << "the id of this employee is " << id << endl;
    }
};

int main()
{

    // employee rohan, harry, tashu, .......;    /*if we have thousands of employee so we have to create
    // rohan.setdata();                            thousands of object which so hactic. insted of creating
    // rohan.getdata();                            thousands of object we can create arrys of object which
    //                                             can store many employee*/
    // harry.setdata();
    // harry.getdata();

    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setdata();
        fb[i].getdata();
    }

    return 0;
}