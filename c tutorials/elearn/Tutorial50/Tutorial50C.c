// I/O FUNCTIONS IN C
// F PUTC & PUTS C

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("Tutorial50.txt", "a+"); // we can change here modes
    fputc('o', ptr);
    fputs("This is aman", ptr);
    fclose(ptr);
    return 0;
}