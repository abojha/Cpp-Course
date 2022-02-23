#include<iostream>
using namespace std;

int fibo_term(int n)
{
    if(n == 0)
    {
        return 1;
    }
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return fibo_term(n-1) + fibo_term(n-2);
    }
}
int main()
{
    int n;
    cout<<"Enter the terms of Fibo. Series\n";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        cout<<fibo_term(i)<<", ";
    }

    return 0;
}