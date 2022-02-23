#include<iostream>
using namespace std;

int main()
{
    int array[5];
    int size = 5;

    //New array is 
    int array2[5];
    int j = 0;


    for(int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    cout<<"Your array is \n";
    for(int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    cout<<"Reverse of array is \n";
    for(int i = size-1; i >= 0; i--)
    {
        cout<<array[i]<<" ";
    }
    for(int i = size-1; i >= 0; i--)
    {
        // cout<<array[i]<<" ";
        array2[j] = array[i];
        j++;
    }

    cout<<array2[0]<<endl;
    cout<<array[0]<<endl;
    return 0;
}