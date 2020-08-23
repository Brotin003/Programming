// Functions Prototypes
#include <iostream>
using namespace std;

/* function prototype */

// int sum(int a, int b);
int sum(int, int); // --> Acceptable bkz these are not real arguments
// int sum(int a, b); // --> Not acceptable

// void g(void); // --> Acceptable
void g();

int main()
{
    int num1, num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;

    // Num1 and Num2 are actual parameters
    cout << "The sum is " << sum(num1, num2) << endl;
    g();
    return 0;
}
// function
int sum(int a, int b) // real argument
{
    // Formal Parameters a and b will be taking values from actual parameters Num1 and Num2
    int c = a + b;
    return c;
}
void g()
{
    cout << "\nHello GoodMorning";
}