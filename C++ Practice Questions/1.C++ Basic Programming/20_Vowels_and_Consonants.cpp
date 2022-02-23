#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout<<"Enter the Alphabet\n";
    cin>>ch;

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"Given Character [ "<<ch<<" ] is a Lowercase Vowel"<<endl;
    }
    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        cout<<"Given Character [ "<<ch<<" ] is a Uppercase Vowel"<<endl;
    }
    else
    {
        cout<<"Given Character [ "<<ch<<" ] is Consonant"<<endl;
    }
    return 0;
}




