#include<iostream>
using namespace std;

int main()
{
    // What is a Pointer?
    // Pointer a Datatype which holds the address of other datatype.

    int a = 3;
    int *b = &a; // ' & '  ( address of ) Operator 
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<*b<<endl;

    // ' * ' ( Value at ) dereference operator.
    cout<<"The value at address  b is "<<*b;

    // pointer to pointer
    int **c = &b;
    
    cout<<"The Address of b is "<<&b<<endl;
    cout<<"The Address of b is "<<c<<endl;
    cout<<"The Value of b is "<<*c<<endl;
    cout<<"The Value of b is "<<**c<<endl;


    return 0;
}