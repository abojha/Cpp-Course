#include<iostream>
using namespace std;

template<class type>
type sum_of_array(type arr[], int len)
{
    type ret = 0;
    for(int i = 0; i < len; i++)
    {
        ret+=arr[i];
    }
    return ret;
}
int main()
{
    int arr[5];
    cout<<"Enter the array element\n";
    for(int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    cout<<sum_of_array(arr, 5)<<endl;

    float array[5];
    cout<<"Enter the array element\n";
    for(int i = 0; i < 5; i++)
    {
        cin>>array[i];
    }
    cout<<sum_of_array(array, 5)<<endl;
    return 0;
}