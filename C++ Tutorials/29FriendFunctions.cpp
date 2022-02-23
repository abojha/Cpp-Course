#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    friend complex sumcomplex (complex o1,complex o2);

    public:
        void SetData(int v1, int v2)
        {
            a = v1;
            b = v2;
        }
        // below lines means that non member - sumcomplex is allowed to do anything with my private data
    
        void getData()
        {
            cout<<"Yourcomplex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
complex sumcomplex (complex o1,complex o2)
{
complex o3;
     o3.SetData((o1.a + o2.a), (o1.b + o2.b));
     return o3;
}

int main()
{
complex c1,c2,sum;

    c1.SetData(1,2);
    c1.getData();

    c2.SetData(3,4);
    c2.getData();  

    sum = sumcomplex(c1,c2);
    sum.getData();
    return 0;
}

/* Properties of Friend Function --->

1. Not in the scope of class

2.since it is not the scope of the class, it cannot be called from the object of class
    c1.sumcomplex() == Invalid

3.Can be invoked without the help of any object.

4. Usually contains the objects as a arguements.

5. can be declared inside the public and private section of the class.

6. It can not the acces members directly by their names and Need "object_name.member_name" to acces the memebers.
*/