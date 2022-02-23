#include<iostream>
using namespace std;

int main()
{
    char ch[100];
    gets(ch);
    int v,c,d,w;
    v = c = d = w = 0;

    for(int i = 0; ch[i] !='\0'; i++)
    {
        if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
        v++;
        else if(ch[i]>='a' && ch[i]<='z')
        c++;
        else if(ch[i]>='0' && ch[i]<='9')
        d++;
        else if(ch[i] == ' ')
        w++;
    }
    cout << "Vowels - "<<v<<endl;
    cout << "Consonants - "<<c<<endl;
    cout << "Digits - "<<d<<endl;
    cout << "Whitespace - "<<w<<endl;
    return 0;
}