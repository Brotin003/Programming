//STORAGE CLASS IN C
//1. AUTOMATIC VARIABLES - AUTO STORAGE CLASS
//Decelaration:- Telling the compiler about the variable(No space reserve)
//Defination:- Decelaration + space reservation
//STORAGE CLASS IN C
//1. AUTOMATIC VARIABLES - AUTO STORAGE CLASS
//Decelaration:- Telling the compiler about the variable(No space reserve)
//Defination:- Decelaration + space reservation

#include <stdio.h>
int sum;
int myfunc(int a, int b)
{
    auto int sum;
    sum = a + b;
    return sum;
}
int main()
{
    // int sum = myfunc(3, 5);
    printf("The sum is %d\n", sum);

    return 0;
}