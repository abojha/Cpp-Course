#include<iostream>
#include<cstring>
using namespace std;

char * Remove_space(char *a)
{
    int len ;
    len = strlen(a);
    for(int i = 0; i<len; i++)
    {
        if(a[i] == ' ')
        {
            for(int j = i; j < len; j++)
            {
                a[j] = a[j+1];
            }
            len--;
            i--;
        }
    }
    return a;
}
int main()
{
    char str[20], str1[30];

    gets(str);

    cout<<Remove_space(str);
}