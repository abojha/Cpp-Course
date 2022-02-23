#include<iostream>
using namespace std;

class cube
{
     public:
    int side;
       
            cube()
            {
                cout<<"The default constructor is called\n";
                cout<<"Enter the side of the cube\n";
                cin>>side;
            }
            cube(int a)
            {
                cout<<"The parameterized constructor is called\n";
                side = a;
            }
            int volume()
            {
                return side*side*side;
            }
            ~cube()
            {
                cout<<"The deconstructor is called\n";
                cout<<"Deconstruction................."<<side<<endl;
            }
};
int main()
{
    cube a;
    cube b(2);

    cout<<"the side of cube is "<<a.side<<endl;
    cout<<"The volume of cube is "<<a.volume()<<endl;

    cout<<"The side of cube is "<<b.side<<endl;
    cout<<"The volume of cube is "<<b.volume()<<endl;
    return 0;
}