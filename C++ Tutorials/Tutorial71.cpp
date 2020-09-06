// Excercise
/*
Create 2 Classes
1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays
                      the results using another function.

2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific
                          operation of your choise and displays the result using another function displays 
                          the results using another function.

Create another class HybridCalculator and inherit it using these 2 Classes:
Q1. What type of inheritance are you using? --> Multiple inheritance
Q2. Which mode of inheritance are you using? --> public SimpleCalculator, public ScientificCalculator
Q3. Create an object of HybridCalculator and display results of simple and Scientific calculator.
Q4. How is code reuasibility implimented? --> 
*/

#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a : " << endl;
        cin >> a;
        cout << "Enter the value of b : " << endl;
        cin >> b;
    }
    void performSimpleOperations()
    {
        cout << "The value of a + b is : " << a + b << endl;
        cout << "The value of a - b is : " << a - b << endl;
        cout << "The value of a * b is : " << a * b << endl;
        cout << "The value of a / b is : " << a / b << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << "Enter the value of a : " << endl;
        cin >> a;
        cout << "Enter the value of b : " << endl;
        cin >> b;
    }
    void performScientificOperations()
    {
        cout << "The value of cos(a) is : " << cos(a) << endl;
        cout << "The value of sin(a) is : " << sin(a) << endl;
        cout << "The value of exp(a) is : " << exp(a) << endl;
        cout << "The value of tan(a) is : " << tan(a) << endl;
    }
};

class hybridCalculator : public SimpleCalculator, public ScientificCalculator
{
    
};
int main()
{
    hybridCalculator calc;

    calc.getDataSimple();
    calc.performSimpleOperations();

    calc.getDataScientific();
    calc.performScientificOperations();
    return 0;
}