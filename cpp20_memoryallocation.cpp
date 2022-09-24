#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initCounter() { counter = 0; }
    void setprice();
    void displayprice();
};

void shop ::setprice()
{
    cout << "enter id of your item no. " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter price of your item no. " << counter + 1 << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop ::displayprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "price of item id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{

    shop dukaan;
/*The memory is only allocated to the variables of the class when the object is created.
the memory is not allocated to variable when the class is declared.*/
    dukaan.initCounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();

    return 0;
}