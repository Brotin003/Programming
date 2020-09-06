// Ambiguity Resolution in inheritation
#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "What are you doing" << endl;
    }
};

class Derived : public Base1, public Base2
{
    // Ambiguity Resolution
    int a;

public:
    void greet()
    {
        Base1::greet(); // Called Base2's greet
    }
};
int main()
{
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;        // Class Derived 
    d.greet();
    return 0;
}