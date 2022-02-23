#include<iostream>
using namespace std;

void SwapByValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Swap Inside the function "<<endl;
    cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
}
void SwapByReference(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Swap Inside the function "<<endl;
    cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
}
void SwapByAddress(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout<<"Swap Inside the function "<<endl;
    cout<<"a = "<<*a<<" "<<"b = "<<*b<<endl;
}
int main()
{
    int a,b;
    a = 1;
    b = 3;

    cout<<"Pring before swapping"<<endl;
    cout<<"a = "<<a<<" "<<"b = "<<b<<endl;

    // SwapByValue(a,b);
    // SwapByReference(a,b);
    SwapByAddress(&a,&b);
    cout<<"Swap Outisde the function "<<endl;
    cout<<"a = "<<a<<" "<<"b = "<<b<<endl;

    
    
    return 0;
}