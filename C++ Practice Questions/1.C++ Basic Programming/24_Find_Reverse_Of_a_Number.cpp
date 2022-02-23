#include<iostream>
using namespace std;

void reverse_a_number(int n)
{
    int rev;
    if(n>0)
    {
        rev = n%10;
        cout<<rev;
        reverse_a_number(n/10);
    }
    else
    {
        return;
    }
   

}
int main()
{
    int number,rev = 0,i,r;
    cout<<"Enter a Number"<<endl;
    cin>>number;
    reverse_a_number(number);
    // while(number>0)
    // {
    //     r = number%10;
    //     rev = rev*10 + r;
    //     number = number/10;
    // }
    // cout<<rev<<endl;
    return 0;
}