#include<iostream>
using namespace std;

bool check_prime(int n)
{
    bool is_prime = true;
    for(int i = 2; i <= n/2; i++)
    {
        if(n%i==0)
        {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}
void print_prime(int f, int l)
{
    for(int i = ++f; i < l; i++)
    {
        if(check_prime(i))
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int f,l;
    cout<<"Enter the first number of interval\n";
    cin>>f;
    cout<<"Enter the last number of interval\n";
    cin>>l;
    print_prime(f,l);
    return 0;
}