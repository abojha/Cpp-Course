#include<iostream>
using namespace std;


int main()
{
    int size = 5;
    int arr[size];
    int pos;


    for(int i = 0; i < size; i++)
    {
        cout<<"Enter the element no. "<<i+1<<" ";
        cin>>arr[i];
    }
    cout<<"Stored data is\n";
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nEntered the Position where you want to Insert an element\n";
    cin>>pos;
    size = size + 1;
    for(int i = size-1; i >= pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = 34;
    cout<<"\nAfter Insertion\n";
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

 
    return 0;
}