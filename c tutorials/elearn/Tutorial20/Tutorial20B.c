//NULL POINTER

#include <stdio.h>
int main()
{
    printf("Lets learn about pointers\n");
    int a = 76;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("The address of a pointer to a is %p\n", *ptra);       // we can also use here   %x, %p, %d, %c,
    printf("The address of a is %p\n", a);       //%e, %o, %i, %f, %u, %s, %x, %%, \% insted of %d                                                 
    printf("The value of a is %p\n", ptra);
    printf("The value of some garbage is %p\n", ptr2);
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", a);                 
    return 0;
}