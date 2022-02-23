#include<iostream>
using namespace std;

void cube(int a)
{
    cout<<a*a*a;
}
int main()
{
    int num;
    cout<<"Enter the number of which you want cube\n";
    cin>>num;

    cube(num);
    return 0;
}