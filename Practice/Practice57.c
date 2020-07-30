#include <stdio.h>
int main()
{
    // int a = '5';
    // int *ptra = &a;
    // printf("%d\n",ptra);
    // ptra++;
    // printf("%d\n",ptra);
    // printf("%d",ptra + 2); // calculates size of int depennds on pc architecture

    int i, a[5], *p;
    p = &a[0];
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", p + i);
    }
    for (i = 0; i <= 4; i++)
    {
        printf("%d\n", *(p + i));
    }

    return 0;
}