//STORAGE CLASS IN C
//2. EXTERNAL VARIABLES - EXTERNAL STORAGE CLASS

#include <stdio.h>

int myfunc(int a, int b)
{
    //auto int sum;
    extern int sum;
    // sum = a + b;
    return sum;
}
int sum = 343;
int main()
{
    int sum = myfunc(3, 5);
    printf("The sum is %d\n", sum);

    return 0;
}