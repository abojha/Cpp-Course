#include<iostream>
#include<string>
using namespace std;

class student
{
    protected:
    string name;
    int roll_n;
    int sem;

    public:
    void get_info();
    void put_data();
};
void student :: get_info()
{
    cout<<"Enter the student's name :: ";
    getline(cin>>ws,name);
    cout<<"Enter the student's roll number :: ";
    cin>>roll_n;
    cout<<"Enter the student's semester :: ";
    cin>>sem;
}
void student :: put_data()
{
    cout<<"Student's Name :: "<<name<<endl;
    cout<<"Student's roll number :: "<<roll_n<<endl;
    cout<<"Student's semester :: "<<sem<<endl;
}

class Marks 
{
    float physics,chemistry,maths,a;
    public:
        void get_data();
        void print_data();
        void Calculate_percentage();
};

void Marks :: get_data()
{
    cout<<"Enter the marks of Physic\n";
    cin>>physics;
    cout<<"Enter the marks of chemistry\n";
    cin>>chemistry;
    cout<<"Enter the marks of mathematics\n";
    cin>>maths;

}
void Marks :: print_data()
{
    cout<<"Physics :: "<<physics<<endl;
    cout<<"Chemistry :: "<<chemistry<<endl;
    cout<<"Mathematics :: "<<maths<<endl;
    cout<<"Total Percentage :: "<<a<<endl;
}
void Marks :: Calculate_percentage()
{
   
    a = (physics + chemistry + maths)/3;
    cout<<"Percentage get calculated\n";
    
}

class Result : public student, public Marks
{
    public:
        void show();
        void edit();

};
void Result :: show()
{
    system("cls");
    put_data();
    print_data();
    

}
void  Result :: edit()
{
    get_info();
    get_data();
}
int main()
{
    Result abhay;
    int i;

    cout<<"1. Enter student details\n"
        <<"2. Calculate Percentage\n"
        <<"3. Show Result\n"
        <<"4. exit\n";
    
    do
    {
        cout<<"Enter from the above options\n";
        cin>>i;
        switch (i)
        {
        case 1:
            abhay.edit();
            break;
        case 2:
             abhay.Calculate_percentage();
            break;
        case 3:
            abhay.show();
            break;
        case 4:
            exit(0);
            break;
           
        default:
            cout<<"Enter the correct option\n";
            break;
        }

        
    } while (i!=4);
    
    return 0;
}