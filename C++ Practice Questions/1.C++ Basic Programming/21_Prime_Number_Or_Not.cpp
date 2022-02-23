#include<iostream>
using namespace std;

int main()
{
    int num,count=0;
    cout<<"Enter the Number\n";
    cin>>num;

    for(int i = 1; i <= num/2; i++)
    {
       
        if(num%i==0)
        {
            count++;
        }
    }
    if(count == 1)
    {
        cout<<"Given Number [ "<<num<<" ] is Prime Number\n";
    }
    else
    {
        cout<<"Given Number [ "<<num<<" ] is not Prime Number\n";
    }
    return 0;
}