#include<iostream>
#include<string.h>
using namespace std;

void reverse_using_recursion(char *s, int n)
{
    if(n<0)
    {
        return;
    }
    else
    {
        cout<<s[n-1];
        return reverse_using_recursion(s, n-1);
    }
}
int main()
{
    char str[] = "abhay ojha";
    int len = strlen(str);
    reverse_using_recursion(str,len);

    return 0;
}