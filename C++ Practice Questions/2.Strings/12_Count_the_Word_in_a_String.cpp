#include<iostream>
using namespace std;

int main()
{
    char str[20];
    int wc = 0;
    int flag = 0;
    gets(str);

    int i = 0;

    while(str[i] != 0)
    {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        flag = 0;

        else if(flag == 0)
        {
            flag = 1;
            wc++;
        }
        i++;
    }
    cout<<wc<<endl;
    return 0;
}