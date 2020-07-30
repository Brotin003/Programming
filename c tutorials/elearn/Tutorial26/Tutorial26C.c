// allow user to enter two strings and then concatenate them by saying that
// str1 is a friend of str2

#include <stdio.h>
#include <string.h>

int main()
{
    char f1[32];
    char f2[32];
    char f3[] = " is the friend of ";
    printf("Enter the first friend's name.\n");
    gets(f1);
    printf("Enter the second friend's name.\n");
    gets(f2);
    printf(strcat(f1,strcat(f3,f2)));

    return 0;
}