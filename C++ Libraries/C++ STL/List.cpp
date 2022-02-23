#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main()
{
    list<int> list1 = {2,2,5,7,2,1};
    list<int> list2 = {12,35,67,7};

   
    list1.sort(); 
    list1.unique();
    for(auto &ele : list1)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
   
    
    return 0;
}