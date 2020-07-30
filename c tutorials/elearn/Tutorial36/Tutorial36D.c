//STORAGE CLASS IN C
//3. STATIC VARIABLES - STSTIC STORAGE CLASS
//Decelaration:- Telling the compiler about the variable(No space reserve)
//Defination:- Decelaration + space reservation

#include <stdio.h>

int myfunc(int a, int b)
{
    // auto int myVar;  
    static int myVar;
    myVar++;
    printf("The myVar is %d\n", myVar);

    // myVar = a + b;
    return myVar;
}
int main()
{
    int myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);

    // printf("The myVar is %d\n", myVar);

    return 0;
}