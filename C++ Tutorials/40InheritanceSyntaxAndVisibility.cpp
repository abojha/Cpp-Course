#include<iostream>
using namespace std;

//Base Class
class Employee
{
    
     public:
     int id;
    float salary;
        Employee(){}
       
        Employee(int ide)
        {
            id = ide;
            salary = 34;
        }
};

//Derived Class
/*class {{derived-class-name}} : {{visibility-mode}} {{base class-name}}
{
    class members/methods/etc.....
}
*/
/*
Note:-
1. Default Visibility mode is private.
2. public Visibility mode : Public memebers of the base class become public members
   of the derived class.
3. Private Visibility mode : Public memebers of the base class become private members
   of the derived class.
4. Private number never inherited.
*/

//Creating a programmer class derived from employee base Class
class Programmer :  public Employee
{
    public:
    Programmer(int ide)
    {
        id = ide;
    }
    int languagecode = 9;
};

int main()
{
    Employee harry(1),rohan(2);

    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;

    Programmer skill(1);
    cout<<skill.languagecode<<endl;
    cout<<skill.id;

    
    return 0;
}