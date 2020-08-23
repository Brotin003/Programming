// TYPECASTING
#include <iostream>
using namespace std;
int main()
{
    int a = 45;
    float b = 46.5;
    cout << "The value of a is " << (float)a << endl; // typecasted (int a) into (float a)
    cout << "The value of a is " << float(a) << endl; // Also do this by this way

    cout << "The value of b is " << (int)b << endl; // typecasted (float b) into (int b)
    int c = int(b);

    cout << "The expression is " << a + b << endl;
    cout << "The expression is " << a + int(b) << endl;
    cout << "The expression is " << a + (int)b;
}