#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int num;
    double ans;
    cout<<"Enter the Number\n";
    cin>>num;
    

    //  ans = (double)pow((double)num,(double)1/(double)3);
    ans = cbrt((double)num);
  
    cout<<ans<<endl;
    return 0;
}