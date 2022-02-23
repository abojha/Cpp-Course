#include<iostream>
#include<cstring>
using namespace std;

char * Remove_space(char *a)
{
    int len ;
    len = strlen(a);
    int count = 0;
    int flag = 1;
    for(int i = 0; i<len; i++)
    {
        if(a[i] == ' ')
        {
            count++;
            if(count > 1)
            flag = 0;
        }
        else if(flag == 0)
        {
            i = i - count;
            while(count != 1)
            {
                for(int j = i; j < len; j++)
                {
                    a[j] = a[j+1];
                }
                len--;
                count--;
            }
            flag = 1;
           count = 0;
        }
        
    }
    return a;
}
int main()
{
    char str[20];

    gets(str);

    cout<<Remove_space(str);
}