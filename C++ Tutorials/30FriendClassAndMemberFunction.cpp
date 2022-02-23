#include <iostream>
using namespace std;

//forward declaration
class complex;
class calculator;

class complex
{
    int a, b;
    //individually declared funcation of other class as a friend
   //friend int calculator ::sumrealnumber(complex, complex);
   //friend int calculator ::sumcompnumber(complex, complex);

    //now declare entire class as a friend
    friend class calculator;

public:
    int setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void getdata()
    {
        cout << "The complex number  is " << a << "+"
             << "i" << b << endl;
    }
};


class calculator
{
public:
    int sumrealnumber(complex, complex);
    int sumcompnumber(complex, complex);
};
int calculator::sumrealnumber(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumcompnumber(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setdata(1, 4);
    o2.setdata(7, 8);
    calculator calc;

    int res = calc.sumrealnumber(o1, o2);
    cout << "The sum of real part is " << res << endl;
    int resc = calc.sumcompnumber(o1, o2);
    cout << "The sum of real part is " << resc;

    return 0;
}