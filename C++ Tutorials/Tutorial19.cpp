// Selection control structure : Switch case 
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;
    case 22:
        cout << "You are 22" << endl;
        break;
    case 2:
        cout << "You are 2" << endl;
        break;

    default:
        cout << "No special cases" << endl;
        break;
    }
    cout<<"One case is Matched";
    return 0;
}