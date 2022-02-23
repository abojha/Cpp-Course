#include<iostream>
using namespace std;

class Student
{
    protected:
    int roll_number;
    public:
        void get_roll();
};

class study_marks : virtual public Student
{
    protected:
    float ph,ch,m;
    public:
        void get_marks_study();
};

class sports_marks : virtual public Student
{   protected:
    float all_s;
    public:
        void get_marks_sports();
};

class result : public study_marks, public sports_marks
{   protected:
    float total_marks;
    public:
        void result_m();
};

void Student ::get_roll()
{
    cout<<"Enter the roll number of student\n";
    cin>>roll_number;
}
void study_marks :: get_marks_study()
{
    cout<<"Enter the marks of physics\n";
    cin>>ph;
    cout<<"Enter the marks of Mathematics\n";
    cin>>m;
    cout<<"Enter the marks of Chemistry\n";
    cin>>ch;
}
void sports_marks :: get_marks_sports()
{
    cout<<"Enter the mark of sports\n";
    cin>>all_s;
}
void result ::result_m()
{
    cout<<"Student's roll number :: "<<roll_number<<endl;
    cout<<"Physics marks :: "<<ph<<endl;
    cout<<"Maths marks :: "<<m<<endl;
    cout<<"Chemistry marks :: "<<ch<<endl;
    cout<<"Sports marks :: "<<all_s<<endl;
    cout<<"Total marks :: "<<ph+m+ch+all_s<<endl;
}

int main()
{
    result R;

    R.get_roll();
    R.get_marks_study();
    R.get_marks_sports();
    R.result_m();

    
    return 0;
}