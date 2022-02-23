// Topic : Map in C++;


//Notes:
// 1. Syntax: map<T1, T2> obj; // where T1 is key type and T2 is value type
// 2. std::map is associative cotainer that store elements in key value combination where key should be unique, it overrides the previous value
// 3. It is implement using Self-Balance Binary Search Tree (AVL/RED BLACK TREE)
// 4. It store key value pair in sorted order on the basis of key (ascending/descending)
// 5. std::map is generally used in Dictionary type problem



#include<iostream>
#include<map>
#include<functional>
#include<vector>
using namespace std;

void print(map<int, string> &m)
{
    cout<<m.size()<<endl;
    for(auto &pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    // map<string, int  > Map;
    // Map["Abhay"] = 12345;
    // Map["Shivam"] = 54321;
    // Map.insert(make_pair("Anjali", 101010));

    // //Loop through map
    // for(auto &eli : Map)
    // {
    //     cout<< eli.first<<" "<<eli.second<<endl;
    // }

    // //Access using [] operator
    // cout<<Map["Shivam"]<<endl;


    map<int, string> m;
    m[1] = "abc"; // O(log(n))
    m[5] = "cdc";
    m[3] = "acd";

    m.insert({4, "afg"});

    map<int, string> :: iterator it;
    // for(it = m.begin(); it!=m.end(); it++)
    // {
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    
    
    return 0;
}