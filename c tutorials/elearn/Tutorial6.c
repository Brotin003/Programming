//C FORMAT SPECIFIERS & ESCAPE SECQUENCES
// SOME SPECIFIERS ARE:- %C , %D, %Lf , %lf, %l
//some escape secquences are:- \a, \b, \f, \n, \r, \t, \v, \\ ,etc  

#include <stdio.h>
#define PI 3.14
/* this is a multiline comment

this is only for me and it is only read by me computer can't read this comment


this is ignored by my computer */
int main()
{
    int a = 8;
    const float b = 7.333;
    // PI = 7.33;  cannot do this science PI is a constant 
    // printf("%f", PI);
    printf(" tab character \t\t my backslash \\d %.2f", PI);
    // b = 7.22; cannot do this science b is a constant 
    // printf("Hello World\n");

    // printf("%18.4f\n",b);


    return 0;
}
