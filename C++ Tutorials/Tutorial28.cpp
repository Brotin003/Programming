// Printing array content using for loop
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
    cout << mathMarks[3] << endl;

    cout << "These are Marks :" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is: " << marks[i] << endl;
    }

    return 0;
}