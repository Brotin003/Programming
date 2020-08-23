// Repeat problem 3 for a general input provided by the user using scanf
#include <stdio.h>
int main()
{
    int n;
    int arr[10];
    printf("Enter n :- ");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n *(i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", n, i + 1, arr[i]);
    }
    return 0;
}