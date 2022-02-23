#include<iostream>
using namespace std;

class Base
{
    int b;
    public:
        void get_data()
        {
            cout<<"Enter the data of Base\n";
            cin>>b;
        }
        void put_data()
        {
            cout<<"Base :: "<<b<<endl;
        }
};
class Derived1 : public Base
{
    int d1;
    public:
        void get_data()
        {
            Base :: get_data();
            cout<<"Enter the data of Derived1\n";
            cin>>d1;
        }
        void put_data()
        {
            Base :: put_data();
            cout<<"Derived 1 :: "<<d1<<endl;
        }
};
class Derived2 : public Derived1
{
    int d2;
    public:
        void get_data()
        {
            Derived1 :: get_data();
            cout<<"Enter the data of Derived2\n";
            cin>>d2;
        }
        void put_data()
        {
            Derived1 :: put_data();
            cout<<"Derived 2 :: "<<d2<<endl;
        }
};
int main()
{
    Derived2 num;
    num.get_data();
    num.put_data();
    return 0;
}