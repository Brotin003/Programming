//Typedef in c

#include <stdio.h>
int main()
{
    // typedef <previous_name> <alias_name>;
    typedef unsigned long ul;
    typedef int integer;
    ul l1, l2, l3;
    integer a = 4;
    printf("Value of a is %d", a);

    return 0;
}