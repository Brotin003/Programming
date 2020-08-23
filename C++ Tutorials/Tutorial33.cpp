// Enum
#include <iostream>
using namespace std;
int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    Meal m1 = lunch;
    cout << m1 << endl;
    cout << (m1 == 2) << endl; // true = 1 ,,, false = 0
    return 0;
}
