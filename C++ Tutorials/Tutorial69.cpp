// Multi Level Inheritance
#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float Maths;
    float Physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    Maths = m1;
    Physics = m2;
}

void Exam ::get_marks()
{
    cout << "The marks obtaind in maths are " << Maths << endl;
    cout << "The marks obtaind in physics are " << Physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is " << (Maths + Physics) / 2 << "%" << endl;
    }
};
int main()
{
    Result Aman;
    Aman.set_roll_number(420);
    Aman.set_marks(95.0, 90.0);
    Aman.display_results();
    return 0;
}
/*
NOTE :- 
        If we are inheratating B from A and C form B : [ A ---> B ---> C ]
        1. A is the base class for B and B is the base class for C
        2. A --> B --> C is called Inheratance path
*/        