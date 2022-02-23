#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float p,r,t,ci;

    cout<<"Enter the Principle"<<endl;
    cin>>p;
    cout<<"Enter the Rate:"<<endl;
    cin>>r;
    cout<<"Enter the time:"<<endl;
    cin>>t;

    ci = p * pow((1+r/100),t);

    cout<<"The compound Interest is : "<<ci<<endl;



    return 0;
}