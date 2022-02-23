#include<iostream>
using namespace std;
void gcd(int m, int n)
{
    int a,b;
    a = m;
    b = n;
    while(a!=b)
    {
        if(a>b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
    }
    cout<<"The GCD of "<<m<<" "<<n<<" is "<<a<<endl;
}
int main()
{
    int n,m;
    cout<<"Enter the two Number for HCF"<<endl;
    cin>>m>>n;

    gcd(m,n);
    return 0;
}