#include<iostream>
using namespace std;

template<class t1, class t2>
void sum(t1 a, t2 b)
{
    cout<<"The sum is :: "<<a+b<<endl;
}
int main()
{
    int a, b;
    float x, y;

    cout<<"Enter two integer data\n";
    cin>>a>>b;

    cout<<"Entet two float data\n";
    cin>>x>>y;

    sum(a,b);
    sum(x,y);
    sum(a,x);
    sum(b,y);


    return 0;
}