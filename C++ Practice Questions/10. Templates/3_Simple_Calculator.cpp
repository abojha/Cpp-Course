#include<iostream>
using namespace std;

template<class c>
class Calculator
{
    c a;
    c b;
    public:
        void get_data(c a, c b)
        {
            this->a = a;
            this->b = b;
        }

        c add() {return (a + b);}
        c sub() {return (a - b);}
        c mul() {return (a * b);}
        c div() {return (a / b);}
};
int main()
{
    Calculator<int> Mintu;
    Calculator<float> Pintu;
    Calculator<char> Manku;

    Mintu.get_data(10, 12);

    cout<<"Addtion :: "<<Mintu.add()<<endl;
    cout<<"Subtraction :: "<<Mintu.sub()<<endl;
    cout<<"Multiplication :: "<<Mintu.mul()<<endl;
    cout<<"Divide :: "<<Mintu.div()<<endl;

    Pintu.get_data(7.69, 9.85);
    cout<<"Addtion :: "<<Pintu.add()<<endl;
    cout<<"Subtraction :: "<<Pintu.sub()<<endl;
    cout<<"Multiplication :: "<<Pintu.mul()<<endl;
    cout<<"Divide :: "<<Pintu.div()<<endl;


    Manku.get_data('a', 'b');
    cout<<"Addtion :: "<<Manku.add()<<endl;
    cout<<"Subtraction :: "<<Manku.sub()<<endl;
    cout<<"Multiplication :: "<<Manku.mul()<<endl;
    cout<<"Divide :: "<<Manku.div()<<endl;
    return 0;
}