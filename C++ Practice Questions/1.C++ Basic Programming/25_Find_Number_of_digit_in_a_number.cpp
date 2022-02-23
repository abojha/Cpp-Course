#include<iostream>
using namespace std;

int main()
{
    int num,num1;
    int a = 0;
    cout<<"Enter any Number\n";
    cin>>num;
    num1 = num;

    while(num1>0)
    {
        num1 = num1/10;
        a++;
    }
    cout<<"The number of digits in "<<num<<" is "<<a<<endl;
    return 0;
}