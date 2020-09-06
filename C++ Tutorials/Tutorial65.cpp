// Inheritance in C++
// Inheritance Syntax & Visibility Mode 
#include <iostream>
using namespace std;

//Base class
class employee
{
public:
    int id;
    float salary;
    employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    employee() {} // Default constructor
};

// Derived class
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
*/
// Creating a Programmer class derived from Emoloyee Base class
class programmer : public employee
{
public:
    int languageCode;
    programmer(int intId)
    {
        id = intId;
        languageCode = 9;
    }
    void getdata()
    {
        cout << id << endl;
    }
};
int main()
{
    employee Aman(1), Rohan(2);
    cout << Aman.salary << endl;
    cout << Rohan.salary << endl;

    programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getdata();
    return 0;
}