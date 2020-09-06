// Constructures in derived class
#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printDataBase1(void)
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printDataBase2(void)
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2 // if we write first Base2 insted of Base1 then Base2 will print first
// class Derived : public Base1, virtual public Base2 // if we write virtual before Base2 then Base2 will print first
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b) // if we write base2(b) first and then base1(a)
    {                                                        // --> nothing will change in output
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructer called" << endl;
    }
    void printDataDerived(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived Aman(1, 2, 3, 4);
    Aman.printDataBase1();
    Aman.printDataBase2();
    Aman.printDataDerived();
    return 0;
}