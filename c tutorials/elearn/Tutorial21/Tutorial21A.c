/*ARRAY AND POINTER ARITHMATIC IN C*/
//basic pointer arithmatic
#include <stdio.h>
int main()
{
    int a = '3';
    int *ptra = &a;
    printf("%d\n", ptra); // can also use%x for hexa decimal , %p,%u etc
    ptra++;               //     ptra--
    printf("%d\n", ptra);
    printf("%d", ptra + 2); // +1,2,-1,-2 CALCULATES SIZE OF INT DEPENDS ON PC ARCITECTURE LITE 34 AND 64
    return 0;
}