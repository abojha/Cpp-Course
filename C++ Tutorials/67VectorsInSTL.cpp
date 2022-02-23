#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v1)
{
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1; // zero length vector
    int size = 5;
    // cout<<"Enter the size of vector: ";
    // cin>>size;
    // int element;
    // for(int i = 0; i < size; i++)
    // {
    //     cout<<"Enter the element to add in this vector:\n";
    //     cin>>element;
    //     vec1.push_back(element);
    // }

    // display(vec1);
    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter + 1, 4, 500);
    // display(vec1);

    vector<char> vec2(4); // 4-element integer vector
    //vec2.push_back('5');
    //display(vec2);

    vector<char> vec3(vec2); // 4-element character vector from vec2
    //display(vec3);

    vector<int> vec4(6, 3); // 6-element vector of 3s.
    display(vec4);
    

    return 0;
}