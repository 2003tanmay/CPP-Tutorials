#include<iostream>
using namespace std;

template<class T1, class T2>  //function template
float funcAverage(T1 a, T2 b){
    float avg= (a+b)/2.0; 
    return avg;
}

int main(){
    cout<< "The average of these numbers is "<<funcAverage(5, 2)<<endl;  //here we give int parameter
    cout<< "The average of these numbers is "<<funcAverage(5.2, 2.3)<<endl;  //here we give float parameter
    return 0;
}