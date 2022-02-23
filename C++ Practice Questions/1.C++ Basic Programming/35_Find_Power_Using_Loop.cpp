#include<iostream>
using namespace std;

int main()
{
    int n,p,pow = 1;
    cout<<"Enter the Base:: "<<endl;
    cin>>n;
    cout<<"Enter the Power:: "<<endl;
    cin>>p;

    for(int i = 0; i < p; i++)
    {
        pow = pow*n;
    }
    cout<<"The answer of base"<<n<<" to the power of "<<p<<" is "<<pow<<endl;
    return 0;
}