#include<iostream>
using namespace std;

int main()
{
    char str[20];
    gets(str);
    int i = 0;
    int j = 0;
    cout<<str<<endl;
    for(i = 0; str[i] != '\0'; i++)
    {
        while(!((str[i]>= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'B') || str[i] == '\0'))
        {
            for(j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j+1];
            }
            str[j] = '\0';
        }
    }
    cout<<str<<endl;
    return 0;

}