#include<iostream>
using namespace std;

class time
{
    int hr, min, sec;
    public:
        void get_data();
        void add_time(time &, time &);
        void print();
};
void time :: get_data()
{
    cout<<"Hour :: ";
    cin>>hr;
    cout<<"Minute :: ";
    cin>>min;
    cout<<"Second :: ";
    cin>>sec;

}
void time :: add_time(time &t1, time &t2)
{
    
    sec = t1.sec + t2.sec;
    min = sec/60;
    sec = sec%60;

    min = min + t1.min + t2.min;
    hr = min/60;
    min = min%60;

    hr = hr + t1.hr + t2.hr;
}
void time :: print()
{
    cout<<endl<<hr<<":"<<min<<":"<<sec<<endl;
}
int main()
{
    time t1,t2,t3;
    t1.get_data();
    t2.get_data();
    t3.add_time(t1,t2);

    t1.print();
    t2.print();
    t3.print();
    return 0;
}