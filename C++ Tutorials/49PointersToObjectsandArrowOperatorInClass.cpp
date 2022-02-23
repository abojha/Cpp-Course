#include<iostream>
using namespace std;

class Complex{
    int real,imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }

        void setData(int a, int b)
        {
            real = a;
            imaginary = b;
        }
};
int main()
{
    Complex C1;
    //Complex *ptr = &C1;
    Complex *ptr = new Complex;
    C1.setData(3,4);
    C1.getData();

    //(*ptr).setData(1,5);  is exactly same as
    ptr->setData(5,7);

    (*ptr).getData();

   
    return 0;
}