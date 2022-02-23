#include<iostream>
using namespace std;

class Base1
{
    public:
        void greet()
        {
            cout<<"How are you?"<<endl;
        }
};

class Base2
{
     public:
        void greet()
        {
            cout<<"kaise ho?"<<endl;
        }
};

class Derived : public Base1, public Base2
{
    int a;
    public:
        void greet()
        {
            Base2 :: greet();
        }
};
class B
{
    public:
        void say()
        {
            cout<<"Hello World"<<endl;
        }
};
class D
{
    public:
        void say()
        {
            cout<<"Hi Abhay"<<endl;
        }
};
int main()
{
    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // Derived d;
    // d.greet();
    D a;
    B b;
    b.say();
    a.say();
    
    return 0;
}