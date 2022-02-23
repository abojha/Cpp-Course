#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the First Number :: ";
    cin>>a;
    cout<<"Enter the Second Number :: ";
    cin>>b;
    cout<<"Enter the Third Number :: ";
    cin>>c;

    if(a>= b && a >= c)
    {
        cout<<"The Largest Number among "<<a<<","<<b<<","<<c<<","<<" is "<<a<<endl;
    }
    if(b>= a && b >= c)
    {
        cout<<"The Largest Number among "<<a<<","<<b<<","<<c<<","<<" is "<<b<<endl;
    }
    if(c>= b && c >= a)
    {
        cout<<"The Largest Number among "<<a<<","<<b<<","<<c<<","<<" is "<<c<<endl;
    }
    return 0;
}