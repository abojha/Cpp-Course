#include<iostream>
using namespace std;

double sum(int, int);
double res;

int main()
{
    int x, n;
    cout<<"Enter the value of x :: ";
    cin>>x;
    cout<<"Enter the value of n :: ";
    cin>>n;
    
    res = sum(x,n);
    cout<<"\n Sum of Series [x + x^3/3! + x^5/5! + ........] is "<<res<<endl;

    return 0;
}
double sum(int x, int n)
{
    double s = 0, fac = 1;
    long p;
    long power(int, int);

    for(int i = 1; i <= n; i+=2)
    {
        p = power(x,i);

        for(int j = 1; j <= i; j++)
        {
            fac*=j;
        }
        s+= p/fac;
        fac = 1;
    }
    return s;
}
long power(int a, int i)
{
    int res = 1;
    for(int j = 1; j <= i; j++)
    {
        res*= a;
    }
    return res;
}