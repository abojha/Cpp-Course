#include<iostream>
using namespace std;

class Complex
{
    int r,i;
    public:
        Complex(){}
        Complex(int a, int b);
        void print_data();
        Complex operator +(Complex &C1);
        Complex operator ++();
        Complex operator ++(int);
};

Complex :: Complex(int a, int b)
{
    r = a;
    i = b;
}
void Complex :: print_data()
{
    cout<<r<<" + i"<<i<<endl;
}

Complex  Complex :: operator+(Complex &C1)
{
    Complex temp;
    temp.r = r + C1.r;
    temp.i = i + C1.i;

    return temp;
}
Complex Complex :: operator++()
{
    r++;
    i++;
    return *this;
}
Complex Complex :: operator++(int x)
{
    r++;
    i++;
    return *this;
}
int main()
{
    
    Complex C1(4,5), C2(2,3), C3;
    C1.print_data();
    C2.print_data();
    C3 = C1 + C2;
    C3.print_data();

    cout<<endl;

    ++C1;
    C1.print_data();

    C3 = ++C1;
    C3.print_data();

    C1++;
    C1.print_data();
    return 0;
}