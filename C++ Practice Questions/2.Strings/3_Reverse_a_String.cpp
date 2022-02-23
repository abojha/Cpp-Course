#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[20], rev[20];
    int len;
    int j = 0;
    cout<<"Enter the String\n";
    cin>>str;

    len = strlen(str);

    for(int i = len-1; i >= 0; i--)
    {
        rev[j] = str[i] ;
        j++;
    }
    rev[j] = '\0';

    cout<<str<<endl;
    cout<<rev<<endl;

    return 0;
}