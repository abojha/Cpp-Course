#include<iostream>
using namespace std;
#define size 10

int main()
{
    int arr[size],even[size],odd[size];
    int even_i = 0, odd_i = 0;

    for(int i = 0; i < size; i++)
    {
        cout<<"Enter the element no. "<<i+1<<" ";
        cin>>arr[i];
    }

    for(int i = 0; i < size; i++)
    {
        if(arr[i]%2 == 0)
        {
            even[even_i] = arr[i];
            even_i++;
        }
        else
        {
            odd[odd_i] = arr[i];
            odd_i++;
        }
    }
    cout<<"Your even integers are\n";
    for(int i = 0; i < even_i; i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<"\nYour odd integers are\n";
    for(int i = 0; i < odd_i; i++)
    {
        cout<<odd[i]<<" ";
    }
    return 0;
}