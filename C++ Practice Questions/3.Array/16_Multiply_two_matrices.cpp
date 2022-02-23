#include<iostream>
using namespace std;

int main()
{
    int mat1[3][3], mat2[3][3], mat[3][3];
    
    
    cout<<"Enter the element for mat 1"<<endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter the element for mat 2"<<endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin>>mat2[i][j];
        }
    }
    cout<<"Enter the element for mat 1"<<endl;
    for(int i = 0; i < 3; i++)
    {
        
        for(int j = 0; j < 3; j++)
        {
            int sum = 0;
            for(int k = 0; k < 3; k++)
            {
                sum += mat1[i][k] * mat2[k][j];
            }
            mat[i][j] = sum;
        }

    }
    cout<<"Matrix 1"<<endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
           cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matrix 2"<<endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
           cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matrix 3"<<endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
           cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}