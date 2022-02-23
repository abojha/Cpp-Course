#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    if(a<b)
    {
        return GCD(b,a);
    }
    else
    {
        return GCD(b,a%b);
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b);
    return 0;
}