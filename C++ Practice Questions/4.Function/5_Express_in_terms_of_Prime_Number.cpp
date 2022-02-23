#include<iostream>
using namespace std;

bool check_prime(int n)
{
    bool isprime = true;
    for(int i = 2; i <= n/2; i++)
    {
        if(n%i == 0)
        {
            isprime = false;
            break;
        }
    }
    return isprime;
}
int main()
{
    int n;
    cin>>n;
    for(int i = 2; i <= n/2; i++)
    {
        if(check_prime(i))
        {
            if(check_prime(n-i))
            {
                cout<<n<<" = "<<i<<" + "<<n-i<<endl;
            }
        }
    }
    return 0;
}