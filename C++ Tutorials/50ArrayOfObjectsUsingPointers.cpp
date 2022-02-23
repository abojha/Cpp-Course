#include<iostream>
using namespace std;

class shopItem{
    int id;
    float price;
        public:
            void setData(int a, int b)
            {
                id = a;
                price = b;
            }
            void getData()
            {
                cout<<"The id of Product is "<<id<<endl;
                cout<<"The Price of Product is "<<price<<endl;
            }
};
int main()
{
    int size = 2;
    int p;
    float q;
    shopItem *ptr = new shopItem[size];
    shopItem *ptrTemp = ptr;
    for(int i = 0; i < size; i++)
    {
        cout<<" Enter Id and Price of item "<<i+1;
        cin>>p>>q;
                    //(*ptr).setData(p,q);
        ptr->setData(p,q);
        ptr++;
    }
    for (int j = 0; j < size; j++)
    {
        cout<<"Item Number: "<<j+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    return 0;
}