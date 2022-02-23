#include<iostream>
using namespace std;

class Reverse_number
{
    int n,rn=0;
    public:
        void get_data()
        {
            cout<<"Enter the number\n";
            cin>>n;
        }
        void reverse();
        void print();
};
void Reverse_number :: reverse()
{
    int temp;
    temp = n;

    while(temp!=0)
    {
        int c;
        c = temp%10;
        rn = rn*10 + c;
        temp = temp/10;
    }
}
void Reverse_number :: print()
{
    cout<<"The Original number is :: "<<n<<endl;
    cout<<"The Reverse of given number is :: "<<rn<<endl;
}
int main()
{
    Reverse_number tau;
    tau.get_data();
    tau.reverse();
    tau.print();
    return 0;
}