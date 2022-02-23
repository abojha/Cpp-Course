#include<iostream>
using namespace std;

int main()
{
    int n,temp,rem,sum = 0;
    cout<<"Enter a Number\n";
    cin>>n;
    temp = n;
    while(temp!=0)
    {
        rem = temp%10;
        sum = sum + rem;
        temp = temp/10;
    }
    cout<<"The sum of digits of "<<n<<" is "<< sum<<endl;
    return 0;
}