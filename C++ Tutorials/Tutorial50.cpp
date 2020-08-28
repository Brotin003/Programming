// Array of objects
#include <iostream>       
using namespace std;

class Employee
{      
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the Id of Employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The Id of this Employee is " << id << endl;
    }
};
int main()
{
    // Employee Aman, Harry, Rohit;
    // Aman.setId();
    // Aman.getId();
    Employee fb[5];
    for (int i = 0; i < 5; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}