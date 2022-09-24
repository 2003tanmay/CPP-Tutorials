/*Abstract Base class => It means a base class which is only for making a derived classes from it and in 
  main function only derived's class member calls. Abstract base class can't create its object. Abstract 
  base class is a class that has at least one pure virtual function in its body. The classes which are 
  inheriting the base class must need to override the virtual function of the abstract class otherwise 
  compiler will throw an error.

  Pure virtual function => Pure virtual function is a function that doesn’t perform any operation and the
  function is declared by assigning the value 0 to it. If we make a base class function a pure virtual
  function so this base class pure virtual function bound to make a same name function in derived class and 
  compiler call derived class function.
--------------------------------------------------------------------------------------------------------------*/

#include<iostream>
using namespace std;

class CWH{                       // Abstract base class
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title =  s;
            rating = r;
        }
        virtual void display()=0;   //Pure vrtiual function define.
};

class CWHVideo: public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};    

class CWHText: public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
     void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    // CWH hello;   give error because CHW is a abstract base class so we can't create object.

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}