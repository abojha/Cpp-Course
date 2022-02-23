#include<iostream>
using namespace std;

int main()
{
    int a = 4,b = 5;
    cout<<"Operators in C++"<<endl;
     // Arithmatic Operators
    cout<<"Follwing are the Arithmatic Operators:"<<endl; 
    cout<<"The value of a+b is:"<<a+b<<endl;
    cout<<"The value of a-b is:"<<a-b<<endl;
    cout<<"The value of a*b is:"<<a*b<<endl;
    cout<<"The value of a/b is:"<<a/b<<endl;
    cout<<"The value of a%b is:"<<a%b<<endl;
    cout<<"The value of a++ is:"<<a++<<endl;
    cout<<"The value of a-- is:"<<a--<<endl;
    cout<<"The value of ++a is:"<<++a<<endl;
    cout<<"The value of --a is:"<<--a<<endl;
    cout<<endl;

    // Assignment Operators--> used to assign values of variables
    // int a =3,b=9;
    // char d = 'd';


    //Comparisoan Operators
    cout<<"Following are the Comparison Operators:\n";
    cout<<"The value of a==b:"<<(a==b)<<endl;
    cout<<"The value of a!=b:"<<(a!=b)<<endl;
    cout<<"The value of a<b:"<<(a<b)<<endl;
    cout<<"The value of a>b:"<<(a>b)<<endl;
    cout<<"The value of a<=b:"<<(a<=b)<<endl;
    cout<<"The value of a>=b:"<<(a>=b)<<endl;
    cout<<endl;


    //Logical Operators
    cout<<"Following are the Logical Operators:\n";

    cout<<"The value of Logical AND Operators((a==b)&&(a,b)):"<<((a==b)&&(a,b))<<endl;
    cout<<"The value of Logical OR Operators((a==b)||(a,b)):"<<((a==b)||(a,b))<<endl;
    cout<<"The value of Logical NOT Operators(!(a==b)):"<<(!(a==b))<<endl;
    
    
    
    

    return 0;
}