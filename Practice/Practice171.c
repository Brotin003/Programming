//STRCAT()
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[45] = "Hello ";
    char *s2 = "Aman";
    strcat(s1, s2);
    printf("Now the s1 is %s", s1);
    return 0;
}