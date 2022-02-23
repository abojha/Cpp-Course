#include<iostream>
using namespace std;

class M
{
    protected:
    int m;
    public:
        void get_data_m();
};

class N
{
    protected:
    int n;
    public:
        void get_data_n();
};

class p : public M, public N
{
    public:
        void show_data();
};

void M ::get_data_m()
{
    cout<<"Enter the value of m\n";
    cin>>m;
}
void N :: get_data_n()
{
    cout<<"Enter the value of n\n";
    cin>>n;
}

void p :: show_data()
{
    get_data_m();
    get_data_n();
    cout<<" M :: "<<m<<endl;
    cout<<" N :: "<<n<<endl;
}

int main()
{
    p t;
    t.show_data();
    
    return 0;
}