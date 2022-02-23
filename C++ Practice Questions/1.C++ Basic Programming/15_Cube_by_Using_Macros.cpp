#include<iostream>
using namespace std;
#define CUBE(x) (x*x*x)

int main()
{
    int n;
    cout<<"Enter the number:\n";
    cin>>n;

    cout<<"The Cube of "<<n<<" is "<<CUBE(n)<<endl;
    
    return 0;
}