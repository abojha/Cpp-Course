#include<iostream>
#include<string>
using namespace std;
//Virtual Base Class

class Student
{
    protected:
        int id;
        string name;
    public:
        void set_number(int a, string c)
        {
            id = a;
            name = c;
        }
        void print_number(void)
        {
            cout<<"Your roll number is "<<id<<endl;
            cout<<"Your name is "<<name<<endl;
        }
};

class Test : virtual public Student
{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2)
        {
            maths = m1;
            physics = m2;
        }
        void print_marks()
        {
            cout<<"marks in maths "<<maths<<endl;
            cout<<"marks in physics "<<physics<<endl;
        }

};

class Sports : virtual public Student
{
    protected:
        float score;
    public:
        void set_score(float sc)
        {
            score = sc;
        }
        void print_score(void)
        {
            cout<<"Your score is: "<<score<<endl;
        }
};

class Result : public Test, public Sports
{
    private:
        float total;
    public:
        void display(void)
        {
            total = maths+physics+score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is "<<total<<endl;
        }
};
int main()
{
    Result abhay;
    string name;
    getline(cin,name);
    
    abhay.set_number(4200,name);
    abhay.set_marks(99.5,92.6);
    abhay.set_score(5);

    abhay.display();
    
    
    return 0;
}