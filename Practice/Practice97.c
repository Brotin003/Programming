// What will be the output of this Programm
// int a = 10;
// if(a=11)
// printf("I am 11");
// else
// {
//     printf("I am not 11");
// }
#include <stdio.h>
int main()
{
    int a = 10;
    if (a = 11) // if we use (== IS EQUAL TO) then the program will print {I am not 11}
    {
        printf("I am 11");
    }
    else
    {
        printf("I am not 11");
    }
    return 0;
}