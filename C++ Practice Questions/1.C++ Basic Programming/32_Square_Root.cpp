#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int num;
    double ans;
    cout<<"Enter the Number\n";
    cin>>num;
    

    // ans = pow((double)num,(double)0.5);
   ans = sqrt((double)num);
    cout<<ans<<endl;
    return 0;
}