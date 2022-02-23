// ***************** Call by Value and Call by Reference ****************************
#include<iostream>
using namespace std;

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

}
void swapbyReference(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}
void swapbyReferenceVar(int &u, int  &v)
{
    int temp;
    temp = u;
    u = v;
     v = temp;

}
int main()
{
    int x = 4,y= 5;
    cout<<"The Valus of x is "<<x<<" and the value of y is "<<y<<endl;
    //swap(x,y); // swap(x,y); this will not swap the function
    
    swapbyReference(&x, &y); // this will swap the value by using reference pointer

    //swapbyReferenceVar(x,y); //This will swap the value by using reference variable/value.
    cout<<"The Valus of x is "<<x<<" and the value of y is "<<y <<endl;
    return 0;
}