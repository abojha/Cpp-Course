#include<iostream>
using namespace std;

void swap(int &a, int &b);
void swap(float &a, float &b);
void swap(char &a, char &b);
int main()
{
    int ix, iy;
    float fx, fy;
    char cx, cy;

    cout<<"Enter the first Integer\n";
    cin>>ix;
    cout<<"Enter the second Integer\n";
    cin>>iy;
    cout<<"Enter the first float\n";
    cin>>fx;
    cout<<"Enter the second float\n";
    cin>>fy;
    cout<<"Enter the first character\n";
    cin>>cx;
    cout<<"Enter the second character\n";
    cin>>cy;

    cout<<"Before Swapping\n";
    cout<<"Integer :: "<<endl;
    cout<<"ix = "<<ix<<" iy = "<<iy<<endl;
    cout<<"Float :: "<<endl;
    cout<<"fx = "<<fx<<" fy = "<<fy<<endl;
    cout<<"Character :: "<<endl;
    cout<<"cx = "<<cx<<" cy = "<<cy<<endl;

    swap(ix,iy);
    swap(fx,fy);
    swap(cx,cy);

    cout<<"After Swapping\n";
    cout<<"Integer :: "<<endl;
    cout<<"ix = "<<ix<<" iy = "<<iy<<endl;
    cout<<"Float :: "<<endl;
    cout<<"fx = "<<fx<<" fy = "<<fy<<endl;
    cout<<"Character :: "<<endl;
    cout<<"cx = "<<cx<<" cy = "<<cy<<endl;

    return 0;
}
void swap(int &a, int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}
void swap(float &a, float &b)
{
    float temp;

    temp = a;
    a = b;
    b = temp;
}
void swap(char &a, char &b)
{
    char temp;

    temp = a;
    a = b;
    b = temp;
}