#include <iostream>
using namespace std;

//***********************Structure*************************
/*Structure = Array is used to store data of similer data type unlike array
              structure is used to store data of non-similer data types.*/
struct detail
{
    int eid;
    char fav_char;
    int age;
};

typedef struct student // typedef allow user to provide alternate names to data types.
{
    int sid;
    char fav_char;
    int age;
} stu;

//***********************Unions******************************
/*Union = It is a same as struct but in all members share the same memory locations
          means that at any given time, a union can contain no more than one object
          from its list of member.*/
union employee
{
    int emid;
    char fav_char;
    int age;
};

//**********************Enumerations********************************
/*Enumerations = It is a set of named integrel constants. Every name in an enum is
                 assigned an integrel value that corresponds to its place in the
                 order of the values in the enum.*/
enum week
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thrusday,
    friday,
    saturday
};

int main()
{

    struct detail tashu;
    tashu.eid = 1;
    tashu.fav_char = 's';
    tashu.age = 19;

    stu shubham;
    shubham.sid = 7;
    shubham.fav_char = 'k';
    shubham.age = 20;

    union employee rohit1, rohit2, rohit3;
    rohit1.emid = 25;
    rohit2.fav_char = 'p';
    rohit3.age = 20;

    cout << "Structure" << endl;
    cout << tashu.eid << endl;
    cout << tashu.fav_char << endl;
    cout << tashu.age << endl;
    cout << shubham.sid << endl;
    cout << shubham.fav_char << endl;
    cout << shubham.age << endl;

    cout << "\nUnion" << endl;
    cout << "The first value at the allocated memory :" << rohit1.age << endl;
    cout << "The next value stored after removing the previous value :" << rohit3.emid << endl;
    cout << "The final value at the same allocated memory space :" << rohit2.fav_char << endl;

    cout << "\nEnum" << endl;
    for (int i = sunday; i <= saturday; i++)
    {
        cout << i << " ";
    }

    return 0;
}