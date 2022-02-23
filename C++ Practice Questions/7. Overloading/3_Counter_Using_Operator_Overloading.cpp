#include<iostream>
using namespace std;

class Counter
{
    int count;
    public:
        void get_data(int a)
        {
            count = a;
        }
        void put_data()
        {
            cout<<"Count = "<<count<<endl;
        }
        Counter operator++()
        {
            count++;
        }
        Counter operator++(int x)
        {
            count++;
        }
};
int main()
{
    Counter a;
    a.get_data(10);

    a.put_data();
    ++a;
    a.put_data();
    a++;
    a.put_data();
    return 0;
}