#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};

int main()
{
    int size = 3;

    // Arrays of objects
    ShopItem *ptr = new ShopItem[size];
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;
        (ptr + i)->setData(p, q); // example
                                  // when i=0 (ptr)->setData(p, q);
                                  // when i=1 (ptr+1)->setData(p, q);
                                  // when i=2 (ptr+2)->setData(p, q);
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        (ptr + i)->getData();
    }

    return 0;
}
