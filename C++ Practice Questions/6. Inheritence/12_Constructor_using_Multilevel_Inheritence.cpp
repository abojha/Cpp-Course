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
class Derived1 :public Base
{
    int d;
    public:
        Derived1() : Base()
        {
            d = 0;
        }
        Derived1(int x, int y) : Base(x)
        {
            d = y;
        }
        void get_d()
        {
            cout<<"Enter the Derived1 value ";
            cin>>d;
        }
        void display_d()
        {
            cout<<"Derived1 :: "<<d<<endl;
        }
};
class Derived2 :public Derived1
{
    int d;
    public:
        Derived2() : Derived1()
        {
            d = 0;
        }
        Derived2(int x, int y, int z) : Derived1(x,y)
        {
            d = z;
        }
        void get_d2()
        {
            cout<<"Enter the Derived2 value ";
            cin>>d;
        }
        void display_d2()
        {
            cout<<"Derived2 :: "<<d<<endl;
        }
};
int main()
{
      Derived2 e(5,6,7);
//    e.Enter_a();
//    e.get_d();
//    e.get_d2();
   e.display_a();
   e.display_d();
   e.display_d2();
   
    return 0;
}