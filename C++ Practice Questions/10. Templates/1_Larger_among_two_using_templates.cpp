#include<iostream>
using namespace std;

template <class d>
d Large(d a, d b)
{
    return (a > b) ? a : b;
}
int main()
{
    int a, b;
    float c, d;
    char e, f;

    cout<<"Enter two Integers\n";
    cin>>a>>b;
    cout<<Large(a, b)<<" is Larger\n";

    cout<<"Enter two Floats\n";
    cin>>c>>d;
    cout<<Large(c, d)<<" is Larger\n";

    cout<<"Enter two characters\n";
    cin>>e>>f;
    cout<<Large(e, f)<<" is Larger\n";
    return 0;
}