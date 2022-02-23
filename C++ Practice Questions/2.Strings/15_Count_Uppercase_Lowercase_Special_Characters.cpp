#include<iostream>
using namespace std;

int main()
{
    char ch[100];
    gets(ch);
    int countU = 0, countL = 0, countS =  0;
  

    for(int i = 0; ch[i] !='\0'; i++)
    {
        if((ch[i]>= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z'))
        {
            if(ch[i]>= 'A' && ch[i] <= 'Z')
                countU++;
            else
                countL++;
        }
        else
        {
            countS++;
        }
    }
    cout << "UpperCase - "<<countU<<endl;
    cout << "LowerCase - "<<countL<<endl;
    cout << "Special Characters - "<<countS<<endl;
  
    return 0;
}