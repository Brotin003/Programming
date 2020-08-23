// Create a string using " " and print its content using a loop
#include <stdio.h>
int main()
{
    // char str[] = "Aman";
    char str[] = { 'A','m','a','n','\0'};
    char *ptr = str;
    while (*ptr!='\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}