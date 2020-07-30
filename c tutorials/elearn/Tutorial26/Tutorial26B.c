//STRING FUNCTIONS IN C <STRING.H>
// STRCMP 

#include <stdio.h>
#include <string.h>
int main()
{
    char string1[] = "Aman\t";
    char string2[] = "Abhishek\t";
    char string3[54];
    printf("The strcmp for string1, string2  returned %d", strcmp(string1, string2));
    //Strcmp:- function is used to compare two  given strings

    return 0;
}