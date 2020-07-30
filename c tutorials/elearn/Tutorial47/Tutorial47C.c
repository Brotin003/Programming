//FUNCTIONS FOR FILE I/O
// ****3.APPEND A FILE****
// it means txt file txt will be not dissapper .....and continues adding the program text on it
#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char string[64] = "This content was produced by Tutoria47.c";

    ptr = fopen("Tutorial47C.txt", "a");
    fprintf(ptr, "%s", string);

    return 0;
}