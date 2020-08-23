//Passing array to functions
#include <stdio.h>
void printArray(int ptr[], int n)
{
    for (int i= 0; i<n;i++)
    {
        printf("The value of elements %d is %d\n", i+1, ptr[i]);
    }
    ptr[2] = 55555; // This will be change in main as well
}
int main()
{
    int arr[]={ 1, 2, 3454, 33, 2, 3, 33 };
    printArray(arr, 7);  // if we increase the value to (arr,8) then it will print a garbage value
    printf("%d", arr[2]);
    return 0;
}