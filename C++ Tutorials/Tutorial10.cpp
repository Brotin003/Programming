// Logical operator
#include <iostream>
using namespace std;
main()
{
    int a = 5, b = 6;
    cout << " The value of this logical AND operator is " << ((a == b) && (a < b)) << endl;
    cout << " The value of this logical OR operator is " << ((a == b) || (a < b)) << endl;
    cout << " The value of this logical NOT operator is " << (!(a == b)) << endl;

    return 0;
}