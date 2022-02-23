#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x,n,result;
    cout<<"Enter the value of x:\n";
    cin>>x;
    cout<<"Enter the value of power:\n";
    cin>>n;
    result = pow(x,n);

    cout<<"The Result of "<<x<<"^"<<n<<" is "<<result<<endl;


    return 0;
}