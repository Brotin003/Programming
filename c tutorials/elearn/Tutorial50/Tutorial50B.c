// I/O FUNCTIONS IN C
// F GET C

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("Tutorial50.txt", "r+");
    char str[4];
    fgets(str, 5, ptr);
    printf("The string is %s\n", str);
    fclose(ptr);
    return 0;
}