#include<iostream>
using namespace std;

int main()
{
    char str[20];
    int fr[20];
    int count = 0;
    int n;
    cout<<"Enter the size of string\n";
    cin>>n;
    cout<<"Enter the String\n";

    for(int i = 0; i < n; i++)
    {
        cin>>str[i];
        fr[i] = -1;
    }

    for(int i = 0;i<n; i++)
    {
        count = 1;
        for(int j = i+1; j<n; j++)
        {
            if(str[i] == str[j])
            {
                count++;
                fr[j] = 0;
            }

        }
        if(fr[i]!=0)
        {
            fr[i] = count;
            cout<<"The character "<<str[i]<<" occurs "<<fr[i]<<" times "<<endl;
        }
    }
   
    return 0;
}