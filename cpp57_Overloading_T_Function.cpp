#include <iostream>
using namespace std;
 
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main()
{
    func(4);   //Exact match takes the highest priority so here nontemplated function calls
    func(4.1); //differnt match takes least priority so here templated function calls
    return 0;
}