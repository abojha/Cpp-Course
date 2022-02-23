#include<iostream>
using namespace std;

class Polygon
{
    protected:
    float length, breadth;
    public:
        void get_data(float a, float b)
        {
            length = a;
            breadth = b;
        }
};
class Rectangle : public Polygon
{
    public:
    int area()
    {
        return (length*breadth);
    }
};
class Triangle : public Polygon
{
    public:
    int area()
    {
        return ((length*breadth)/2);
    }
};
int main()
{
    Rectangle r;
    Triangle t;
    Polygon *p1, *p2;

    p1 = &r;
    p2 = &t;
    p1->get_data(2,4);
    p2->get_data(5,2);
    cout<<r.area()<<endl;
    cout<<t.area()<<endl;
    p1->get_data(23,45);
    return 0;
}