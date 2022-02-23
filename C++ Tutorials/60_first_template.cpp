#include<iostream>
using namespace std;
template <class T>

class vector{

    public:
        int a;
        T *array;

        vector(int m)
        {
            a = m;
            array = new T[m];
        }

        T dotproduct(vector &v)
        {
            T d = 0;
            for(int i = 0; i < a; i++)
            {
                d+= this->array[i] * v.array[i];
            }
            cout<<d<<endl;
            return d;
        }
};
int main()
{
    // vector <int> v1(3);

    // v1.array[0] = 1;
    // v1.array[1] = 1;
    // v1.array[2] = 4;

    // vector <int> v2(3);

    // v2.array[0] = 0;
    // v2.array[1] = 4;
    // v2.array[2] = 1;

    // v1.dotproduct(v2);

    vector <double> v1(3);

    v1.array[0] = 1.1;
    v1.array[1] = 1.2;
    v1.array[2] = 4.4;

    vector <double> v2(3);

    v2.array[0] = 0.1;
    v2.array[1] = 4.5 ;
    v2.array[2] = 1.1;

    v1.dotproduct(v2);
    return 0;
}