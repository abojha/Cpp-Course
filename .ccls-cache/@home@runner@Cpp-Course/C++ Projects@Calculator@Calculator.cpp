#include<iostream>
#include<cmath>
using namespace std;

class simple_Calculator{
    protected:
    float a,b;
    char op;
    public:
        simple_Calculator(){};
        simple_Calculator(int x,char ope, int y):a(x),op(ope),b(y){};
    
    void PerformOpertor()
    {
        float result;
        
        switch (op)
        {
        case '+':
            result = a+b;
            break;
        case '-':
            result = a-b;
            break;
        case '*':
            result = a*b;
            break;
        case '/':
            result = a/b;
            break;

        default:
            cout<<"Enter [+,-,*,/]";
            break;
        }
        cout<<result;
    }

};
class Scientific_Calculator{
    protected:
    float a;
    int z;
        public:
            Scientific_Calculator(){};
            Scientific_Calculator(float x,int y): a(x),z(y){};
        void Perform_Scientific_operation()
        {
            float result;
            switch (z)
            {
            case 1:
                result = sin(a);
                break;
            case 2:
                result = cos(a);
                break;
            case 3:
                result = log(a);
                break;
            case 4:
                result = exp(a);
                break;
            default:
                    cout<<"Enter valid operation\n";
                break;
            }
            cout<<result;
        }

};
class HybridCalculator : public simple_Calculator, public Scientific_Calculator{
    public:

        HybridCalculator(int x,char op,int y):simple_Calculator(x,op,y){};
        HybridCalculator(int x,int z):Scientific_Calculator(x,z){};
};
int main()
{
    char choice = 'y';
    do{
    system("cls");
    int A;
    cout<<"Which Operation you want to perform 1.Simple or 2.Scientific:\n";
    cin>>A;
    if(A==1)
    {
        system("cls");
        float a,b;
        char op;
        cout<<"Enter the first number:\n";
        cin>>a;
        cout<<"Enter the operator:\n";
        cin>>op;
        cout<<"Enter the second number:\n";
        cin>>b;        
        HybridCalculator ab(a,op,b);
        ab.PerformOpertor();
    }
    else if(A==2)
    {
        system("cls");
        float a;
        int x;
        cout<<"Enter the number:\n";
        cin>>a;
        cout<<"choose one of them:\n";
        cout<<"1.sin, 2.cos, 3.log, 4.exp\n";
        cin>>x;
        HybridCalculator ab(a,x);
        ab.Perform_Scientific_operation();
    }
    cout<<"\nDo you want to perform more calculations:[Y/N]\n";
    cin>>choice;
    }while(choice == 'y'||choice == 'Y');
}