#include<iostream>
using namespace std;

int recursive_search(int *arr, int n, int k) {
    if(n<0)
    {
        return -1;
    }
    if(k == arr[n-1])
    {
        return 1;
    }
    else {
        recursive_search(arr,n-1,k);
    }
}
int main()
{
    int array[5];
    for(int i = 0; i < 5; i++) 
    {
        cin>>array[i];
    }
    int result = recursive_search(array, 5, 2);
    if(result == 1) {
        cout<<"number is found in array\n";
    }
    else {
        cout<<"number is not found in array\n";
    }
    
    return 0;
}