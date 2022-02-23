#include<iostream>
using namespace std;

int main()
{
    int days;
    int Years, Months;
    int weeks;
    cout<<"Enter the days to Conver:\n";
    cin>>days;
     

    //years = quotient, days = dividend, 365 = divisor, remainder

    // divident = quotient * divisor + remainder
    // days = years * 365 + remainder
    // days - years*365 = reamainder
    Years = days/365;
    // days = days%365;
    days = (days - Years * 365);
    Months = days/30;
    days = days%30;
    weeks = days/7;
    days = (days - weeks*7);

    cout<<"Years: "<<Years<<endl;
    cout<<"Months: "<<Months<<endl;
    cout<<"Weeks: "<<weeks<<endl;
    cout<<"days: "<<days<<endl;
    return 0;
}

/* 
    1 saal = 365
    4 months = 120
    weeks = 14
    days = 1

*/