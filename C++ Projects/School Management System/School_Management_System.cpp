//Student Management system using file handling in c++

#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string>
#include<cstdlib>
#include<conio.h>
using namespace std;


class Student{
    private:
    string name,roll_no,email,course,branch,address;
    public:
        void menu();
        void insert();
        void display();
        void modify();
        void search();
        void Delete();
};
void Student :: menu()
{
    menustart:
    int choice;
    char x;
    system("cls");
    cout<<"\t\t\t----------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t------------------------------Student Management System---------------------------------"<<endl;
    cout<<"\t\t\t----------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t 1. Enter New Record"<<endl;
    cout<<"\t\t\t 2. Display Record"<<endl;
    cout<<"\t\t\t 3. Modify Record"<<endl;
    cout<<"\t\t\t 4. Search Record"<<endl;
    cout<<"\t\t\t 5. Delete Record"<<endl;
    cout<<"\t\t\t 6. exit"<<endl;

     cout<<"\t\t\t----------------------------------------------------------------------------------------"<<endl;
     cout<<"\t\t\t------------------------Select Your Choose : 1,2,3,4,5,6--------------------------------"<<endl;
     cout<<"\t\t\t----------------------------------------------------------------------------------------"<<endl;
    int choose;
    cin>>choose;

    switch (choose)
    {
    case 1:
        do{
            insert();
            cout<<"Do You Want To Add Another Record[y/n]\n";
            cin>>x;
        }while(x=='Y'||x=='y');
       
        break;
    case 2:
        display();
            break;
    case 3:
        modify();
        break;
    case 4:
        search();
        break;
    case 5:
        Delete();
        break;
    case 6:
        exit(0);
    
    default:
        cout<<"\n\t\t\tInvalid Choice:\n";
        
    }
    getch();
    goto menustart;
    
}
void Student :: insert()
{
    system("cls");
    fstream file;
    cout<<"\t\t\t----------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t----------------------------------ADD STUDENT DETAILS-----------------------------------"<<endl;
    cout<<"\t\t\t----------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t 1. Enter Name:";
    cin.sync();
    getline(cin,name);
    cout<<"\t\t\t 2. Enter Roll No.:";
    getline(cin,roll_no);
    cout<<"\t\t\t 3. Enter E-mail ID:";
    getline(cin,email);
    cout<<"\t\t\t 4. Enter Course:";
    getline(cin,course);
    cout<<"\t\t\t 5. Enter Branch:";
    getline(cin,branch);
    cout<<"\t\t\t 6. Enter Address:";
    getline(cin,address);
    
    file.open("School_Record.txt",ios::app|ios::out);
    file<<"Student's Name:- "<<name<<"\n"
        <<"Roll No.:- "<<roll_no<<"\n"
        <<"Email-id:- "<<email<<"\n"
        <<"Course:- "<<course<<"\n"
        <<"Branch:- "<<branch<<"\n"
        <<"Address:- "<<address<<"\n";
    
    file.close();
    
}
void Student::display()
{
    system("cls");
    fstream file;
    int total=0;
    cout<<"\t\t\t----------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t----------------------------------STUDENT RECORD TABLE----------------------------------"<<endl;
    cout<<"\t\t\t----------------------------------------------------------------------------------------"<<endl;
    file.open("School_Record.txt",ios::in);
    if(!file)
    {
        cout<<"\n\t\t\tNo data is present\n";
        file.close();
    }
    else{
        getline(file,name);
        getline(file,roll_no);
        getline(file,email);
        getline(file,course);
        getline(file,branch);
        getline(file,address);
         while(!file.eof())
         {
            total++;
            cout<<"\n\t\t\t---------------------------------- Student No. "<<total<<" ----------------------------------"<<endl;
            cout<<"\t\t\t"<<name <<endl;
            cout<<"\n\t\t\t"<<roll_no <<endl;
            cout<<"\n\t\t\t"<<email <<endl;
            cout<<"\n\t\t\t"<<course <<endl;
            cout<<"\n\t\t\t"<<branch <<endl;
            cout<<"\n\t\t\t"<<address <<endl;
            getline(file,name);
            getline(file,roll_no);
            getline(file,email);
            getline(file,course);
            getline(file,branch);
            getline(file,address);
         }
        if(total==0)
        {
            cout<<"\n\t\t\tNo Data is present\n";
        }
        else{
            cout<<"\n\n\t\t\t----------------------------------There are "<<total<<" Students----------------------------------"<<endl;
        }
    }
    file.close();
}
void Student ::modify()
{
    system("cls");
    fstream file,file1;
    int found = 0;
    string rollno,x;
    cout<<"\t\t\t----------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t----------------------------------Modify bar--------------------------------------------"<<endl;
    cout<<"\t\t\t----------------------------------------------------------------------------------------"<<endl;
    file.open("School_Record.txt",ios::in);
    if(!file)
    {
        cout<<"\n\t\t\tNo Data is Present....";
        file.close();
    }
    else
    {
        cout<<"\nEnter the Roll No. of student which data you want to Modify\n";
        cin>>rollno;
        x = "Roll No.:- "+rollno;
        file1.open("Record.txt",ios::app | ios::out);
        getline(file,name);
        getline(file,roll_no);
        getline(file,email);
        getline(file,course);
        getline(file,branch);
        getline(file,address);
        while(!file.eof())
        {
            if(x!=roll_no)
            {
                file1<<name<<"\n"
                     <<roll_no<<"\n"
                     <<email<<"\n"
                     <<branch<<"\n"
                     <<course<<"\n"
                     <<address<<"\n";
            }
            else
            {
                    cout<<"\t\t\t 1. Enter Name:";
                    cin.sync();
                    getline(cin,name);
                    cout<<"\t\t\t 2. Enter Roll No.:";
                    getline(cin,roll_no);
                    cout<<"\t\t\t 3. Enter E-mail ID:";
                    getline(cin,email);
                    cout<<"\t\t\t 4. Enter Course:";
                    getline(cin,course);
                    cout<<"\t\t\t 5. Enter Branch:";
                    getline(cin,branch);
                    cout<<"\t\t\t 6. Enter Address:";
                    getline(cin,address);
            file1<<"Student's Name:- "<<name<<"\n"
            <<"Roll No.:- "<<roll_no<<"\n"
            <<"Email-id:- "<<email<<"\n"
            <<"Course:- "<<course<<"\n"
            <<"Branch:- "<<branch<<"\n"
            <<"Address:- "<<address<<"\n";
            found++;
            }
            getline(file,name);
            getline(file,roll_no);
            getline(file,email);
            getline(file,course);
            getline(file,branch);
            getline(file,address);
            
        }
        if(found == 0)
        {
            cout<<"\n\t\t\t Student Roll No. is not found\n";
        }
        else{
                cout<<"Student "<<x<<" data is modified";
            }
        file1.close();
        file.close();
        remove("School_Record.txt");
        rename("Record.txt","School_Record.txt");
    }

}
void Student ::search()
{
    system("cls");
    fstream file;
    int found =0;
    file.open("School_Record.txt", ios::in);
    cout<<"\t\t\t----------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t----------------------------------Seacrch BAR-------------------------------------------"<<endl;
    cout<<"\t\t\t----------------------------------------------------------------------------------------"<<endl;
    if(!file)
    {
        cout<<"No Data is Present..";
    }
    else{
        string rollno,x;
        cout<<"\n\t\t\t Enter the Roll no. of Student which you want to search:\n";
        cin>>rollno;
        x = "Roll No.:- "+rollno;
        getline(file,name);
        getline(file,roll_no);
        getline(file,email);
        getline(file,course);
        getline(file,branch);
        getline(file,address);
        while(!file.eof())
        {
            if(x==roll_no)
            {
                cout<<"\t\t\t"<<name <<endl;
                cout<<"\n\t\t\t"<<roll_no <<endl;
                cout<<"\n\t\t\t"<<email <<endl;
                cout<<"\n\t\t\t"<<course <<endl;
                cout<<"\n\t\t\t"<<branch <<endl;
                cout<<"\n\t\t\t"<<address <<endl;
                found++;
            }
            getline(file,name);
            getline(file,roll_no);
            getline(file,email);
            getline(file,course);
            getline(file,branch);
            getline(file,address);
        }
        if(found==0)
        {
            cout<<"\n\t\t\tStudent Roll No. Not found...";
        }
        file.close();

    }

}
void Student :: Delete()
{
    system("cls");
    cout<<"\t\t\t----------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t----------------------------Delete Student Details--------------------------------------"<<endl;
    cout<<"\t\t\t----------------------------------------------------------------------------------------"<<endl;
    fstream file,file1;
    string rollno,x;
    int found = 0;
    file.open("School_Record.txt", ios::in);
    if(!file)
    {
        cout<<"No Data is present";
    }
    else
    {
        cout<<"\nEnter Roll No. of Students which you want to delete Data:";
        cin>>rollno;\
        x = "Roll No.:- "+rollno;
        file1.open("Record.txt",ios::app| ios::out);
        getline(file,name);
        getline(file,roll_no);
        getline(file,email);
        getline(file,course);
        getline(file,branch);
        getline(file,address);
        while(!file.eof())
        {
            if(x!=roll_no)
            {
                file1<<name<<"\n"
                     <<roll_no<<"\n"
                     <<email<<"\n"
                     <<branch<<"\n"
                     <<course<<"\n"
                     <<address<<"\n";
                     found--;
            }
        getline(file,name);
        getline(file,roll_no);
        getline(file,email);
        getline(file,course);
        getline(file,branch);
        getline(file,address);
        found++;
       
        }
        if(found==0)
        {
            cout<<"\n\t\t\tNo Student found....";
        }
        else if(found!=0)
        {
            cout<<"Successfull Deleted...";
        }
        file.close();
        file1.close();
        remove("School_Record.txt");
        rename("Record.txt","School_Record.txt");

    }


}
int main()
{
    Student Project;
    Project.menu();
        return 0;
}
