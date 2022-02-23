#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_Base = 1;
      virtual void display()
        {
            cout<<"Displaying the value of base class "<<var_Base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_Derived = 2;
        void display()
        {
            cout<<"2 Displaying the value of Base class "<<var_Base<<endl;
            cout<<"2 Displaying the valur of derived class "<<var_Derived<<endl;
        }
};
int main()
{
    BaseClass * base_class_pointer;
    BaseClass base_obj;
    DerivedClass Derive_obj;
    DerivedClass *derived_class_pointer;
    
    
   
    base_class_pointer = &Derive_obj; 
    base_class_pointer->display();



    /*
    1. They can not be static.
    2. They are accessed by object pointers.
    3. Virtual functions can be a friend of another class.
    4. A function in a base class might not be used.
    5. A Virtual Function defined in the base class,
       there is not necessity of redefining in the the derived class.

    */
    

   
     
   
   
   



    
    
    return 0;
}