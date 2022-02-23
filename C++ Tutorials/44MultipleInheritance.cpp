#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void get_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void get_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
    public:
        void show()
        {
            cout<<"The value of Base 1 is "<<base1int<<endl;
            cout<<"The value of Base 2 is "<<base2int<<endl;
            cout<<"The sum of these value is "<<base1int+base2int<<endl;
        }
};
int main()
{
    Derived ab;
    ab.get_base1int(23);
    ab.get_base2int(24);
    ab.show();

    return 0;
}