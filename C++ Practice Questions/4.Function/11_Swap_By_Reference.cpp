#include<iostream>
using namespace std;

void Swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int num1, num2;
    cin>>num1>>num2;
    cout<<num1<<" "<<num2;
    Swap(num1, num2);
    cout<<endl;
    cout<<num1<<" "<<num2;
    return 0;
}