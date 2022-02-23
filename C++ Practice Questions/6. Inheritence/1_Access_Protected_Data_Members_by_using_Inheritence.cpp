#include<iostream>
using namespace std;

class base
{
    protected:
        int data;
   
};
class Derived : public base
{

    public:
    Derived(){}
        void get_data(int a)
        {
            data = a;
        }
        void print_data()
        {
            cout<<base::data<<endl;
        }
};
int main()
{ Derived d;
    d.get_data(3);
    d.print_data();
    return 0;
}