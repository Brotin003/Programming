//          5
//        4 4
//      3 3 3
//    2 2 2 2
//  1 1 1 1 1
#include <stdio.h>
int main()
{
    int i, j, N;
    printf("Enter N :- ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        for (j = i; j <= N - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", (N - i + 1));
        }
        printf("\n");
    }
    return 0;
}