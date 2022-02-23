#include<iostream>
using namespace std;

int main()
{
    char str[20];
    gets(str);

    int i = 0;
    int j = 0;
    int flag = 0;

    while(str[j] != '\0')
    j++;

    while(i<j)
    {
        j--;
        if(str[i] != str[j])
        {
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 0)
    {
        cout<<"String is Pallindrome\n";
    }
    else{
        cout<<"String is not Pallindrome\n";
    }
    return 0;
}