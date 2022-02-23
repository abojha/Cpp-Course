#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "Enter the id of item number " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the Price of item number " << counter + 1 << endl;
    cin >> itemPrice[counter];

    counter++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item id " << itemId[i] << " is Rs." << itemPrice[i] << endl;
    }
}
int main()
{
    shop dukaan;

    dukaan.initCounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();

    return 0;
}