#include<iostream>
#include<windows.h>
#include<iomanip>
#include<iomanip>

using namespace std;

int main()
{
    int d = 1000; // we will delay the time to 1000 milliseconds.
    int h,m,s;
    cout<<"Set time:\n";
    cin>>h>>m>>s;
    if(h>12||m>60||s>60)
    {
        cout<<"Error!!!!";
        exit(0);
    }

    while(1)
    {
        s++;
        if(s>59)
        {
            s = 0;
            m++;
        }
        if(m>59)
        {
            m = 0;
            h++;
        }
        if(h>12)
        {
            h = 1;
        }

        cout<<"Your clock:\n";
        // setprecision(02);
        cout<<setw(2)<< setfill('0')<<h<<":"<<setw(2)<< setfill('0')<<m<<":"<<setw(2)<< setfill('0')<<s<<endl;
        Sleep(d);
        system("cls");

    }

    return 0;
}