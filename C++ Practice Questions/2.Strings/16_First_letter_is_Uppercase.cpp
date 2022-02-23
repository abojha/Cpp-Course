#include<iostream>
using namespace std;

int main()
{
    char str[20];
    gets(str);
    int flag = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            flag = 0;
        }
        else if(flag == 0)
        {
            if(str[i]>= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
            flag = 1;
        }
        else if(str[i]>= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    cout<<str<<endl;
    return 0;
}