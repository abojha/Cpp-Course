#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    srand(time(0)); // It will create different sequence on every run
    for(int i = 0; i < 10; i++)
    {
        cout<<rand()%100<<endl;
    }
    return 0;
}