#include<iostream>
using namespace std;

int isPrime(int n)
{
    int count = 0;
    for(int i = 2; i < n/2; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count == 0)
    {
        cout<<n<<" is a Prime Number";
    }
    else
    {
        cout<<n<<" is not a Prime Number";
    }
}
int main()
{
    isPrime(9);
    return 0;
}