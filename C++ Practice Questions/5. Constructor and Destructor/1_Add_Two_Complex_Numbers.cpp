#include<iostream>
using namespace std;

class Complex
{
    int real;
    int img;
    public:
        void get_data();
        void print_data();
        void add(Complex &a, Complex &b);
};
void Complex :: get_data()
{
    cout<<"Enter the real part\n";
    cin>>real;
    cout<<"Enter the complex part\n";
    cin>>img;
}
void Complex :: print_data()
{
    cout<<real<<" + "<<img<<"i"<<endl;
}
void Complex :: add(Complex &a, Complex &b)
{
    this->real = a.real + b.real;
    this->img = a.img + b.img;
}
int main()
{
    Complex a,b,c;
    a.get_data();
    a.print_data();
    b.get_data();
    b.print_data();
    c.add(a,b);
    c.print_data();

    
    return 0;
}