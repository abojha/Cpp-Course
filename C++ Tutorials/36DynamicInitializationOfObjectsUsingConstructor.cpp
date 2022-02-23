#include <iostream>
using namespace std;

class BankDeposit
{
    int Principal;
    int Years;
    float Interestrate;
    float Returnvalue;

public:
    BankDeposit(){}
    BankDeposit(int p, int y, int r);
    BankDeposit(int p, int y, float r);
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    Principal = p;
    Years = y;
    Interestrate = r;

    Returnvalue = Principal;
    for (int i = 0; i < y; i++)
    {
        Returnvalue = Returnvalue * (1 + Interestrate);
    }
}
BankDeposit ::BankDeposit(int p, int y, int r)
{
    Principal = p;
    Years = y;
    Interestrate = r;

    Returnvalue = Principal;
    for (int i = 0; i < y; i++)
    {
         Returnvalue = Returnvalue + (Principal*Interestrate*Years)/100;
    }
}

void BankDeposit :: show()
{
  
    
        cout << "Your Principal was " << Principal
             << " and Your return value is " << Returnvalue << endl;
    
}
int main()
{
    BankDeposit bd1, bd2, bd3;
    int p;
    int y;
    int R;
    float r;
    cout << "Enter the Principle value" << endl;
    cin >> p;

    cout << "Enter the Time Perion (in Years)" << endl;
    cin >> y;

    cout << "Enter the Rate(in fraction) " << endl;
    cin >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the Principle value" << endl;
    cin >> p;

    cout << "Enter the Time Perion (in Years)" << endl;
    cin >> y;

    cout << "Enter the Rate(in %) " << endl;
    cin >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}