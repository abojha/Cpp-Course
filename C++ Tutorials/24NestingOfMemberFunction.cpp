#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);

    void ones_compliment(void);
    void displaynum(void);
};
void binary ::read(void)
{
    cout << "Enter the number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
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
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}
void binary ::displaynum()
{
    cout << "Diplaying your binary Number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << "\n";
}

int main()
{
    // OOps - classes and objects

    //c++ --> c with classes by stroustrope
    //class ==> Extension of structure(in C)
    //structure had limitations
    //          - Members are public
    //          - No methods
    // Classes --> Structures  + more.
    // Classes can have methods and properties.
    // Classes can make few members as private and few as public.
    // Structure in C++ are typedefed/
    // you can declare objects along with class declaration.

    /* class Employee{
                 // Class definition
                }harry,abhay,anjali; */

    //Nesting of Member functions

    binary b;
    b.read();
    b.displaynum();
    //b.chk_bin(); ( its private in class)
    b.ones_compliment();
    b.displaynum();
    return 0;
}