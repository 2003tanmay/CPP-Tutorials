//**************************Templates*************************
/*If we have code for a specific data type and we wanna use some other different data type in same code so 
  instead of writing same code for different data type we use templates. templates give us freedom and 
  easiness to use same code for different datatypes.

Syntex:
  #include <iostream>
  using namespace std;
 
  template <class T>
  class class_name {
    T *variable_name1;
    int variable_name2;
    public:
        class_name(T* variable_name1)[
            //code
        ]
        //and many other methods
     };

  int main() {
    class_name<int> object1();
    class_name<float> object2();
    return 0;
  }
--------------------------------------------------------------------------------------------------------------------*/

#include<iostream>
using namespace std;

template <class T>
class vector
{    
public:
    T *arr;
    int size;
    vector(int m){
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d+=arr[i]*v.arr[i];
        }
        return d;
    }
};

int main(){
    //vector 1 with a float data type
    vector<float> v1(3);             //Imagine we have to perform this operation with int or double data
    v1.arr[0] = 1.4;                 //type so we have to write same code for different data type but with
    v1.arr[0] = 4.52;                //the help of templates we can perform this operation with different
    v1.arr[1] = 5.33;                //datatypes. We have to just specify <data type>. 
    v1.arr[2] = 6.21;                                  
    
    //vector 2 with a float data type
    vector<float> v2(3); 
    v1.arr[0] = 1.4;
    v2.arr[0] = 1.8;
    v2.arr[1] = 2.65;
    v2.arr[2] = 2.32;

    float a = v1.dotproduct(v2);
    cout<<a<<endl;

    return 0;
}