// Passing array to the funcion
#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d\n", i, array[i]);
    }
    return 0;
}
int main()
{
    int arr[] = {23, 13, 3, 4};
    printf("The value at index 0 is %d\n", arr[0]);
    func1(arr);
    printf("The value at index 0 is %d\n", arr[0]);
    return 0;
}    