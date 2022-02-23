//#include<iostream>
//using namespace std;
//
//class Y;
//class X{
//    int data;
//    int tata = 10;
//    public:
//        void setvalue(int value)
//        {
//            data = value;
//        }
//        friend void add(X , Y);
//};
//
//class Y{
//    int num;
//    public:
//        void setvalue(int value)
//        {
//            num = value;
//        }
//          friend void add(X , Y);
//};
//
//void add(X o1,Y o2)
//{
//    cout<<"Sum of objects of both the classes is "<<(o1.data + o2.num);
//}
//int main()
//{
//    X a;
//    Y b;
//    a.setvalue(3);
//    b.setvalue(7);
//    
//
//    add(a,b);
//    
//      return 0;
//
//  }

#include<iostream>
using namespace std;
class y;
class x{
    int val1;
    public:
        void setdata(int value)
        {
            val1 = value;
        }
        void display()
        {
            cout<<val1;
        }
        friend void exchange( x &, y &);
};

class y{
    int val2;
    public:
        void setdata(int value)
        {
            val2 = value;
        }
        void display()
        {
            cout<<val2;
        }
        friend void exchange(x &, y &);
};

void exchange(x &a, y &b)
{
    int temp = a.val1;
        a.val1 = b.val2;
        b.val2 = temp;
}
int main()
{
    x oc1;
    y oc2;
    oc1.setdata(37);
    oc2.setdata(79);

    exchange(oc1, oc2);

    cout<<" After exchange the numbers val1";
    oc1.display();
    cout<<endl;
     cout<<" After exchange the numbers val2";
    oc2.display();
    
    return 0;
}