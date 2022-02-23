#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
// Volume of cuboid
int volume(int l, int b, int h)
{
    return (l*b*h);
}
//volume of cuboid
int volume(int a)
{
    return (a*a*a);
}
//Volume of cylinder
int volume(int r, int h)
{
    return (3.14 * r * h);
}

int main()
{
    cout<<"The volume of cylinder of radius 3 and  height 6 is "<<volume(3,6)<<endl;
    cout<<"The volume of cuboid  of 3,7 and 9 is "<<volume(3,7,9)<<endl;
    cout<<"The volume of cube of 3 is "<<volume(3)<<endl;
    
    return 0;
}