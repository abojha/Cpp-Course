#include<iostream>
using namespace std;


class Complex
{
    int a,b;
    public:
        Complex(int x, int y)
        {
            a = x;
            b = y;
        }
        Complex(int x)
        {
            a = 5;
            b = 0;
        }
        Complex()
        {
            a = 0;
            b = 0;
        }
        void printnumbers()
        {
            cout<<"Your Complex numbers is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main()
{
  Complex c1(2,3);
  c1.printnumbers();

  Complex c2(5);
  c2.printnumbers();

  Complex c3;
    c3.printnumbers();
    return 0;
}