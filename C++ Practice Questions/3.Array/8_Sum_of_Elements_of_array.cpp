#include<iostream>
using namespace std;
#define size 5
//Recursive approach
int sum_of_arra(int a[], int n)
{
    int sum = 0;
    if(n < 0)
    {
        return sum;
    }
    sum = a[n] + sum_of_arra(a,n-1);
    
}
int main()
{
    int arr[size];
    int sum = 0;
    cout<<"Enter the elements of array\n";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    // Iterative approach
    // for(int i = 0; i < size; i++)
    // {
    //     sum+=arr[i];
    // }
    // cout<<"The sum of all the elements is :: "<<sum<<endl;

    cout<<"Your Stored data is \n";
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"The sum of all elements of array is "<<sum_of_arra(arr,size);
    return 0;
}