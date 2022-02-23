#include<iostream>
using namespace std;
inline int  product(int a, int b) // inline function
{
    return a*b;
}
float moneyreceoved(int money, float factor = 1.04) // default Arguements
{
    return money * factor;
}
int main()
{
   // int a, b;
  //cout<<"Enter the values of a and b"<<endl;
  //cin>>a>>b;
  //cout<<"The product of a and b is "<<product(a,b)<<endl;
  //cout<<"The product of a and b is "<<product(a,b)<<endl;
  //cout<<"The product of a and b is "<<product(a,b)<<endl;
  //cout<<"The product of a and b is "<<product(a,b)<<endl;
  //cout<<"The product of a and b is "<<product(a,b)<<endl;
  //cout<<"The product of a and b is "<<product(a,b)<<endl;
  //cout<<"The product of a and b is "<<product(a,b)<<endl;
  //cout<<"The product of a and b is "<<product(a,b)<<endl;
  //cout<<"The product of a and b is "<<product(a,b)<<endl;
  //cout<<"The product of a and b is "<<product(a,b)<<endl;
  //cout<<"The product of a and b is "<<product(a,b)<<endl;
  //cout<<"The product of a and b is "<<product(a,b)<<endl;
  //cout<<"The product of a and b is "<<product(a,b)<<endl;

    // Default Argument Example -->

  // int money = 100000;
  // cout<<"if you have "<< money<<" Rs. then , you will get Rs. "<<moneyreceoved(money)<<endl;
  // cout<<" ( For VIP) if you have "<< money<<" Rs. then , you will get Rs. "<<moneyreceoved(money,1.1)<<endl;


  //Constant Arguement Example -> Those Argeuement in which we do not want any type of change during compilation
  // so we use the "const" befroe datatype.


    return 0;
}