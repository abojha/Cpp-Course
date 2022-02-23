#include<iostream>
#include<string>

using namespace std;

class Doctor
{
    string doc_name;
    string doc_degree;
    public:
        void get_doc_edu()
        {
            cout<<"Enter the doctor's name\n";
            getline(cin,doc_name);
            cout<<"Enter the doctor's education\n";
            getline(cin,doc_degree);
        }    
        void Print_doc_edu()
        {
            cout<<"Doctor's name :: "<<doc_name<<endl;
            cout<<"Doctor's degree :: "<<doc_degree<<endl;
        }
};

class Patient
{
    string pat_name; 
    string pat_disease;
    public:
        void get_pat_name()
        {
            cout<<"Enter the Patient's name \n";
            getline(cin,pat_name);
            cout<<"Enter the Patient's disease\n";
            getline(cin, pat_disease);
        }    
        void Print_pat_data()
        {
            cout<<"Patient's name :: "<<pat_name<<endl;
            cout<<"Patient's disease :: "<<pat_disease<<endl;
        }
};
class amount
{
    int dues;
    Patient p;
    Doctor d;
    public:
        void get_data()
        {
            p.get_pat_name();
            d.get_doc_edu();
            cout<<"Enter the fees :: ";
            cin>>dues;
        }
        void print_data()
        {
            p.Print_pat_data();
            d.Print_doc_edu();
            cout<<"amoune dues:: "<<dues<<endl;
        }
};
int main()
{
    amount ravi;

    ravi.get_data();
    ravi.print_data();
    return 0;
}