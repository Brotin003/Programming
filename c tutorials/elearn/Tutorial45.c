//#DEFINE AND #INCLUDE PREPROCESSOR DIRECTIVES
#include <stdio.h>
#include "Tutorial44.c" 
#define PI 3.14
#define SQUARE(r) r*r   //MACROS
int main()
{
    float var = PI;
    int r = 4;
    printf("The value of PI is %f\n", var);
    printf("The area of the circle is is %f\n", PI * SQUARE(r));

    return 0;
}