#include<iostream>
using namespace std;
/*
Case1:
class B: public A
{
    order of execution of constructor -> first A() than B()
};

Case2:
class A : public B, public C
{
 // order of execution of constructor ->
    B() then C() and A()
};

Case3:
class A: public B, virtual public C
{
    //order of execution of constructor ->
    C() then B() and then A()
};


*/

class Base1
{
    int data1;
    public:
        Base1(int i)
        {
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printdataBase2(void)
        {
            cout<<"The value of data is "<<data1<<endl;
        }
};
class Base2
{
int data2;
    public:
        Base2(int i)
        {
            data2 = i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printdataBase1(void)
        {
            cout<<"The value of data is "<<data2<<endl;
        }
};
class Derived: public Base2, public Base1
{
    int derived1, derived2;
        public:
            Derived(int a, int b, int c, int d): Base2(a),Base1(b)
            {
                derived1 = c;
                derived2 = d;
                cout<<"Derived class constuctor called"<<endl;
            }
     void printdata(void)
        {
            cout<<"The value of data is "<<derived1<<endl;
            cout<<"The value of data is "<<derived2<<endl;
        }
};
int main()
{
    Derived ab(1,2,3,4);

    ab.printdataBase1();
    ab.printdataBase2();
    ab.printdata();
    return 0;
}