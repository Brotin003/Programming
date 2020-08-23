// Writing a file
#include <stdio.h>
int main()
{
    FILE *fptr;
    int number = 45;
    fptr = fopen("Sample2.txt", "w");
    fprintf(fptr, "The number is %d\n", number);
    fprintf(fptr, "Thanks for using fprintf\n");
    fclose(fptr);
    return 0;
}