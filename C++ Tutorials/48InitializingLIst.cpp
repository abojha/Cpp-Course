#include<iostream>
using namespace std;
/*
Syntax for Initialization List in Constructor:-
constructor(argumaent_list) : initialization-section
{
    assignment + other code;
}
class Test{
    int a;
    int b;
        public:
        Test(int i, int j) : a(i),b(j){constructor_body}
};

*/

class Test{
    int a;
    int b;
        // public:
        // Test(int i, int j) : a(i),b(a+j){
        //     cout<<"constructor_executed"<<endl;
        //     cout<<"value of a "<<a<<endl;
        //     cout<<"value of b "<<b<<endl;
        // }


        // public:
        // Test(int i, int j) : b(j),a(i+b){        //This will create Problem because "a" 
        //     cout<<"constructor_executed"<<endl; //declared first than "b" so it will be initialize first
        //     cout<<"value of a "<<a<<endl;
        //     cout<<"value of b "<<b<<endl;
        // }
    public:
        Test(int i, int j): a(i)
        {
            b = j;
            cout<<"constructor_executed"<<endl; 
            cout<<"Value of a "<<a<<endl;
            cout<<"value of b "<<b<<endl;

        }


};        
int main()
{
    Test ab(1,2);
    
    
    return 0;
}