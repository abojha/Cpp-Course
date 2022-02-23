#include<iostream>
#include<string>
using namespace std;

class Card
{
    protected:
        string recepients;
    public:
        virtual void greetings() = 0;
};

class Birthday : public Card
{
    int years;
   public:
        Birthday(string a, int years)
        {
            recepients = a;
            this->years = years;
        }
        void greetings()
        {
            cout<<"Dear "<<recepients<<","<<endl;
            cout<<"Happy "<<years<<"th Birthday"<<endl;
        }
};

class Holiday : public Card
{
    public:
        Holiday(string s)
        {
            recepients = s;
        }
        void greetings()
        {
            cout<<"Dear "<<recepients<<","<<endl;
            cout<<"Today is your Holiday"<<endl;
        }
};

class Holi : public Card
{
    int color;
    public:
        Holi(string s, int colors)
        {
            recepients = s;
            color = colors;
        }
        void greetings()
        {
            cout<<"Dear "<<recepients<<","<<endl;
            cout<<"Happy holi and lots of colours for you "<<endl;
            for(int j = 0; j < color; j++)
            {
                cout<<"*"<<endl;
            }
        }
};
int main()
{
    Card *c;

    Birthday b("Abhay Ojha", 21);
    c = &b;
    c->greetings();

    Holi h("Mayank Jha",2);
    c = &h;
    c->greetings();

    Holiday Ho("Shivam Ojha");

    c = &Ho;
    c->greetings();

    return 0;
}