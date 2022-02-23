#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int i=0;
    int j=0;
    char a[20],a2[20];
    gets(a);

    while(a[i] != '\0')
    i++;

    while(i>0)
    {
        a2[j] = a[--i];
        ++j;
    }
    a2[j] = '\0';

    for(i = 0; a2[i]!='\0'; i++)
    {
        if(a2[i+1] == ' ' || a2[i+1] == '\0')
        {
            for(j = i; j >=0 && a2[j] != ' '; j--)
            {
                cout<<a2[j];
            }
            cout<<" ";
        }
    }
   
    return 0;
}