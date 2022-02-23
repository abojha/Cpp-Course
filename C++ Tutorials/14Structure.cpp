#include<iostream>
using namespace std;
struct employee
{
    /* data */
    int eid;
    char favChar;
    float Salary;
};

int main()
{
    struct employee abhay;
    abhay.eid = 1;
    abhay.favChar = 'c';
    abhay.Salary = 1250000000;

    cout<<"The value is " <<abhay.eid<<endl;
    cout<<"The value is " <<abhay.favChar<<endl;
    cout<<"The value is " <<abhay.Salary<<endl;
    
    return 0;
}