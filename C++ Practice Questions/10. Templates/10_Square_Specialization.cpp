#include<iostream>
using namespace std;

template<class T>
T square(T data)
{
    T result;
    result = data * data;
    return result;
}

template<>
string square(string tu)
{
    return (tu + tu);
}
int main()
{
    int i, ii;
    float f, ff;
    double d, dd;
    string s("abhay"), ss;

    cout<<"Enter the integer\n";
    cin>>i;

    cout<<"Enter the float\n";
    cin>>f;

    cout<<"Enter the double\n";
    cin>>d;

    ii = square<int> (i);
    ff = square<float> (f);
    dd = square<double> (d);
    ss = square<string> (s);

    cout<<i << " : "<<ii<<endl;
    cout<<f << " : "<<ff<<endl;
    cout<<d << " : "<<dd<<endl;
    cout<<s << " : "<<ss<<endl;

    return 0;
}