#include<iostream>
using namespace std;
#define size 3
int main()
{
    int arr1[size][size];
    int arr2[size][size];
    int sum[size][size];

    cout<<"Enter the elements for 1st matrix\n";
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the elements for 2nd matrix\n";
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cin>>arr2[i][j];
        }
    }

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    cout<<"First Matrix\n";
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Second Matrix\n";
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Sum of Matrix\n";
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
           cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}