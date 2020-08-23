// for loop 
// #include<iostream> 
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the number" << endl;
//     cin >> num;
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << num << " X " << i << " = " << num * i << endl;

//     }
// }

// while loop
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     int i = 1;
//     cout << "Enter the number" << endl;
//     cin >> num;
//     while (i <= 10)
//     {
//         cout << num << " X " << i << " = " << num * i << endl;
//         i++;
//     }
// }

// Do- while loop
#include <iostream>
using namespace std;
int main()
{
    int num;
    int i = 1;
    cout << "Enter the number" << endl;
    cin >> num;
    do
    {
        cout << num << " X " << i << " = " << num * i << endl;
        i++;
    } while (i <= 10);
    return 0;
}