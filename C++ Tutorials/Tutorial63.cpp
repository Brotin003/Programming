// Copy constructor in C++
#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number() { a = 10; } // default constructor

    number(int num)
    {
        a = num;
    }

    //When no copy constructor is found, compiler supplies its own copy constructor
    number(number &obj)
    {
        cout << "Copy constructor called" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    number z1(x); // Copy constuctor invoked
    z1.display();
    // z1 should exactly resembles z or x or y

    z2 = z; // Copy constructor doesn't called bkz it is assigned above

    number z3 = z; // Copy constuctors invoked
    z3.display();
    return 0;
} 