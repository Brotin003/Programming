// OOPs Classes and objects
// Nesting of member functions
#include <iostream>
#include <string>
using namespace std;

class binary
{
private: // by default members of class are private
    string s;
    void check_bin(void); // check_binary

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void binary ::check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment(void)
{
    check_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    // b.check_bin();  // We cant use check binary here bcoz it is private
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}