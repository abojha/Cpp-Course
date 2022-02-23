#include<iostream>
using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;
    public:
            simple(int a, int b = 10, int c = 100)
            {
                data1 = a;
                data2 = b;
                data3 = c;
            }
        void printdata()
        {
            cout<<"The value of data is "<<data1<<" and "<<data2<<" and "<<data3;
        }
};
int main()
{
    simple a(3);

    a.printdata();
    
    return 0;
}