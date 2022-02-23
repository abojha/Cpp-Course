#include<iostream>
using namespace std;

int main()
{
    int n,x,sum = 0;
    float avg;

    cout<<"How many Numbers You want to Calculate\n";
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cout<<"Enter "<<i+1<<" Number from "<<n<<"\n";
        cin>>x;
        sum+=x;
    }    
    avg = (float)sum/float(n);

    cout<<"The sum of Given Numbers are "<<sum<<endl;
    cout<<"The average of Given Numbers are "<<avg<<endl;
    
    return 0;
}