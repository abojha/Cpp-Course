#include<iostream>
using namespace std;


void Pattern1(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j >= i; j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    Pattern1(5);
    return 0;
}