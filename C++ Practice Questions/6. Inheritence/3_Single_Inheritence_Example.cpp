#include<iostream>
using namespace std;

class base
{
    int a;
    public:
        int b;
        void get_ab();
        int get_a();
        void show_a();
};
class Derived : private base
{
    int c;
    public:
        void mul();
        void show_val();
};
void base :: get_ab()
{
    cout<<"Enter the value of a and b::";
    cin>>a>>b;
}

int base :: get_a()
{
    return a;
}

void base :: show_a()
{
    cout<<"a :: "<<a<<endl;
}

void Derived ::mul()
{
    get_ab();
    c = b*get_a();
}

void Derived :: show_val()
{
    show_a();
    cout<<"b :: "<<b<<endl;
    cout<<"c :: "<<c<<endl;
}
int main()
{
    Derived d;
    d.mul();
    d.show_val();
    
    return 0;
}