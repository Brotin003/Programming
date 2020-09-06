// Array of object using pointers
#include <iostream>
using namespace std;

class shopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
int main()
{
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int[34];
    // int *ptr = new int[34];

    // In a Mall
    // General store item
    // Veggies store item
    // Medical store item
    shopItem *ptr = new shopItem[size];
    shopItem *ptrTemp = ptr;
    int p, i;
    float q;

    for (i = 0; i < size; i++)
    {
        cout << "Id and Price of Item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}