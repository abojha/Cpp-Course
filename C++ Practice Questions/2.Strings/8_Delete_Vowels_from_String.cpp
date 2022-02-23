#include<iostream>
#include<string.h>
using namespace std;

int isVowels(char a)
{
    if(a == 'a' || a == 'e' || a == 'o' || a == 'i' || a == 'u' ||
     a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'O' )
     return 1;
     return 0;
}
int main()
{
    char ch[20];
    char t[20];
    gets(ch);
    int i;
    int j = 0;

    for(i = 0; ch[i] != '\0'; i++)
    {
        if(!isVowels(ch[i]))
        {
            t[j] = ch[i];
            j++;
        }
    }
    t[j] = '\0';
   
    strcpy(ch,t);
    cout<<ch<<endl;

    return 0;
}