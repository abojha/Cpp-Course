#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,4> a = {1,2,3,4};

    int size = a.size();
    cout<<size<<endl;

    cout<<"Element at Index 2 "<<a.at(2)<<endl;
    cout<<"Empty or Not "<<a.empty()<<endl;
    cout<<"First element "<<a.front()<<endl;
    cout<<"Last element "<<a.back()<<endl;

    return 0;
}