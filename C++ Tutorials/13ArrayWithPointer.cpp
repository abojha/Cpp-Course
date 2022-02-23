#include<iostream>
using namespace std;

int main()
{
    int marks[4] = { 99,13,48,70};
    int *ptr = marks;

     for(int i = 0; i < 4; i++)
    {
        cout<<"The value of "<<i<<" is "<<(ptr+i)<<endl;    
        // pointer Arithmatic
        // address new = address current + i * sizeof(datatype)
    }

    for(int i = 0; i < 4; i++)
    {
        cout<<"The value of "<<i<<" is "<<*(ptr+i)<<endl;   
         // pointer Arithmatic
        // address new = address current + i * sizeof(datatype)
    }
    return 0;
}