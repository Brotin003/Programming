// Union
#include <iostream>
using namespace std;
union money
{
    int rice;     //4b   computer will merge these data types  
    char car;     //1b   and insted of using (4 + 1 + 4 = 9 bytes)
    float pounds; //4b   computer will use only 4 bytes 
};
int main()
{
    union money m1;
    // m1.car = 'f';
    m1.rice = 34;
    cout << m1.rice;
    return 0;
}