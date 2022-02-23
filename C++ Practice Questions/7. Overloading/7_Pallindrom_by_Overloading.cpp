#include<iostream>
#include<string.h>
using namespace std;

class Pallindrome
{
   public:
     void pal(int n);
     void pal(char c[]);
};

void Pallindrome ::pal(int n)
{
    int n1,rev = 0, a;
    n1 = n;

    while(n > 0)
    {
        a = n%10;
        rev = rev*10;
        rev = rev + a;
        n = n/10;
    }
    if(rev == n1)
    {
        cout<<n1<<" is Pallindrome\n";
    }
    else
    {
        cout<<n1<<" is not Pallindrome\n";
    }
}

void Pallindrome :: pal(char c[])
{
    int len = strlen(c);
    int j = len-1;
    int i = 0;
    char b[len];
    while(j >= 0)
    {
        b[i] = c[j];
        i++;
        j--;
    }
    // b[i] = '\0';
    if(strcmp(b,c) == 0)
    {
        cout<<c<<" is Pallindrome\n";
    }
    else{
        cout<<c<<" is not Pallindrome\n";
    }
}
int main()
{
    Pallindrome a;

    a.pal(2332);
    a.pal("aba");
    return 0;
}