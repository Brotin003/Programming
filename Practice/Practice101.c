//Write a program to determine whether a character entered by the user is lowercase on not
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the alphabet :-");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is uppercase\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is lowercase\n", ch);
    }
    else
    {
        printf("'%c' is not a alphabet\n", ch);
    }
    return 0;
}
// we can also solve this programm by ASCII( American Standard Code for Information Interchange) method
// we have to typecast a character into integer
// #include <stdio.h>
int main()
{
    // 97-122 = a to z --> ASCII values
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    if (ch<=122&ch>=97)
    {
        printf("It is a lowercase");
    }
    else
    {
        printf("It is not lowercase");
    }
    return 0;
}