// POINTERS
#include <stdio.h>
int main()
{
    int i = 8;
    int *j;
    j = &i; // J will now store the address of i
    printf("Value i = %d\n", i);
    printf("Value i = %d\n", *j);
    printf("Address i = %u\n", &i);
    printf("Address i = %u\n", j);
    printf("Value i = %d\n", (&i));
    printf("Address j = %u\n", &j);
    printf("Value j = %u\n", (&j));
    return 0;
}