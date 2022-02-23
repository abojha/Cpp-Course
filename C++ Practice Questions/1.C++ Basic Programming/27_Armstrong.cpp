#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,f,temp,a = 0, sum = 0,rem;
    cout<<"Enter the Number\n";
    cin>>num;
     
    temp = num;

     while(temp!=0)
    {
        temp = temp/10;
        a++;
        
    }
    f = num;
    while(f!=0)
    {
        rem = f%10;
        sum = sum + pow(rem,a);
        f = f/10;
    }
    if(sum == num)
    {
        cout<<"The Entered Number is Armstrong\n";
    }
    else
    {
        cout<<"Not"<<endl;
    }
    return 0;
}