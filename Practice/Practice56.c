//NULL POINTER

#include <stdio.h>
int main()
{
    //     int a = 5;
    //     int * p = NULL; // Declaring and initializing null pointer
    //     printf("%d\n",p); // printing value of null pointer

    int a = 76;
    int *ptra = &a;
    printf("The address of a pointer to the a is %p\n", *ptra);
    printf("The address of a is %p\n", a);
    printf("The value of a is %p\n", *ptra);
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", a);
    return 0;
}