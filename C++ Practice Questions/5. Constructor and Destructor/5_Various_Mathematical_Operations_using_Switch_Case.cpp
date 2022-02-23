#include<iostream>
using namespace std;

class Calculator
{
    int a,b;
    public:
        void get_data(int x, int y);
        void addition();
        void subtraction();
        void multiplication();
        void division();
};
void Calculator ::get_data(int x, int y)
{
    a = x;
    b = y;
}
void Calculator :: addition()
{
    cout<<a+b<<endl;
}
void Calculator :: subtraction()
{
    cout<<a-b<<endl;
}
void Calculator :: multiplication()
{
    cout<<a*b<<endl;
}
void Calculator :: division()
{
    cout<<a/b<<endl;
}

int main()
{
    Calculator s;
    int a;
    int b;
    int i;
    cout<<"Enter the number\n";
    cin>>a;
    cout<<"Enter 1 for addition, 2 for subtraction, 3 for multiplication,"
        <<"4 for division";
    cin>>i;
    cout<<"Enter another number\n";
    cin>>b;

    s.get_data(a,b);
    switch (i)
    {
    case 1:
        s.addition();
        break;
    case 2:
        s.subtraction();
        break;
    case 3:
        s.multiplication();
        break;
    case 4:
        s.division();
        break;                                             
    
    default:
        cout<<"Enter correct option\n";
        break;
    }
    return 0;
}