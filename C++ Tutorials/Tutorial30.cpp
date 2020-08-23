// Pointers and arrays
#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {23, 45, 56, 89};
    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 342;
    mathMarks[2] = 222;
    mathMarks[3] = 22;

    cout << "These are mathMarks :" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl
         << endl;

    cout << "These are Marks :" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is: " << marks[i] << endl;
    }
    cout << "\n\n";

    // Pointers
    int *p = marks;
    // cout << *(p++) << endl;
    // cout << *(p++) << endl;
    // cout << *(++p) << endl;
    cout << "The value of *p is " << *p << endl;
    cout << "The value of *(p+1) is " << *(p + 1) << endl;
    cout << "The value of *(p+2) is " << *(p + 2) << endl;
    cout << "The value of *(p+3) is " << *(p + 3) << endl;

    return 0;
}