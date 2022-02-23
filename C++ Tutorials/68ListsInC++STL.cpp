#include<iostream>
#include<list>

using namespace std;
void display(list<int> &lst)
{
    list<int> :: iterator i;
    for(i = lst.begin(); i!=lst.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

}
int main()
{
    list<int> list1; // list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<< *iter<<" ";

    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    display(list1);

                       //REMOVING ELEMENTS FROM LISTS.
    //list1.pop_back();
    //list1.pop_front();
    //list1.remove(12);

                        //SORTING THE LIST
    // list1.sort();
    // display(list1);

                       //REVERSING THE LIST
    list1.reverse();
    display(list1);

    list<int> list2(3); // Empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 45;
    iter++;
    *iter = 45;
    iter++;
    *iter = 45;
    iter++;
    display(list2);

                        //SORTING AND MERGING THE LIST
    // list1.sort();
    // list2.sort();
    // list1.merge(list2);
    // cout<<"list1 after merging"<<endl;
    // display(list1);


   
    return 0;
}

