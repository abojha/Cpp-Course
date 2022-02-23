#include<iostream>
using namespace std;

class Student{
    protected :
        int roll_number;
    public:
        void set_data(int);
        void get_data(void);
};
void Student :: set_data(int r)
{
    roll_number = r;
}
void Student :: get_data()
{
    cout<<"The roll number is "<<roll_number<<endl;
}

class Marks: public Student
{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};
void Marks :: set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Marks :: get_marks(void)
{
    cout<<"The Marks obtained in Physics "<<physics<<endl;
    cout<<"The Marks obtained in Maths "<<maths<<endl;
}

class Result : public Marks{
    public:
        void display_result()
        {
             get_data();
             get_marks();
            cout<<"The percentage of student is "<<(maths + physics)/2<<endl;
        }
};


int main()
{
    Result abhay;

   
    abhay.set_data(420);
    abhay.set_marks(92,97);
    abhay.display_result();
    
    

    return 0;
}