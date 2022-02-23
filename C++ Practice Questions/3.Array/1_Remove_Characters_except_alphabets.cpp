#include<iostream>
using namespace std;

int main()
{
    char st[20];
    gets(st);
    int i;
    int j;

    for( i = 0; st[i] != '\0'; i++)
    {
        if(!((st[i]>= 'a' && st[i]<='z') || (st[i]>='A' && st[i]<='Z') || st[i] == ' '))
        {
            for(j = i; st[j]!='\0'; j++)
            {
                st[j] = st[j+1];
            }
            st[j] = '\0';
            i--;
        }
    }
    cout<<st<<endl;
    return 0;
}