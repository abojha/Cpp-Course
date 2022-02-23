#include<iostream>
using namespace std;

int main()
{
    char c[50];
    cout<<"Enter any String\n";
    cin>>c;
    int i = 0, count = 0;
    while(c[i]!='\0')
    {
        count++;
        i++;
    }
    cout<<"The length of string is "<<count<<endl;
    return 0;
}