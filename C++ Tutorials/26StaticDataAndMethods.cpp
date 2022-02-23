#include <iostream>
using namespace std;

// Here count is static data member of class employee
class Employee
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "Enter the employee id" << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "This is the id of employee no." << count << " - " << id << endl;
    }
    static void getcount(void) // static functions
    {
        // cout<<id;{  through an error because static function can access only static variables} 
        cout<<"The value of count is "<<count<<endl;
    }
};
int Employee ::count = 1000; //Default value of static function is always zero.
int main()
{
    Employee abhay, anjali, harry;

    abhay.setdata();
    abhay.getdata();
    Employee :: getcount(); // can access any function directly without any preference of objects.

    anjali.setdata();
    anjali.getdata();
    Employee :: getcount();

    harry.setdata();
    harry.getdata();
    Employee :: getcount();

    return 0;
}