#include<bits/stdc++.h>
using namespace std;

class Person
{
    char name[80];
    int age;
    public:
        Person(){}
        Person(char *, int);
        void get_details();
        void print_details();
        void write_in_file();
        void Read_from_file(int n);
        static int Person_count();
};

Person :: Person(char *n, int a)
{
    strcpy(name, n);
    age = a;
}

void Person :: get_details()
{
    cout << "Enter the Person's Name :: ";
    cin >> name;
    cout << "Enter the Person's age ::";
    cin >> age;
}

void Person :: print_details()
{
    cout << "Person's Name :: " << name << endl;
    cout << "Person's Age :: " << age << endl;
}

void Person :: write_in_file()
{
    ofstream file;

    file.open("Person.DAT", ios::binary|ios::app);
    file.write(( char* )this, sizeof( *this ));

}
void Person :: Read_from_file(int n)
{
    ifstream file;

    file.open("Person.DAT", ios::binary);
    file.seekg( n * sizeof(Person));
    file.read( ( char* )this, sizeof( *this ) );

}
int Person :: Person_count()
{
    ifstream file;
    file.open("Person.DAT", ios::binary);
    file.seekg(0, ios::end);

    return (int)file.tellg()/sizeof(Person);
}
int main()
{
    Person p;
    char choose;
    do
    {
        p.get_details();
        p.write_in_file();
        cout << "Do you want to add another person :: ";
        cin >> choose;
    }while(choose == 'y');

    int n = Person::Person_count();

    for(int j = 0; j < n; j++)
    {
        p.Read_from_file(j);
        p.print_details();

    }
    cout << endl;
    return 0;
}