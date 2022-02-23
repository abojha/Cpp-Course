// *********** Recursion and Recursive Function *************************
#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
int factorial(int n)
{
   if(n<=1)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    // Factorial of number:
    //6! = 6*5*4*3*2*1 = 720
    //0! = 1 by definition
    // 1! = 1 by defination
    int a;
    cin>>a;
    cout<<"The term at fibonacci sequence at poition of "<<a<<" is "<<fib(a)<<endl;

    return 0;
}