// STRINGS IN C

#include <stdio.h>

void printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'a', 'm', 'a', 'n','\0'};       // we can also use this meathod          
    // char str[5] = "aman";                            // in str[5] is we use less or equal to character then it will show us errror  


    char str[34];
    gets(str);                      //for user input array (user se input karana ho to)

    printf("Using custom function Printstr\n");
    printstr(str);
    printf("Using printf %s\n", str);  // also use this insted of printstr(str);
    printf("Using puts: \n");          // alsouse this
    puts(str);
    return 0;
}