#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the first number:\n";     /* '<<' is called Insertion Operator*/
    cin>>num1;                            /* '>>' is called Exertion Operatior*/

    cout<<"Enter the second number:\n";
    cin>>num2;

    cout<<"The sum is "<<num1+num2;
    cout<<"\nThe substraction is "<<num1-num2;
    cout<<"\nThe multiplication is "<<num1*num2;
    cout<<"\nThe division is "<<num1/num2;
        return 0;
}
