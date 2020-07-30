//RANDOM NUMBER BETWEEN 0 TO 100
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL)); //SRAND TAKES SEED AS AN INPUT AND IS DEFINED INSIDE STDLIB.H
    printf("The random number between 0 and 100 is %d\n", rand()%100);
    return 0;
}