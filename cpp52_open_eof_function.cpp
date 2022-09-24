#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
 
    // declaring an object of the type ofstream
    ofstream out;
 
    //connecting the object "out" to the text file using the member function open()
    out.open("cpp52_sample.txt");
 
    //writing to the file
    out <<"This is me\n";
    out <<"This is also me";
    //closing the file connection
    out.close();

    // declaring an object of the type ifstream
    ifstream in;
    //declaring string variable st
    string st;
    //opening the text file into in
    in.open("cpp52_sample.txt");
 
    // giving output the string lines by storing in st until the file reaches the end of it
    while (in.eof()==0) 
    {
        // using getline to fill the whole line in st
        getline(in,st);
        cout<<st<<endl;
    }

    return 0;
}

/*open()   => This is used for opening a file.
  eof()    => This means end of file.
  getline()=> getline function is used to print whole line, we know that if we try to read compiler only
              give one word because it not consider any words after a space.*/
