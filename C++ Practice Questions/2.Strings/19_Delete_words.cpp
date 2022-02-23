#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[20];
    gets(str);
    char str_mat[20][20];

    char word[20];
    cout<<"Enter the word which you want to delete\n";

    gets(word);
    int len = strlen(str);
    int j = 0;
    int i = 0;
    int k = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            str_mat[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            str_mat[k][j] = str[i];
            j++;
        }
    }
    str_mat[k][j] = '\0';
    for(int i = 0; i < k+1; i++)
    {
        if(strcmp(str_mat[i],word)==0)
        {
            for(j = i; j < k+1; j++)
            {
                strcpy(str_mat[j], str_mat[j+1]);
                k--;
            }
        }
    }
    for(int i = 0; i < k+1; i++)
    {
        cout<<str_mat[i]<<" ";
    }
    return 0;
}