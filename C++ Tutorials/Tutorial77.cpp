// Revisiting pointers: new and delete keywords
#include <iostream>
using namespace std;
int main()
{
    // Basic Examples
    int a = 4;
    int *ptr = &a;
    *ptr = 999;
    cout << "The value of a is " << *(ptr) << endl;

    // new operator/keyword
    int *p = new int(40);
    cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 30;
    arr[2] = 40; 
    // delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    // Deleting operator

    return 0;
}