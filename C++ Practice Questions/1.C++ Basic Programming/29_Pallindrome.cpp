#include<iostream>
using namespace std;

int main()
{
    int n,rev = 0,tem,rem;
    cout<<"Enter the number\n";
    cin>>n;

    tem = n;
    while(tem!=0)
    {
        rem = tem%10;
        rev = rev*10 + rem;
        tem = tem/10;
    }

    if(n == rev)
    {
        cout<<"The Given Number is Pallindrom"<<endl;
    }
    else
    {
        cout<<"Not"<<endl;
    }
    return 0;
}