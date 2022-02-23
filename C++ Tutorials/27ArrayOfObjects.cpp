// Array of Objects 
#include<iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

    public:
        void setId(void)
        {
            salary++;
            cout<<"Enter the id of Employee"<<endl;
            cin>>id;
        }
        void getData(void)
        {
            cout<<"The id and salary of Employee is "<<id<<" and "<<salary<<endl;       
        }

};

int main()
{
   //Employee abhay, anjali,Mintu;
   //abhay.setId();
   //abhay.getData();
   
   Employee fb[4]; // Array of objects.........

   for(int i = 0; i < 4; i++)
   {
       fb[i].setId();
       fb[i].getData();
   }
    return 0;
}