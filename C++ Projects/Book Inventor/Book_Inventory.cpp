#include <iostream>
#include <algorithm>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <cstdlib>
#include <conio.h>
using namespace std;

class book
{
private:
    string title, author, publisher, price, stock;
    // float price;
    // int stock;

public:
    void menu();
    void New_Book();
    void Display_Library();
    void Selling_book();
    void display();
    void Modify();
};
void book::menu()
{
menustart:
    int choice;
    char x;
    system("cls");
    cout << "\t\t\t----------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t------------------------------Student Management System---------------------------------" << endl;
    cout << "\t\t\t----------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t"
         << "1. Enter New book" << endl;
    cout << "\t\t\t"
         << "2. Display Library " << endl;
    cout << "\t\t\t"
         << "3. Selling Books" << endl;
    cout << "\t\t\t"
         << "4. Edit book" << endl;
    cout << "\t\t\t"
         << "5. Show_Case " << endl;
    cout << "\t\t\t"
         << "6. Search a book " << endl;
    cout << "\t\t\t"
         << "7. exit" << endl;
    cout << "\t\t\t----------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t------------------------Select Your Choose : 1,2,3,4,5--------------------------------" << endl;
    cout << "\t\t\t----------------------------------------------------------------------------------------" << endl;
    int choose;
    cin >> choose;

    switch (choose)
    {
    case 1:
        do
        {
            New_Book();
            cout << "Do You Want To Add Another Book[y/n]\n";
            cin >> x;
        } while (x == 'Y' || x == 'y');

        break;
    case 2:
        Display_Library();
        break;
    case 3:
        Selling_book();
        break;
    case 4:
        // Edit_details();
        break;
    case 5:
        exit(0);

    default:
        cout << "\n\t\t\tInvalid Choice:\n";
    }
    getch();
    goto menustart;
}
void book ::New_Book()
{
    system("cls");
    fstream book_file;
    cout << "\t\t\t----------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t-----------------------------------Add a new book---------------------------------------" << endl;
    cout << "\t\t\t----------------------------------------------------------------------------------------" << endl;

    cin.sync();
    cout << "Name of the Book::\n";
    getline(cin, title);
    cout << "Author of Book::\n";
    getline(cin, author);
    cout << "Publisher of Book::\n";
    getline(cin, publisher);
    cout << "Stock::\n";
    getline(cin, stock);
    cout << "Cost per Book::\n";
    getline(cin, price);

    book_file.open("Book_Data.txt", ios ::app | ios ::out);
    book_file << "Title :: " << title << endl;
    book_file << "Author :: " << author << endl;
    book_file << "Publisher:: " << publisher << endl;
    book_file <<  price << endl;
    book_file <<stock<<endl;

    book_file.close();
}

// Now Display the whole data from book_data file as a display Library function //////////////////

void book::Display_Library()
{
    system("cls");
    int total = 0;
    cout << "\t\t\t----------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t------------------------------------------Library---------------------------------------" << endl;
    cout << "\t\t\t----------------------------------------------------------------------------------------" << endl;
    fstream file;

    file.open("Book_Data.txt", ios::in);
    if (!file)
        cout << "No data is Present\n";

    else
    {
        getline(file, title);
        getline(file, author);
        getline(file, publisher);
        getline(file, price);
        getline(file, stock);

        while (!file.eof())
        {
            total++;
            cout << "\t\t\t----------------------------------Shelf no." << total << "-------------------------------" << endl;
            cout << "\t\t\t" << title << endl;
            cout << "\t\t\t" << author << endl;
            cout << "\t\t\t" << publisher << endl;
            cout << "\t\t\t" << price << endl;
            cout << "\t\t\t" << stock << endl;

            getline(file, title);
            getline(file, author);
            getline(file, publisher);
            getline(file, price);
            getline(file, stock);
        }
        if (total == 0)
        {
            cout << "No data is present\n";
        }
        else
        {
            cout << "There are " << total << " Shelves\n";
        }
    }
}

void book::Selling_book()
{
    system("cls");
    cout << "\t\t\t----------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t-------------------------------------Selling Books--------------------------------------" << endl;
    cout << "\t\t\t----------------------------------------------------------------------------------------" << endl;

    fstream file, file1;

    file.open("Book_Data.txt", ios::in);

    if (!file)
    {
        cout << "No data is Present\n";
    }
    else
    {
        int found = 0;
        string book_name;
        string sto;
        cin.ignore();
        cout << "Enter book\n";
        getline(cin, book_name);
        cout << "Enter stock\n";
        getline(cin, sto);
        string x;

        x = "Title :: " + book_name;
        getline(file, title);
        getline(file, author);
        getline(file, publisher);
        getline(file, price);
        getline(file, stock);
        while (!file.eof())
        {
            if (x == title)
            {
                cout << "\t\t\t" << title << endl;
                cout << "\n\t\t\t" << author << endl;
                cout << "\n\t\t\t" << publisher << endl;
                cout << "\n\t\t\t" << price << endl;
                cout << "\n\t\t\t" << stock << endl;
                found++;
                cout<<sto<<endl;
                cout<<stock<<endl;

                if(stock < sto)
                {
                    cout<<"Sorry Stock not available\n";
                }
                else
                {
                    cout<<"Stock is available\n";

                    // // file1.open("Record.txt", ios::app | ios::out);

                    // // file1<<title;
                    // // file1<<author;
                    // file1<<publisher;
                    

                }

            }

                getline(file, title);
                getline(file, author);
                getline(file, publisher);
                getline(file, price);
                getline(file, stock);
        }
        if(found == 0)
        {
            cout<<"Sorry Book is not available\n";
        }
        file.close();
    }
}


int main()
{
    book b;
    b.menu();
    return 0;
}