// Changing vaulue of function call x
#include<iostream>
using namespace std;
// Call by reference using C++ reference Variables
int & swapReferenceVar(int &a, int &b){
    int temp = a;          
    a = b;               
    b = temp;            
    return a;
}
int main(){
    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    swapReferenceVar(x, y) = 766; //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}