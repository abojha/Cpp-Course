#include<bits/stdc++.h>
using namespace std;


void prinvec(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
}
int main()
{

////////////////////////////// All About Pairs ///////////////////////////////
    // //declaration of pair
    // pair<int, string> p;

    // //Insert values in pair
    // // p = make_pair(2, "abc");
    // // or
    // p = {2, "abc"};

    // // to print both values of pair
    // cout<< p.first << " " <<  p.second << endl;

    // // can copy values from another pair
    // pair<int, string> p1 = p;
    // cout << p1.first << " " << p1.second << endl;

    // // refrence same as other variable
    // pair<int, string> &p2 = p1;
    // p2.first = 5;
    // cout << p1.first << " " << p1.second << endl;

    // // Use of array
    // int a[] = {1, 2, 3};
    // int b[] = {2, 3, 4};

    // // Use of arrays
    // pair<int, int> p_array[3];
    // p_array[0] = {1, 2};
    // p_array[1] = {2, 3};
    // p_array[2] = {3, 4};

    // for(int i = 0; i < 3; i++)
    // {
    //     cout << p_array[i].first << " " << p_array[i].second << endl;
    // }

    // // get input from user
    // cin>>p.first;
    // cout<<p.first;


//////////////////////////////////// Vectors /////////////////////////////////////////
    //declaration of vector
    // vector<int> v;
    // int n;
    // cin >> n;

    // // Input of vector
    // for(int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // prinvec(v);
    

    // vector of n size
    // vector<int> v(size, size covered by that input)
    vector<int> v(10, 3);
    v.push_back(7);  // O(1)
    prinvec(v);

    // To remove the last element from vector
    v.pop_back();  // O(1)
    prinvec(v);

    vector<int> v2 = v;   // O(n)
    v2.push_back(6);
    prinvec(v2);


    return 0;
}