// STRCMP()
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[45] = "Hello";
    char *s2 = "Hezlo";
    int val = strcmp(s1, s2);
    printf("Now the s1 is %d", val);
    return 0;
}