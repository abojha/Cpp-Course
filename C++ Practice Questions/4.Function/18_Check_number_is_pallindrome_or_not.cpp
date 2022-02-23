#include<iostream>
using namespace std;

int isPallindrome(int n)
{
    int temp;
    int r=0;
    temp = n;

    while(temp>0)
    {
        int c;
        c = temp%10;
        r = (r*10) + c;
        temp = temp/10;
    }

    if(r == n)
    {
        cout<<"The number [ "<<n<<" ] is Pallindrome number\n";
    }
    else
    {
        cout<<"The number [ "<<n<<" ] is not a Pallindrome number\n";
    }
}
int main()
{
    int n = 1231;

    isPallindrome(n);
    return 0;
}