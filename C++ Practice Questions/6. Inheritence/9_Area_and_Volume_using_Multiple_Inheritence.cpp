#include<iostream>
using namespace std;

class side
{
    int a;
    public:
        void get_a();
        int return_a();
};
class Area : public side
{
    public:
        void calculate_area();
};
void Area :: calculate_area()
{
    get_a();
    cout<<"The area of square\n"<<return_a()*return_a()<<endl;

}
class Volume : public side{
    public:
        void calculate_area();
};
void Volume :: calculate_area()
{
    get_a();
    cout<<"The Volume of square\n"<<return_a()*return_a()*return_a()<<endl;

}
void side :: get_a()
{
    cout<<"Enter the side\n";
    cin>>a;
}
int side :: return_a()
{
    return a;
}


int main()
{
    Area a;
    a.calculate_area();
    Volume b;
    b.calculate_area();
    return 0;
}