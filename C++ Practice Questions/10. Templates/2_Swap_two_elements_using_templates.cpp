#include<iostream>
using namespace std;

template<typename T>

void Swap(T &a, T &b )
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{                
    int a, b;
    float c, d;
    char e, f;

    cout<<"Enter two Integers\n";
    cin>>a>>b;
    cout<<"Enter two Floats\n";
    cin>>c>>d;
    cout<<"Enter two characters\n";
    cin>>e>>f;

    cout<<"\nBefore Swapping\n\n";
    cout<<" Integers "<<endl;
    cout<<"a = "<<a<<"\t"<<"b = "<<b<<endl;
    cout<<" Float "<<endl;
    cout<<"c = "<<c<<"\t"<<"d = "<<d<<endl;
    cout<<" Characters "<<endl;
    cout<<"e = "<<e<<"\t"<<"f = "<<f<<endl;

    Swap(a,b);
    Swap(c,d);
    Swap(e,f);
     cout<<"\nAfter Swapping\n\n";
    cout<<" Integers "<<endl;
    cout<<"a = "<<a<<"\t"<<"b = "<<b<<endl;
    cout<<" Float "<<endl;
    cout<<"c = "<<c<<"\t"<<"d = "<<d<<endl;
    cout<<" Characters "<<endl;
    cout<<"e = "<<e<<"\t"<<"f = "<<f<<endl;
    
    return 0;
}