#include<iostream>
using namespace std;

template<class T>
class myContainer
{
    T element;
    public:
    myContainer(T a)
    {
        element = a;
    }
    void increase()
    {
        cout<<++element<<endl;
    }

};
template<>
class myContainer <char>
{
    char element;
    public:
        myContainer(char arg)
        {
            element = arg;
        }
        void uppercase()
        {
            if(element >= 'a' && element <= 'z')
            {
                element+= 'A' - 'a';
            }
                cout<<element<<endl;
        }
};
int main()
{
    myContainer<int> myint(12);
    myContainer<char> mychar('a');
    myint.increase();
    mychar.uppercase();
    return 0;
}