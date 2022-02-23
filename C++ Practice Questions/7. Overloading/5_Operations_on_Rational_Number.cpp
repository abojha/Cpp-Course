#include<iostream>
using namespace std;

class Rational
{
    int numer;
    int denom;
    public:
        void get_data()
        {
            cout<<"Enter the numerator part\n";
            cin>>numer;
            cout<<"Enter the denominator part\n";
            cin>>denom;
        }
        void operator +(Rational);
        void operator -(Rational);
        void operator *(Rational);
        void operator /(Rational);
};
void Rational :: operator +(Rational a)
{
    Rational temp;

    temp.numer = numer*a.denom + denom*a.numer;
    temp.denom = denom*a.denom;
    cout<<"Rational Number after addition\n";
    cout<<"Numerator :: "<<temp.numer<<endl;
    cout<<"Denominator :: "<<temp.denom<<endl;
}
void Rational :: operator /(Rational a)
{
    Rational temp;

    temp.numer = numer*a.denom;
    temp.denom = denom*a.numer;
    cout<<"Rational Number after Division\n";
    cout<<"Numerator :: "<<temp.numer<<endl;
    cout<<"Denominator :: "<<temp.denom<<endl;
}
void Rational :: operator -(Rational a)
{
    Rational temp;

    temp.numer = numer*a.denom - denom*a.numer;
    temp.denom = denom*a.denom;
    cout<<"Rational Number after Subtraction\n";
    cout<<"Numerator :: "<<temp.numer<<endl;
    cout<<"Denominator :: "<<temp.denom<<endl;
}
void Rational :: operator *(Rational a)
{
    Rational temp;

    temp.numer = numer*a.numer;
    temp.denom = denom*a.denom;
    cout<<"Rational Number after Multiplication\n";
    cout<<"Numerator :: "<<temp.numer<<endl;
    cout<<"Denominator :: "<<temp.denom<<endl;
}
int main()
{
    Rational a,b;
    a.get_data();
    b.get_data();

    a/b;
    return 0;
}