#include<iostream>
using namespace std;

int main()
{
    int divisor, dividend, quotient, remainder;
    cout<<"Enter the Dividend ";
    cin>>dividend;
    cout<<"Enter the Divisor ";
    cin>>divisor;

    quotient = dividend/divisor;
    remainder = dividend % divisor;

    cout<<"The quotient of "<<dividend<<"/"<<divisor<<" is "<<quotient<<endl;
    cout<<"The remainder of "<<dividend<<"%"<<divisor<<" is "<<remainder<<endl;
    return 0;
}