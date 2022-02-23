#include<iostream>
using namespace std;

class Base
{
    int a;
    public:
        Base()
        {
            a = 0;
        }
        Base(int x)
        {
            a = x;
        }
        void Enter_a()
        {
            cout<<"Enter the base value\n";
            cin>>a;
        }
        void display_a()
        {
            cout<<"Base :: "<<a<<endl;
        }

};
class Derived :public Base
{
    int d;
    public:
        Derived() : Base()
        {
            d = 0;
        }
        Derived(int x, int y) : Base(x)
        {
            d = y;
        }
        void get_d()
        {
            cout<<"Enter the Derived value ";
            cin>>d;
        }
        void display_d()
        {
            cout<<"Derived :: "<<d;
        }
};
int main()
{
    Derived d;
    d.Enter_a();
    d.get_d();
    d.display_a();
    d.display_d();

    Derived c(5,6);
    c.display_a();
    c.display_d();

    return 0;
}