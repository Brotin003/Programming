// Static data members
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
};

// Count is the static data member of class Employee
int Employee ::count = 1000; // Default value is 0
int main()
{
    Employee aman, rohan, shubham;
    // aman.id = 1;
    
    // aman.count = 1; // cannot do this coz, id and count are private

    aman.setData();
    aman.getData();

    rohan.setData();
    rohan.getData();

    shubham.setData();
    shubham.getData();
    return 0;
}