#include<iostream>
using namespace std;

int main()
{
    int inches;
    int yards, feet;
    cout<<"Enter the Inches to Conver:\n";
    cin>>inches;
     
    yards = inches/432;
    inches = inches%432;
    feet = inches/12;
    inches = inches%12;

    cout<<"Yards: "<<yards<<endl;
    cout<<"Feet: "<<feet<<endl;
    cout<<"Inches: "<<inches<<endl;
    return 0;
}