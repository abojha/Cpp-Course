#include<iostream>
#include<fstream>

using namespace std;

int main()
{  
    // //connecting our file with about stream.
    // ofstream about("58Sample.txt");

    // //Creating a variable name entered by the user
    // cout<<"Enter your name "<<endl;
    // string name;
    // getline(cin,name);
     
    // //writing a string to the file.
    // about<<"My name is " + name;

    // about.close();

   
    ifstream abin("58sample.txt");
    string st2;
    getline(abin,st2);
    cout<<"The content of this file is "<<endl;
    cout<<st2;
    abin.close();

    
    return 0;
}