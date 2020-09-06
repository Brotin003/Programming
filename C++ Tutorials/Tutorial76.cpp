// Initilization (list) section in constructors
/*
Syntax for Initialization list in constructor:
Constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

#include <iostream>
using namespace std;
class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j) // so the value of a is i and b is j

    // Test(int i, int j) : a(i), b(i + j) // will compile successfully

    // Test(int i, int j) : a(i), b(2 * j) // will compile successfully

    // Test(int i, int j) : a(i), b(a + j) // will compile successfully

    // Test(int i, int j) : b(j), a(i + b) // will show garbage value because we declare
                                           // int a; first and then int b;..so The first
                                           // that declared will initialized first

                                // OR
    // Test(int i, int j)                                        
    {
        // a = i;
        // b = j;
        cout << "***CONSTRUCTER EXECUTED***" << endl;
        cout << "The value of a is " << a << endl; // insted of (a) we can write i...coz a(i)
        cout << "The value of b is " << b << endl; // insted of (j) we can write j...coz b(j)
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}