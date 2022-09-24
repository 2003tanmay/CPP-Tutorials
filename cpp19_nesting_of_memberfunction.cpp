#include <iostream>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin();

public:
    void read();
    void ones_complimnt();
    void display();
};

void binary ::read()
{
    cout << "enter a binary no. " << endl;
    cin >> s;
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format." << endl;
            exit(0);
        }
    }
}

void binary ::ones_complimnt()
{ // when a member function call another function of a same class is called nesting of member function.
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{
    cout << "Your binary no. after one's compliment ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    b.ones_complimnt();
    b.display();

    return 0;
}