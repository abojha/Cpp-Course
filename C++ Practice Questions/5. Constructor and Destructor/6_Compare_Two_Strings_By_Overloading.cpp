#include<iostream>
#include<string>

using namespace std;

class String
{
    string s;
    public:
        String()
        {
            cout<<"Enter the string\n";
            cin>>s;
        }
        int operator ==(String &v);
};
int String ::operator==(String &v)
{
    if(s == v.s)
    {
        return 1;
    }
    return 0;
}
int main()
{
    String t1, t2;

    if(t1 == t2)
    {
        cout<<"Both string are equal\n";
    }
    else  cout<<"Both string are not equal\n";
    return 0;
}