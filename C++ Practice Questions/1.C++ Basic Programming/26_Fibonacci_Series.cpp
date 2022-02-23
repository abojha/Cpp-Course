#include<iostream>
using namespace std;

int fibo_series(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else if(n == 2)
    {
        return 1;
    }
    else
    {
        return fibo_series(n-1) + fibo_series(n-2);
    }
}
int main()
{
    // int number, first = 1, second = 1, next;
    // cout<<"Enter the number up to which you want to find the fibo. series\n";
    // cin>>number;

    // for(int i = 0; i < number; i++)
    // {
    //     next = first + second;
    //     first = second;
    //     second = next; 
    //     cout<<first<<" ";
    // }
   for(int i = 1; i <= 10; i++)
   {
       cout<<fibo_series(i)<<" ";
   }
    return 0;
}