#include <iostream>
#include <fstream>
using namespace std;

class student
{

public:
    int roll;
    char name[100], f_name[100];
    void put();
    void get();
    void switch_case();
};
student s;

void student ::put()
{
    fstream file;
    cout << "\n\nEnter the roll number\n";
    cin >> roll;
    cout << "\n\nEnter Name\n";
    cin >> name;
    cout << "\n\nEnter Father name\n";
    cin >> f_name;

    file.open("abhayojha.txt", ios::out | ios::app);
    file.write((char *)this, sizeof(student));
    file.close();

    s.switch_case();
}
void student ::get()
{
    int temp;
    cout << "\n\nEnter roll number: \n";
    cin >> temp;
    fstream file;
    file.open("abhayojha.txt", ios ::in);
    file.seekg(0, ios::beg);

    while (file.read((char *)this, sizeof(student)))
    {
        if (roll == temp)
        {
            cout << "\nName :: " << name << endl;
            cout << "\nRoll No. :: " << roll << endl;
            cout << "\nFather Name :: " << f_name << endl;
        }
    }
    file.close();
    s.switch_case();
}
void student ::switch_case()
{
    int i;
    cout << "\n 1. Read\n  2. Write \n 3. Exit" << endl;
    cout << "Enter Your choice\n";
    cin >> i;
    switch (i)
    {
    case 1:
        s.put();
        break;
    case 2:
        s.get();
        break;
    case 3:
        exit(0);
        break;

    default:
        cout << "Enter correct input\n";
        break;
    }
}
int main()
{
    s.switch_case();
    return 0;
}