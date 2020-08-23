// Manipulators in C++
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 3, b= 78, c= 1288;
    //With setw
    cout<<"The value of a is : "<<setw(4)<<a<<endl;
    cout<<"The value of b is : "<<setw(4)<<b<<endl;
    cout<<"The value of c is : "<<setw(4)<<c<<endl;
   
    //Without setw
    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of b is : "<<b<<endl;
    cout<<"The value of c is : "<<c<<endl;
    return 0;
}
 
