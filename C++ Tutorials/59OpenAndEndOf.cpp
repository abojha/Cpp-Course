#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream out;
    out.open("57Sample.txt");
    out<<"this is me"<<endl;
    out<<"this is me also"<<endl;
    out<<"this is tau"<<endl;
    out.close();

    ifstream in;
    in.open("58Sample.txt");
    string st,st2,st3;
    // getline(in,st);
    // getline(in,st2);
    // getline(in,st3);
    //cout<<st<<st2<<st3;

    while(in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    return 0;
}