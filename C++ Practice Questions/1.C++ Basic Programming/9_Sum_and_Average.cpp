#include<iostream>
using namespace std;

int main()
{
    float num1, num2, num3;
    float sum; float avg;
    cout<<"Enter the first number:\n";
    cin>>num1;

    cout<<"Enter the second number:\n";
    cin>>num2;

    cout<<"Enter the third number:\n";
    cin>>num3;

    sum = num1 + num2 + num3;
    avg = sum/3;

    cout<<"The sum of "<<num1<<" "<<num2<<" "<<num3<<" is "<<sum<<endl;
    cout<<"The average of "<<num1<<" "<<num2<<" "<<num3<<" is "<<avg<<endl;

    return 0;
}