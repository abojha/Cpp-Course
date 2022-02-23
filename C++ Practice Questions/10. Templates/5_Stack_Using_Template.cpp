#include<iostream>
using namespace std;

template<class T>
class Stack
{
    int topu = -1;
    T st[100];
    public:
        void push();
        int pop();
        void top();
};

template<class T>
void Stack<T> :: push()
{
    T data;
    cout<<"Enter the data to push into stack\n";
    cin>>data;
    topu++;
    st[topu] = data;

}
template<class T>
int Stack<T> :: pop()
{
    cout<<"Popped Successully\n";
    return st[topu--];
}

template<class T>
void Stack<T> :: top()
{
    cout<<"Top value is :: "<<endl;
    cout<<st[topu]<<endl;
}
int main()
{
    Stack<int> int_st;
    Stack<char> char_st;
    
    int_st.push();
    char_st.push();
    int_st.push();
    char_st.push();

    int_st.top();
    char_st.top();

    int_st.pop();
    char_st.pop();

    int_st.top();
    char_st.top();


    

    return 0;
}