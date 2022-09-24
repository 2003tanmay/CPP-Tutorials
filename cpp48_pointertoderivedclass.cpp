#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
        cout << "Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer; //=> We created a pointer “base_class_pointer” of class “Baseclass”.
    BaseClass obj_base;            //=> Object “obj_base” of the class “BaseClass” is created.
    DerivedClass obj_derived;          //=> Object “obj_derived” of the class “DerivedClass” is created.
    base_class_pointer = &obj_derived; /*=> Pointer “base_class_pointer” of the base class is pointing to 
                                        the “obj_derived” of the derived class.*/
    cout << base_class_pointer << endl;/*=> "base_class_pointer" give address of “obj_derived” of the 
                                        derived class.*/
    base_class_pointer->var_base = 34; /*=> pointer “base_class_pointer” of the base class set the value of
                                        Base class data member “var_base” by “34”.*/
    base_class_pointer->display();     /*=> pointer “base_class_pointer” of the base class call the Base 
                                        class function "display" */
    /*=> base_class_pointer->var_derived= 134; Will throw an error because var derived is a data member
    of Derived class so base class pointer can't inherit it.*/   
    base_class_pointer->var_base = 3400; /*=> pointer “base_class_pointer” of the base class set the value 
                                          of Base class data member “var_base” by “3400”.*/
    base_class_pointer->display();       /*=> pointer “base_class_pointer” of the base class call the Base 
                                          class function "display".*/ 
    DerivedClass *derived_class_pointer;  /*=> We created a pointer “derived_class_pointer” of class 
                                           “DerivedClass”.*/
    derived_class_pointer = &obj_derived; /*=> Pointer “derived_class_pointer” of the derived class is 
                                          pointing to the “obj_derived” of the derived class.*/ 
    //=>Derived class pointer can't point base class object.                                         
    derived_class_pointer->var_base = 9448; /*=> pointer “derived_class_pointer” of the derived class set 
                                             the value of Base class data member “var_base” by “9448”.*/
    derived_class_pointer->var_derived = 98; /*=> pointer “derived_class_pointer” of the derived class set 
                                            the value of derived class data member “var_derived” by “9448”.*/
    derived_class_pointer->display();  /*=> pointer “derived_class_pointer” of the base class call the derived 
                                          class function "display".*/
    return 0;

    /*In short if we create base class pointer and this pointer point to derived class object so, with the
     help of this base class pointer we can only access all member of base class.
     And if we create derived class pointer and this pointer point to derived class object so, with the
     help of this derived class pointer we can access all member of base class as well as derived class.*/
}
