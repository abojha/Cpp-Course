#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    // string s1,s2,s3;
    // cin>>s1;
    // cin>>s2;

    // s3 = s1 + " " + s2;
    // cout<<s3;
    char ch1[20] = "tau";
    char ch2[20] = "ji";
    char ch[40];
    for(int i = 0; ch1[i]!='\0'; i++)
    {
        ch[i] = ch1[i];
    }
    int len = strlen(ch1);
    for(int i = 0; ch2[i] != '\0'; i++)
    {
        ch[len + i] = ch2[i];
    }
   for(int i = 0; ch[i] != '\0'; i++)
   {
       cout<<ch[i];
   }


   
    

    return 0;
}