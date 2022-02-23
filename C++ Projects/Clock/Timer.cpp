#include<iostream>
#include<windows.h>
#include<cstdio>
#include<iomanip>

using namespace std;

int main()
{
    int h,m,s;
    int d = 1000; // through this we will delay time for 1000 milliseconds
    cout<<"Set Time:\n"<<endl;
    cin>>h>>m>>s;
    if(h>12||m>60||s>60)
    {
        cout<<"Error!!!!!";
    }

    while(1)
    {
        s--;
        if(s<0)
        {
            s = 59;
            m--;
        }
        if(m<0)
        {
            m = 59;
            h--;
        }
        if(h<0)
        {
            cout<<"!!!!!!!Time is Over!!!!!";
            exit(0);
        }
        cout<<"Timer\n";
        cout<<setw(2)<<setfill('0')<<h<<":"
            <<setw(2)<<setfill('0')<<m<<":"
            <<setw(2)<<setfill('0')<<s;
           
        Sleep(d);
        system("cls");
    }
    return 0;
}