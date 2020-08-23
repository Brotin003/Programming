// What will the following line produce in a C program:
// printf("%d %d %d\n",a,++a,a++);
#include <stdio.h>
int main()
{
    int a = 3;
    printf("%d %d %d\n", a, ++a, a++); //arguments pass through right to left thats why ans is 553 <--
    return 0;
}