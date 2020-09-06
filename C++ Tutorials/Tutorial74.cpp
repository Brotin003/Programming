// Virtual base class
#include <iostream>
using namespace std;

/*
   Inheritance:
   student --> Test
   student --> sports
   test    --> result
   sports  --> result
*/
class Students
{
protected:
    int roll_no;

public:
    void set_rollNumber(int a)
    {
        roll_no = a;
    }
    void print_rollNumber(void)
    {
        cout << "Your roll number is " << roll_no << endl;
    }
};

// student --> Test
class Test : virtual public Students
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your result is here: " << endl
             << "Maths : " << maths << endl
             << "Physics : " << physics << endl;
    }
};

//  student --> sports
class Sports : virtual public Students
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};

//  test    --> result
//  sports  --> result
class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_rollNumber();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

int main()
{
    Result Aman;
    Aman.set_rollNumber(234);
    Aman.set_marks(88.7,79.7);
    Aman.set_score(9);
    Aman.display();
    return 0;
}