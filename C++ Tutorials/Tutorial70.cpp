// Multiple Inheritance Deep Drive
#include <iostream>
using namespace std;

// syntax for inheriting in multiple inheritance
// class Derived : visibility-mode base1, visibility-mode base2
// {
//     class body of class "DerivedC"
// };

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of Base1 is " << base1int << endl;
        cout << "The value of Base2 is " << base2int << endl;
        cout << "The value of Base3 is " << base3int << endl;
        cout << "The sum of these value is " << base1int + base2int + base3int << endl;
    }
};
/*
The inheritated derived class will look something like this 
    base1int --> protected
    base2int --> protected

Member functions:
    set_base1int() --> public
    set_base2int() --> public
    set_show() --> public
*/
int main()
{
    Derived Aman;
    Aman.set_base1int(23);
    Aman.set_base2int(53);
    Aman.set_base3int(22);
    Aman.show();
    return 0;
}