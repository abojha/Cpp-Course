#include<iostream>
#include<string.h>
using namespace std;

class String
{
    char a[20];
    public:
        void get_string()
        {
            cout<<"Enter the string\n";
            cin>>a;
        }
    int operator==(String &s)
    {
        if(!strcmp(a,s.a))
        {
            return 1;
        }
        return 0;
    }
};
int main()
{
    String a,b;
    a.get_string();
    b.get_string();

    if(a == b)
    {
        cout<<"Both strings are equal\n";
    }
    else
    {
        cout<<"Both strings are not equal\n";
    }
    return 0;
}