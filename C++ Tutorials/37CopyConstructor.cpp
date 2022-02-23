#include<iostream>
using namespace std;

class number
{
    int a;
    public:

        number(){
            a = 0;
        }
        number(int x)
        {
            a = x;
        }
        // If Copy Constructor not Invoked then Class has their own inbuilt copy constructor.
      number(number &obj)             // Copy Constructor
       { cout<<" copy constructor called!!!!!"<<endl;
           a = obj.a;
      }
      
    void show()
    {
        cout<<"your number for this object is "<<a<<endl;
    }
};

int main()
{
    number x,y,z(27),z1,z4;

    x.show();
    y.show();
    z.show();

    z1 = z; // This is inbuilt Copy constructor
    z1.show();

    number z3 = y;
    z3.show();


    number z2(x);
    z2.show();

    //number z3 = z; // // Copy constructor not invoked because z3 is previously declared.
    //z3.show();

   // number z4(z);  Copy constructor not invoked because z4 is previously declared.
    //z3.show();
    //z4.show();



    
    
    
    return 0;
}