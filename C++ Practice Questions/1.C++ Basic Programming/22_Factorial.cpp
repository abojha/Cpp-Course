#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    return (n*fact(n-1));
}
int main()
{
    // *** Iterative Approach ***
    // int n,fact=1;
    // cout<<"Enter the Number\n";
    // cin>>n;

    // for(int i = 1; i <= n; i++)
    // {
    //     fact = fact*i;
    // }
    // cout<<"The Factorial of [ "<<n<<" ] is "<<fact<<endl;

    // *** Recursive Approach
    int n;
    cout<<"Enter the Number\n";
    cin>>n;
   
    cout<<"The Factorial of [ "<<n<<" ] is "<<fact(n)<<endl;
    return 0;
}