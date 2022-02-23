#include<iostream>
using namespace std;

inline int Largest_number(int a, int b)
{
    int r;
    r = (a>b) ? a : b;
    return r;
}
int main()
{
    int a, b;
    cout<<"Enter the first number\n";
    cin>>a;
    cout<<"Enter the second number\n";
    cin>>b;
    int r;
    r = Largest_number(a,b);
    cout<<"The largest number in "<<a<<" and "<<b<<" is "<<r<<endl;    
    return 0;
}