/*   OOPs - Classes and objects

     C++ --> initially called --> C with classes by stroustroup
     class --> extension of structures (in C)
    structures had limitations
      - members are public
      - No methods
    classes --> structures + more
    classes --> can have methods and properties
    classes --> can make few members as private & few as public
    structures in C++ are typedefed
    you can declare objects along with the class declarion like this:
    class Employee{
            // Class definition
        } harry, rohan, lovish;
    harry.salary = 8 makes no sense if salary is private 
-------------------------------------------------------------------------------------------------------------*/

//  Nesting of member functions
#include <iostream>
using namespace std;

class student // creating class
{
public:
    int rollno;
    string name; // variables of class student
    string mobileno;
    string fathername;
    void detail()
    { // function of class student
        cout << "name of student is " << name << endl;
        cout << "roll no.  of student is " << rollno << endl;
        cout << "mobile no. of student is " << mobileno << endl;
        cout << "father name of student is " << fathername << endl;
    }
};

int main()
{
    student shubham; // object of student class

    shubham.name = "shubham"; // assign value to variables
    shubham.rollno = 12;
    shubham.mobileno = "1232456";
    shubham.fathername = "mangilal";
    shubham.detail(); // calling function

    return 0;
}