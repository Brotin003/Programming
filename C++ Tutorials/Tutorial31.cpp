// Srtuctures
#include <iostream>
using namespace std;
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;

int main()
{
    ep harry;
    harry.eId = 1;
    harry.favChar = 'C';
    harry.salary = 122000;
    cout << "The Id of employee is " << harry.eId << endl;
    cout << "The Fav character of employee is "<< "'" << harry.favChar << "'" << endl;
    cout << "The salary of employee is " << harry.salary << endl;

    return 0;
}