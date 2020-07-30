

#include <stdio.h>
int main()
{
    printf("Lets learn about pointers\n");
    int a = 76;
    int *ptra = &a;
    printf("The address of a pointer to a is %p\n", *ptra);       // we can also use here   %x, %p, %d, %c,
    printf("The address of a is %p\n", a);       //%e, %o, %i, %f, %u, %s, %x, %%, \% insted of %d                                                 
    printf("The value of a is %p\n", ptra);
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", a);                 
    return 0;
}

/*   %c  character
     %d	 decimal (integer) number (base 10)
     %e	 exponential floating-point number
     %f	 floating-point number
     %i	 integer (base 10)
     %o	 octal number (base 8)
     %s	 a string of characters
     %u	 unsigned decimal (integer) number
     %x	 number in hexadecimal (base 16)
     %%	 print a percent sign
     \%	 print a percent sign
                                     */