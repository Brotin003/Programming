// I/O FUNCTIONS IN C
// F GET C

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("Tutorial50.txt", "r");
    char c  = fgetc(ptr);
    printf("The character i read was %c\n", c);
    c  = fgetc(ptr);
    printf("The character i read was %c\n", c);

    fclose(ptr);
    return 0;
}