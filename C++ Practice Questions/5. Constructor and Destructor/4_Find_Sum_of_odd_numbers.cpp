#include<iostream>
using namespace std;

class sum_odd
{
    int n;
    int odd_s=0;
    public:
    sum_odd(int a)
    {
        n = a;
    }
    void  find_sum();
    void print_sum();
};
void sum_odd :: find_sum()
{
    for(int i = 1; i <= n; i++)
    {
        if(i%2!=0)
        {
            odd_s+=i;
        }
    }
}
void sum_odd :: print_sum()
{
    cout<<"The sum of odd number from 1 to "<<n<<" is "<<odd_s<<endl;
}
int main()
{
    sum_odd a(5);
    a.find_sum();
    a.print_sum();
    return 0;
}