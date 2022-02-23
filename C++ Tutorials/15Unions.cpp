#include<iostream>
using namespace std;
union money
{
    int rice;
    char car;
    float pounds;
};
int main()
{
    union money m1;
    m1.rice = 34;
    m1.car = 'c';

   
    cout<<"the value is "<<m1.car<<endl;
     cout<<"the value is "<<m1.rice<<endl;
    
    return 0;
}