#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout<<"Size "<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"Size "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size "<<v.capacity()<<endl;
    cout<<"Element contained "<<v.size()<<endl;

    cout<<"Element at 2 Index "<<v.at(2)<<endl;

    cout<<"First Element "<<v.front()<<endl;
    cout<<"Last Element "<<v.back()<<endl;
    cout<<"Before Pop"<<endl;
    for(int i : v)
    {
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    cout<<"After pop"<<endl;
    for(int i : v)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size before clear "<<v.size()<<endl;
    v.clear();
    cout<<"Size after clear "<<v.size()<<endl;


    vector<int> a(5,1);
    for(int i : a)
    {
        cout<<i<<" ";
    }cout<<endl;
    vector<int> last(a);
    for(int i : last)
    {
        cout<<i<<" ";
    }
    

    return 0;
}