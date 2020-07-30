//STORAGE CLASS IN C
//4. REGISTER VARIABLES - REGISTER STORAGE CLASS#include <stdio.h>
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
    register int myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);

    // printf("The myVar is %d\n", myVar);

    return 0;
}