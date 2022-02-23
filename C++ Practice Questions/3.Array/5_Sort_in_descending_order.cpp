#include<iostream>
using namespace std;

int main()
{
    int size = 5;
    int array[size];
    int temp = 0;

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

    
    for(int  i = 0 ; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(array[i]<array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
     cout<<"Descending Order \n";
    for(int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}