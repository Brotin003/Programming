#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character:-");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
       printf("'%c' is a Alphabet.", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("'%c' is a digit", ch);
    } 
    else
    {
        printf("'%c' is a special character", ch);
    }

    return 0;
}

