#include<iostream>
using namespace std;

class Employee
{
    char name[20];
    int age;
    int salary;
    public:
        void get_data();
        void display_data();
};
void Employee :: get_data()
{
    cout<<"Enter the name of employee\n";
    cin>>name;
    cout<<"Enter the age of employee\n";
    cin>>age;
    cout<<"Enter the salary of employee\n";
    cin>>salary;
}
void Employee :: display_data()
{
    cout<<"Name :: "<<name<<endl;
    cout<<"Age :: "<<age<<endl;
    cout<<"Salary :: "<<salary<<endl;
}

class Engineer : public Employee
{
    char type_en[20];
    public:
        void get_data()
        {
            Employee :: get_data();
            cout<<"Enter the type of engineering\n";
            cin>>type_en;
        }
        void display_data()
        {
            Employee :: display_data();
            cout<<"Type :: "<<type_en<<endl;
        }
};
int main()
{
    Engineer er;
    er.get_data();
    er.display_data();
    return 0;
}