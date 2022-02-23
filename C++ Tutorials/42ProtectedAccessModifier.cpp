#include<iostream>
using namespace std;

class Base
{
    protected:
        int a;
    public:
        Base()
        {
            a = 10;
        }

};

/* For a Protected Member:-
                        Public derivation       Private derivation      Protected derivation

1. Private Members:     Not Inherited            Not Inherited          Not Inherited
2. Protected Members:   Protected                Private                Protected
3. Public Members:      Public                   Private                Protected
*/

class Derived : protected Base
{   public:
    void display()
    {
        cout<<a;
    }
};
int main()
{
    Base b;
    Derived abhay;

    abhay.display();
    
    return 0;
}