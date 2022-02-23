#include<iostream>
#include<string>
using namespace std;

class Person
{
    protected:
    string name;
    int code;
    public:
        void get_details()
        {
            cout<<"Enter the Name of Employee\n";
            getline(cin>>ws,name);
            cout<<"Enter the code for Employee\n";
            cin>>code;
        }
        void display()
        {
            cout<<"Name :: "<<name<<endl;
            cout<<"Code :: "<<code<<endl;
        }

};
class amount : virtual public Person
{
    protected:
    int pay;
    public:
        void get_pay()
        {
            cout<<"Enter the amount to be paid\n";
            cin>>pay;
        }
        void put_pay()
        {
            cout<<"Salary :: "<<pay<<endl;
        }
};

class admin : virtual public Person
{
    protected:
    int experience;
    public:
        void get_ex()
        {
            cout<<"Enter the experience \n";
            cin>>experience;
        }
        void put_ex()
        {
            cout<<"Experience :: "<<experience<<endl;
        }
};

class Master : public amount, public admin
{
    public:
        void create_data()
        {
            
            get_details();
            get_pay();
            get_ex();
        }
        void print_data()
        {
            cout<<"\n\n=======PRINT DETAILS=======\n";
            display();
            put_ex();
            put_pay();
        }
        void update()
        {
            int choice;
            cout<<"Enter the choice which you want to update\n";
            cout<<"1. Name \n";
            cout<<"2. Code \n";
            cout<<"3. Amount \n";
            cout<<"4. Experience \n";
            cin>>choice;
            switch (choice)         
            {
            case 1:
                cin>>name;
                break;
            case 2:
                cin>>code;
                break;
            case 3:
                cin>>pay;
                break;
            case 4:
                cin>>experience;
                break;
            
            default:
                cout<<"Enter correct choice";
                break;
            }
        }
};
int main()
{
    int choice;
    Master m;

while(1)
{
    cout<<"Enter the option\n";
    cout<<"1. Enter Details\n";
    cout<<"2. Print Details\n";
    cout<<"3. Update Details\n";
    cout<<"4. Exit\n";

    cin>>choice;
    switch (choice)
    {
    case 1:
        m.create_data();
        break;
    case 2:
        m.print_data();
        break;
    case 3:
       m.update();
        break;
    case 4:
        exit(0);
        break;
    default:
        cout<<"Enter correct Option\n";
        break;
    }
}
   

    return 0;
}