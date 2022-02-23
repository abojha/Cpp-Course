#include<iostream>
using namespace std;

class Base
{
    int b_value;
    public:
        public:
        void get_base(int n)
        {
            b_value = n;
        }
        void print_base()
        {
            cout<<"Base Value :: "<<b_value<<endl;
        }
};
class Derived1 : virtual public Base
{
    int d1_value;
    public:
        public:
        void get_Derived1(int n)
        {
            d1_value = n;
        }
        void print_Derived1()
        {
            cout<<"Derived1 :: "<<d1_value<<endl;
        }
};
class Derived2 : virtual public Base
{
    int d2_value;
    public:
        public:
        void get_Derived2(int n)
        {
            d2_value = n;
        }
        void print_Derived2()
        {
            cout<<"Derived2 :: "<<d2_value<<endl;
        }
};
class Derived : public Derived1, public Derived2
{
    int d_value;
    public:
        public:
        void get_d(int n)
        {
            d_value = n;
        }
        void print_d()
        {
            cout<<"Base Value :: "<<d_value<<endl;
        }
};
int main()
{
    Derived d;

    d.get_base(54);
    d.get_Derived1(22);
    d.get_Derived2(12);
    d.get_d(10);
    d.print_base();
    d.print_Derived1();
    d.print_Derived2();
    d.print_d();
    return 0;
}