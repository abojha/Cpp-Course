#include<iostream>
using namespace std;

class student
{
    char F_name[20];
    char L_name[20];
    int age;
    public:
        void get_data();
        void display_data();
};

class Science : public student
{
    char sub1[10], sub2[10], sub3[10];
    public:
        void get_data();
        void display_data();
}; 
class Commerce : public student
{
    char sub1[10], sub2[10], sub3[10];
    public:
        void get_data();
        void display_data();
}; 
class Arts : public student
{
    char sub1[10], sub2[10], sub3[10];
    public:
        void get_data();
        void display_data();
};

void student :: get_data()
{
    cout<<"Enter the name of student"; cin>>F_name;
    cout<<"Enter the Last name of student"; cin>>L_name;
    cout<<"Enter the age of student"; cin>>age;
}
void student :: display_data()
{
    cout<<"First Name :: "<<F_name<<endl;
    cout<<"Last Name :: "<<L_name<<endl;
    cout<<"Age :: "<<age<<endl;
}

void Science :: get_data()
{
    student ::get_data();
    cout<<"Enter first subject"; cin>>sub1;
    cout<<"Enter the second subject"; cin>>sub2;
    cout<<"Enter the third subject"; cin>>sub3;
}
void Science :: display_data()
{
    student :: display_data();
    cout<<"Subjects"<<endl;
    cout<<"1."<<sub1<<endl;
    cout<<"2."<<sub2<<endl;
    cout<<"3."<<sub3<<endl;
}
void Commerce :: get_data()
{
    student ::get_data();
    cout<<"Enter first subject"; cin>>sub1;
    cout<<"Enter the second subject"; cin>>sub2;
    cout<<"Enter the third subject"; cin>>sub3;
}
void Commerce :: display_data()
{
    student :: display_data();
    cout<<"Subjects";
    cout<<"1."<<sub1<<endl;
    cout<<"2."<<sub2<<endl;
    cout<<"3."<<sub3<<endl;
}
void Arts :: get_data()
{
    student ::get_data();
    cout<<"Enter first subject"; cin>>sub1;
    cout<<"Enter the second subject"; cin>>sub2;
    cout<<"Enter the third subject"; cin>>sub3;
}
void Arts :: display_data()
{
    student :: display_data();
    cout<<"Subjects";
    cout<<"1."<<sub1<<endl;
    cout<<"2."<<sub2<<endl;
    cout<<"3."<<sub3<<endl;
}
int main()
{
    Science a;
    Commerce b;
    Arts c;
    int i;
    char d = 'y';


    do
    {
        
        cout<<"1.Science "<<endl;
        cout<<"2.Commerce "<<endl;
        cout<<"3.Arts "<<endl;
        cin>>i;
        switch (i)
        {
        case 1:
            a.get_data();
            a.display_data();
            break;
        case 2:
            b.get_data();
            b.display_data();
            break;
        case 3:
            c.get_data();
            c.display_data();
            break;
        case 4:
            exit(0);
            break;
        
        default:
            cout<<"Enter the correct option\n";
            break;
        }
        cout<<"Do you want to conitnue:: ";
        cin>>d;
    } while (d == 'y');
    
    return 0;
}