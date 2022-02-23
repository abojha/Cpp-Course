#include<iostream>
#include<fstream>
using namespace std;
/*
The useful classes for working with files in C++ are:
1. fstreambase.
2. ifstream. --> derived from fstreambase.
3. ofstream. --> derived from fstreambase.
*/


/*
In order to work with files in C++, you will have to open it.
There are two ways to open a file.
1, using the constructor.
2. using the member function open() of the class.
*/

int main()
{
    string st = "Abhay bhai";
    string st2;

    // Opening file using constructor and writing it.
   // ofstream out("57sample.txt"); //write operation.
    //out<<st;

    //Opening file using constructor and reading it.
    ifstream in("57sample.txt");
    //in>>st2;
    getline(in,st2);
    cout<<st2;
    return 0;
}