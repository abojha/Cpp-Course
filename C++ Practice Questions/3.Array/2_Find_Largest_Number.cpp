#include<iostream>
using namespace std;

int main()
{
    int a[10];
    int max;
    for(int i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    max = a[0];
    for(int i = 0; i < 10; i++)
    {
       if(max<a[i])
       {
           max = a[i];
       }
    }
    cout<<max<<endl;
    return 0;
}