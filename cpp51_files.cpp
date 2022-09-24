//*************************Files************************
/*for include file in C++ we have header file #include <fstream>
  These are some useful classes for working with files in C++
1. fstreambase
2. ifstream --> derived from fstreambase (for reading)
3. ofstream --> derived from fstreambase (for writing)

There are two methods to open a text file in C++: first using a constructor and second one open function.
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
    string st = "Harry";
    // Opening files using constructor and writing it
    ofstream out("cpp51_sample.txt"); // Write operation on cpp51_sample.txt file
    out<<st;
    out.close(); /* close function is use for close the ofstream and instream, it disconnect connection 
                    with sample51a.txt file.*/   

    string st2;
    // Opening files using constructor and reading it
    ifstream in("cpp51_sample.txt"); // Read operation on cpp51_sample.txt fie
    in>>st2;
    cout<<st2;

    return 0;
}
