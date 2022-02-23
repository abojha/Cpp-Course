#include<iostream>
using namespace std;

class factorial
{
    int n,f = 1;
    public:
    void get_data();
    void cal();
    void display();
};
void factorial :: get_data()
{
    cout<<"Enter the number :: ";
    cin>>n;
}
void factorial :: cal()
{
    int temp;
    temp = n;
    if(temp == 0 || temp == 1)
    return;
    else
    {
        while(temp>0)
        {
            f*=temp;
            temp--;
        }
    }
}
void factorial :: display()
{
    cout<<"The factorial of [ "<<n<<" ] is [ "<<f<<" ]"<<endl;
}
int main()
{
    factorial res;
    res.get_data();
    res.cal();
    res.display();
    return 0;
}
