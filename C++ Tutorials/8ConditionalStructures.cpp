//********************************Conditonal Structure : if and else*****************************************
#include<iostream>
using namespace std;
main()
{
    int age;
    cout<<"Tell me your age:"<<endl;
    cin>>age;

    if(age<18 && age>0)
    {
        cout<<"You are not elligible to fill the admission form."<<endl;
    }
    else if(age==18)
    {
        cout<<"You can fill the admission form but on limited seat."<<endl;
    }
    else if(age>18 && age<30)
    {
        cout<<"You are elligible to fill the admission form."<<endl;
    }
    else
    {
        cout<<"You are over age"<<endl;
    }


    return 0;

}