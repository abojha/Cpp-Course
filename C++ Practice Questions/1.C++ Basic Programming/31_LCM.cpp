#include<iostream>
using namespace std;
void lcm(int m, int n)
{
    int a,b;
    a = m;
    b = n;
    while(a!=b)
    {
        if(a>b)
        {
            b = b + n;
        }
        else
        {
            a = a+m;
        }
    }
    cout<<"The GCD of "<<m<<" "<<n<<" is "<<a<<endl;
}
int main()
{
    int n,m;
    cout<<"Enter the two Number for HCF"<<endl;
    cin>>m>>n;

    lcm(m,n);
    return 0;
}