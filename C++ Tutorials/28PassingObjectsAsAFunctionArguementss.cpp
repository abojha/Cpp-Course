#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:
        int setData(int v1, int v2)
        {
            a = v1;
            b = v2;
        }
        int setDatabysum(complex o1, complex o2) // here Objects used as a Dataytpe..(as a function arguements).......
        {
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void printnumber()
        {
            cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};
int main()
{
    complex c1,c2,c3;

    c1.setData(1,2);
    c1.printnumber();

    c2.setData(3,4);
    c2.printnumber();

    c3.setDatabysum(c1,c2);
    c3.printnumber();
    
    return 0;
}