#include<iostream>
using namespace std;

class complex{
    int a,b;

    public:
        complex(int, int);
        void printdata()
        {
            cout<<a<<" + "<<b<<"i"<<endl;
        }

};

complex :: complex(int x, int y) // Parameterized Constructor ( it takes 2 parameter)
{
    a = x;
    b = y;
}
int main()
{
    // Implicit Call
    complex c(7,9);

    // Explicit Call
    complex d = complex(13,15);
    c.printdata();
    d.printdata();
    
    return 0;
}