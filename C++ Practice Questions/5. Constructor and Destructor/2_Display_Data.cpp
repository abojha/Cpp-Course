#include<iostream>
using namespace std;

class date
{
    int d,m,y;
    public:
        void get_data();
        void print_data();
};
void date :: get_data()
{
    cout<<"Enter the Year (in YYYY)\n";
    cin>>y;
    cout<<"Enter the month (in MM)\n";
    cin>>m;
    cout<<"Enter the day (in dd)\n";
    cin>>d;
}
void date :: print_data()
{
    cout<<"Today is :: "<<d<<"/"<<m<<"/"<<y<<endl;
}
int main()
{
    date t;
    t.get_data();
    t.print_data();
    return 0;
}