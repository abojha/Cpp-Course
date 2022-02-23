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

    cout<<"\nEntered the Position where you want to delete an element\n";
    cin>>pos;

    for(int i = pos; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;
    cout<<"\nAfter Deletion\n";
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

 
    return 0;
}