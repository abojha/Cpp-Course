#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter the character:\n";
    cin>>a;

    if(a>=65 && a<=90)
    {
        cout<<a<<" is UPPERCASE Character:\n";
    }
    else if(a>=97 && a<= 122)
    {
        cout<<a<<" is LOWERCASE Character:\n";
    }
    else if(a>=48 && a<=57)
    {
        cout<<a<<" is DIGIT"<<endl;
    }
    else
    {
        cout<<a<<" is a SPECIAL Character:\n";
    }
    return 0;
}