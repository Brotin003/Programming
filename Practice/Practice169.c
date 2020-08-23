// STRLEN FUNCTION
#include <stdio.h>
#include <string.h>
int main()
{
    char *st = "Aman"; // this function do not count the null character (\0)
    int a = strlen(st);
    printf("The length of string st is %d",a);
    return 0;
}