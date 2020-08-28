// Static Functions 
#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the Id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The Id of this employee id " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id; // Throws an error
        cout << "The value of count is " << count << endl;
    }
};

int Employee ::count; // Default value is 0
int main()
{
    Employee aman, rohan, shubham;
    // aman.id = 1;
    // aman.count = 1; // cannot do this coz, id and count are private

    aman.setData();
    aman.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    shubham.setData();
    shubham.getData();
    Employee::getCount();

    return 0;
}