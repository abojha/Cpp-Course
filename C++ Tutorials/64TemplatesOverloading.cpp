#include <iostream>
using namespace std;
template <class T>
class Abhay
{
public:
    T data;
    Abhay(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Abhay<T>::display()
{
    cout << "The value of data is " <<data<<endl;
}

void func(int a)
{
    cout<<"I am first func "<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"I am templatized func "<<a<<endl;
}
int main()
{
//     Abhay<float> obj(5.7);
//     cout << obj.data << endl;
//     obj.display();
    func(4); // exaxt match priortize first
    func('a');
    return 0;
}