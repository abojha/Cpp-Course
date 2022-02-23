#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[20],str2[20];
    int len1, len2;
    int flag = 0;
    
    cout<<"Enter first string :: \n";
    cin>>str1;
    cout<<"Enter second string :: \n";
    cin>>str2;
    
    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1!=len2)
    {
        flag = 0;
    }
    else
    {
        for(int i = 0; str1[i]!='\0',str2[i]!='\0'; i++)
        {
            if(str1[i] == str2[i])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }
    cout<<len1<<len2<<endl;

    if(flag == 0)
    {
        cout<<"Strings are not equal\n";
    }
    else
    {
        cout<<"String are Equal\n";
    }

    return 0;
}