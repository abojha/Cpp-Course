#include<iostream>
using namespace std;

class shape
{
    public:
        virtual void Enter_data() = 0;
        virtual void Area() = 0;
};
class Rectangle : public shape
{
    int lenght, breadth;
    public:
        void Enter_data()
        {
            cout<<"Enter Length :: ";
            cin>>lenght;
            cout<<"Enter Breadth :: ";
            cin>>breadth;
        }
        void Area()
        {
            cout<<"Area of triangle is :: "<<lenght*breadth<<endl;
        }
};
class Circle : public shape
{
    int radius;
    public:
        void Enter_data()
        {
            cout<<"Enter the radius::";
            cin>>radius;
        }
        void Area()
        {
            cout<<"Area of triangle is :: "<<(3.14*radius*radius)<<endl;
        }
};
int main()
{
    shape *s;
    Rectangle r;
    Circle c;
    s = &r;
    s->Enter_data();
    s->Area();

    s = &c;
    s->Enter_data();
    s->Area();
    return 0;
}