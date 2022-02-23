#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"C++ Program to Print "
        <<"Table of any Number"<<endl;

    cout<<"Enter any Number\n";
    cin>>n;

    for(int i = 0; i < 10; i++)
    {
        cout<<n<<"X"<<i+1<<"="<<n*(i+1)<<endl;
    }
    return 0;
}