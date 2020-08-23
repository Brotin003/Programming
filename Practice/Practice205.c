// TO READ A WHOLE FILE
#include <stdio.h>
int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("Sample5.txt", "r");
    ptr = fopen("Sample5.txt", "r");
    c = fgetc(ptr);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    return 0;
}