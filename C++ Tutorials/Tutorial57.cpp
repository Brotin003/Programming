// Constructers in C++
// 2. Default Constructures in C++
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // Creating a constructer
    complex(void); // constructer deceleration
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(void) //----> This is a default constructor as it accepts no parameters
{
    a = 10;
    b = 0;
    cout << "Hello world" << endl;
}
int main()
{
    complex c1, c2;
    c1.printNumber();
    c2.printNumber();
    return 0;
}