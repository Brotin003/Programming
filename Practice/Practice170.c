// STRCPY FUNCTION
#include <stdio.h>
#include <string.h>
int main()
{
    // char source[]= "Aman";
    char *source = "Aman";
    char Target[45];
    strcpy(Target, source);
    printf("Now the taret is %s",Target);
    return 0;
}

