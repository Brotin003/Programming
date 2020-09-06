// Ambiguity Resolution in inheritation  
#include <iostream>
using namespace std;
class B
{
public:
    void say()
    {
        cout << "Hello World" << endl;
    }
};

class D : public B
{
    int a;

// D's new say() method will overrite base class's say() method
public:
    void say()
    {
        cout << "Hello my beautiful people" << endl;
    }
};

int main()
{
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}