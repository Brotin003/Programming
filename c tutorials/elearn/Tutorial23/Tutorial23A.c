//call by value

#include <stdio.h>

void changevalue(int*address)    //*a
{ 
      *address = 345;
}
int main()
{
    int a = 34, b = 36;
    printf("The value of a now is %d\n", a);
    changevalue(&a);
    printf("The value of a now is %d\n", a);


    return 0;
}

//Quick quiz
//Given two number a and b , add them substract them and assign them to a and b using call by refrence
// a = 4
//b= 3

//after running the  function, the values of a and b should be:
// a=7   
//b= 1