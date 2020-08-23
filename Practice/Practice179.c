// Write a program to count the occurence of a given character in a string
#include<stdio.h>
int occurence(char st[], char c)
{
    char *ptr = st;
    int count=0;
    while (*ptr!='\0')
    {
        if (*ptr==c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char st[] = "Aman7797";
    int count = occurence(st, 'A'); // we can change value here to check occurence of any value or character 
    printf("Occurences = %d", count);
    return 0;
}