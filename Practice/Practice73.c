#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print spaces
        for(j=i; j<N; j++)
        {
            printf(" ");
        }

        // Logic to print numbers
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}