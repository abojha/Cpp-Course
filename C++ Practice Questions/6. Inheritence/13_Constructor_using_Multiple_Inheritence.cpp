#include<iostream>
using namespace std;

class Base1
{
    int a;
    public:
        Base1()
        {
            a = 0;
        }
        Base1(int x)
        {
            a = x;
        }
        void Enter_a()
        {
            cout<<"Enter the base1 value\n";
            cin>>a;
        }
        void display_a()
        {
            cout<<"Base1 :: "<<a<<endl;
        }

};
class Base2 
{
    int d;
    public:
        Base2() 
        {
            d = 0;
        }
        Base2(int y)
        {
            d = y;
        }
        void Enter_d()
        {
            cout<<"Enter the Base2 value ";
            cin>>d;
        }
        void display_d()
        {
            cout<<"Base2 :: "<<d<<endl;
        }
};
class Derived : public Base1, public Base2
{
    int d;
    public:
        Derived() : Base1(), Base2()
        {
            d = 0;
        }
        Derived(int x, int y, int z) : Base1(x), Base2(y)
        {
            d = z;
        }
        void get_d()
        {
            cout<<"Enter the Derived value ";
            cin>>d;
        }
        void display_d2()
        {
            cout<<"Derived :: "<<d<<endl;
        }
};
int main()
{
      Derived e(34,56,79);
    // e.Enter_a();
    // e.Enter_d();
    // e.get_d();
    e.display_a();
    e.display_d();
    e.display_d2();
   
    return 0;
}