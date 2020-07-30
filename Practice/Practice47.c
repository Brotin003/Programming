// GOTO STATEMENT
#include <stdio.h>

int main()
{
    int i = 1;

start:
    goto print;

print:
    printf("%d ", i);
    goto next;

increment:
    i++;
    goto print;

next:
    if (i < 10)
        goto increment;
    else
        goto exit;

    printf("I cannot execute.");

exit:
    return 0;
}