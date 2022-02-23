#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int *p = arr;
    int x;

    cout<<"Enter the element of array\n";
    for(int i = 0; i < 10; i++)
    {
        cin>>*(p+i);
    }
    for(int i = 0; i < 10; i++)
    {
        cout<<*(p+i);
    }
    return 0;
}