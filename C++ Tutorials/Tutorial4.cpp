// LOCAL AND GLOBAL VARIABLES
#include <iostream>
using namespace std;
int glo = 6; // GLOBAL VARIABLE
void sum()
{
    int a;
    cout << glo;
}
int main()
{
    int glo = 9; // LOCAL VARIABLE (takes precedence first)
    glo = 78;
    bool is_true = false; // True = 1, False = 0
    sum();
    cout << glo << is_true;
    return 0;
}