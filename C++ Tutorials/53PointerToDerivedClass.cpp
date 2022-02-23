#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_Base;
        void display()
        {
            cout<<"Displaying the value of base class "<<var_Base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_Derived;
        void display()
        {
            cout<<"Displaying the valur of derived class "<<var_Derived<<endl;
        }
};
int main()
{
    BaseClass * base_class_pointer;
    BaseClass base_obj;
    DerivedClass Derive_obj;
    DerivedClass *derived_class_pointer;
    
    
    derived_class_pointer = &Derive_obj;base_class_pointer = &Derive_obj; //Pointing base class pointer to derived class


    base_class_pointer->var_Base =3400;
    base_class_pointer->display();

     //base_class_pointer->var_Derived =35;
    //will throw an error
   
   
    derived_class_pointer->var_Derived = 90;
    derived_class_pointer->display();

   

    
    
    return 0;
}