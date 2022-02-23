#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a,b,c,determinant,x1,x2;
    cout<<"Enter Coefficient a ::";
    cin>>a;
    cout<<"Enter Coefficient b ::";
    cin>>b;
    cout<<"Enter Coefficient c ::";
    cin>>c;

    determinant = b*b - 4*a*c;
    if(determinant > 0)
    {
        cout<<"Roots are Real and Different"<<endl;

        x1 = (-b + sqrt(determinant))/(2*a);
        x2 = (-b - sqrt(determinant))/(2*a);
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }
    else if(determinant == 0)
    {
        cout<<"Roots are Real and Same"<<endl;
        x1 = (-b + sqrt(determinant))/(2*a);
        cout<<"x1 = x2 = "<<x1<<endl;
    }
    else
    {
        cout<<"Roots are Imaginary"<<endl;
        x1 = -b/(2*a);
        x2 = sqrt(-determinant)/(2*a);
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }
    return 0;
}