// Arrays 
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
    marks[2] = 4555; // We can change value of an array
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    return 0;
}