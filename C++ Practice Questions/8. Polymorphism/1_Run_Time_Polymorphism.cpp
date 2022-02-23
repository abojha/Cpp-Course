#include<iostream>
using namespace std;

class Base
{
    public:
        virtual void display()
        {
            cout<<"The function of base class is called\n";
        }
};

class Derived1 : public Base{
    public:
        void display()
        {
            cout<<"The function of Derived1 called\n";
        }
};
class Derived2 : public Base{
    public:
        void display()
        {
            cout<<"The function of Derived2 called\n";
        }
};
int main()
{
    Base *b;
    Derived1 d1;
    Derived2 d2;

    b = &d1;
    b->display();

    b = &d2;
    b->display();
    return 0;
}