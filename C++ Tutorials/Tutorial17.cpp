//Operator Precedence
#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 4;
    // int c = (a * 5) + b;
    int c = ((((a * 5) + b) - 45) + 87); // Opreator precedence takes place((*) --> (+) --> (-))
    cout << "The value of c is " << c;
    return 0;  
}
