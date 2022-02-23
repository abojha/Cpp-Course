#include<iostream>
#define PI 3.14
using namespace std;

class measure
{
    public:
      
        void shape(int r);
        void shape(float l, float b);
        void shape(long l);
        void shape(float l);
        void shape(long r, long h);
        void shape(int r, float h);
};
void measure :: shape(int r)
    {
        cout<<"The radius of circle is :: "<<r<<endl;
        cout<<"The area of circle :: "<<PI*r*r<<endl;
    }
void measure :: shape(long l, long b)
{
    cout<<"The length of rectangle is :: "<<l<<endl;
    cout<<"The bradth of rectangle is :: "<<b<<endl;
    cout<<"The area of rectangle is :: "<<l*b<<endl;
}
void measure :: shape(long l)
{
    cout<<"The length of side of square is :: "<<l<<endl;
    cout<<"The area of square is :: "<<l*l<<endl;
}

void measure :: shape(int r, float h)
{
    cout<<"The radius of cylinder is :: "<<r<<endl;
    cout<<"The height of cylinder is :: "<<h<<endl;
    cout<<"The area of cylinder is :: "<<PI*r*r*h<<endl;
}
void measure :: shape(float b, float h)
{
    cout<<"The base of triable is :: "<<b<<endl;
    cout<<"The height of triangle is :: "<<h<<endl;
    cout<<"The area of triangle is :: "<<(b*h)/2<<endl;
}

int main()
{
    measure r;
    int l,b;
    float f1, f2;
    long l1, l2;
    int i;

    cout<<"1. Circle "<<endl;
    cout<<"2. Rectangle "<<endl;
    cout<<"3. Triagle "<<endl;
    cout<<"4. Square "<<endl;
    cout<<"5. Cylinder "<<endl;
     cout<<"Enter the key :: ";
        cin>>i;

    switch (i)
    {
       
    case 1:
        cout<<"Enter the radius of circle :: "; cin>>l;
        r.shape(l);
        break;
    case 2:
        cout<<"Enter the Length of rectangle :: "; cin>>l1;
        cout<<"Enter the Breadth of rectangle :: "; cin>>l2;
        r.shape(l1,l2);
        break;
    case 3:
        cout<<"Enter the base of rectangle :: "; cin>>f1;
        cout<<"Enter the height of rectangle :: "; cin>>f2;
        r.shape(f1,f2);
        break;
    case 4:
        cout<<"Enter the side of square :: "; cin>>l1;
        r.shape(l1);
        break;
    case 5:
        cout<<"Enter the radius of cylinder :: "; cin>>l;
        cout<<"Enter the height of cylinder :: "; cin>>f1;
        r.shape(l,f1);
        break;
    
    default:
        cout<<"Enter the correction option from above\n";
        break;
    }
    return 0;
}