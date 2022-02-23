#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter the first number:\n";
    cin>>a;
    cout<<"Enter the second number:\n";
    cin>>b;

    cout<<"Before Swapping: "<<" The numbers are "<<a<<" and "<<b<<endl;
    a = a+b;
    b = a-b;
    a = a-b;
     cout<<"After Swapping: "<<" The numbers are "<<a<<" and "<<b;
    return 0;
}