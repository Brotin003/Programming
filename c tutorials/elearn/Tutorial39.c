// VOID POINTERS IN C.....

#include <stdio.h>
int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr)); //We can also store value of int by de refrencing
    ptr = &b;
    printf("The value of b is %f\n", *((float *)ptr));
    return 0;
}

//ek hi pointer variable ko istemal krke alag alag tarah ke addresses usme store kr lie...ek hi pointer variable m....
//isi lie void *ptr ko ek general purpose pointer bhi bola jata hai....
//Void pointers ko hum directly de refrence nhi kr skte.........