#include<iostream>
using namespace std;


class complex{
    int a,b;
    // creating a constructor
    // Constructor is a special member function with the same name as of class.
    // It is used to initialize the objects of the class.
    // It is automatically invoked whenever an object is crated.
    public:
    complex(void); // creating a constructor.

   void printnumbers()
    {
        cout<<"The complex number is "<<a<<" + "<<" i"<<b<<endl;
    }
};

complex :: complex(void) // ----> this is default constructor (not accept any perimeter)
{
     a = 10;
     b = 17;
}
int main()
{
    complex c;
    c.printnumbers();
    
    return 0;
}
// Properties of Constructor:-
/*
   1. It should be declared in the public section of the class.
   2. They are automatically invoked whenever the object is created.
   3. They do not return values and do not have return type
   4. It can have default arguements.
   5. We can not refer to their address.




*/
