#include<iostream>
using namespace std;

int main()
{
    char str[20],temp;
    gets(str);

    for(int i = 0; str[i] !=  '\0'; i++)
    {
        for(int j = 0; str[j] != '\0'; j++)
        {
            if(str[i]<str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    cout<<str<<endl;
    return 0;
}