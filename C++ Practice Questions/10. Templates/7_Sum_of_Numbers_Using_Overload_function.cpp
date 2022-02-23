#include<iostream>
using namespace std;

template<class t1>
void sum(t1 a, t1 b, t1 c)
{
    cout<<"The Template function 1 :: "<<a+b+c<<endl;
}
template<class t1, class t2>
void sum(t1 a, t1 b, t2 c)
{
    cout<<"The Template function 2 :: "<<a+b+c<<endl;
}

void sum(int a, int b)
{
    cout<<"Normal Function :: "<<a+b<<endl;
}
int main()
{
    int a, b;
    float x, y,z;

    cout<<"Enter two integer data\n";
    cin>>a>>b;

    cout<<"Entet two float data\n";
    cin>>x>>y>>z;

    sum(a,b);
    sum(x,y,z);
    sum(a,b,x);
   

    return 0;
}