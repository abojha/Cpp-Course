#include<iostream>
using namespace std;

class Myarray
{
    int arr[10];
    int n;
    public:
        void create_an_array();
        void print_an_array();
        int smallest_element();
};
void Myarray :: create_an_array()
{
    int x;
    cout<<"Enter the size of array\n";
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter the "<<i+1<<" element"<<endl;
        cin>>x;
        arr[i] = x;
    }
}
void Myarray :: print_an_array()
{
    cout<<"Here is Your array\n";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
}
int Myarray :: smallest_element()
{
    int small = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(small > arr[i])
        {
            small = arr[i];
        }
    }
    return small;
}
int main()
{
    Myarray shopping;
    shopping.create_an_array();
    shopping.print_an_array();
    cout<<shopping.smallest_element();
    return 0;
}