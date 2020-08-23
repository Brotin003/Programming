#include <stdio.h>
int main()
{
    int i = 5;
    printf("The value after i++ is %d\n", ++i);
     i++; //--> pehle print fir increament
     ++i; //--> pehle increament fir print
    printf("The value i is %d\n", i);

    i+=10; // --> Increaments i by 10
    printf("The value of 1 is %d\n",i);
    return 0;
}