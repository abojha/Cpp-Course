#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    
    for(int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }

    cout<<"Stored data is \n";
    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i < 5; i++)
    {
        for(int j = i+1; j < 5; j++)
        {
            if(arr[i] == arr[j])
            {
                cout<<arr[j]<<" ";
            }
        }
    }
    return 0;
}