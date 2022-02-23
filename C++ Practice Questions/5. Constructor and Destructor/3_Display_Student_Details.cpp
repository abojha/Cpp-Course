#include<iostream>
using namespace std;

class Student
{
    char name[20];
    int roll_number;
    char branch[5];
    int sem;
    public:
        void get_data();
        void print_data();
};

void Student :: get_data()
{
    cout<<"Enter the student name\n";
    cin>>name;
    cout<<"Enter the roll number\n";
    cin>>roll_number;
}
void Student :: print_data()
{
    cout<<"Student name :: "<<name<<endl;
    cout<<"Student roll number :: "<<roll_number<<endl;
}
int main()
{
    Student a;
    a.get_data();
    a.print_data();
    return 0;
}