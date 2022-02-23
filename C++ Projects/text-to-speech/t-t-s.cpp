#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

void greetings()
{
    time_t now = time(NULL);
    tm *time = localtime(&now);

    if (time->tm_hour < 12)
    {
        cout << "Good Morning Boss, I am Vector Your Personel Assistant" << endl;
        string phrase = "Good Morning Boss, I am Vector Your Personel Assistant";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time->tm_hour >= 12 and time->tm_hour < 16)
    {
        cout << "Good After Noon Boss, I am Vector Your Personel Assistant" << endl;
        string phrase = "Good After Noon Boss, I am Vector Your Personel Assistant";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time->tm_hour > 16 and time->tm_hour < 24)
    {
        cout << "Good Evening Boss, I am Vector Your Personel Assistant" << endl;
        string phrase = "Good Evening Boss, I am Vector Your Personel Assistant";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "The date and time is " << endl
         << dt << endl;
}

int main()
{
    system("cls");

    cout << "\t\t#################################### Your Personal Assistant #######################################" << endl;

    string password; // to take password from the user
    string command;  // to take command from the user

    do
    {
        cout << "\t\t***********************************************************************************" << endl;
        cout << "\t\t|???????????????????Enter the Password to Confirm that You are my Boss???????????????" << endl;
        cout << "\t\t***********************************************************************************" << endl;

        string phrase = "Enter the Password to Confirm that You are my Boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        getline(cin, password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if (password == "1")
        {
            cout << "\t\t***********************************************************************************" << endl;
            greetings();
            do
            {
                cout << "\t\t***********************************************************************************" << endl;
                cout << "\t\t|??????????????????????????????How Can I Help You My Boss??????????????????????????" << endl;
                cout << "\t\t***********************************************************************************" << endl;
                string phrase = "How Can I Help You My Boss";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout << "Enter Your Question Here => ";
                getline(cin, command);
                cout << endl;
                cout << "\nAnswer to your Question is Here\n";
                if (command == "hello" || command == "hi")
                {
                    cout<<"Hello, My Boss"<<endl;
                    string phrase = "Hello My Boss..........";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else  if (command == "what is the time")
                {
                    datetime();
                }
                else  if (command == "who are you")
                {
                    cout<<"I am Vector Your Personel Assistant Creted by you"<<endl;
                    string phrase = "I am Vector Your Personel Assistant Creted by you";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if (command == "open notepad")
                {
                    cout<<"Opening Notepad"<<endl;
                    string phrase = "Opening Notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Accessories\\NOTEPAD.exe"),NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                

            } while (1);
            system("cls");
            string phrase = "You are Not my Boss";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
    } while (1);

    // datetime();
    return 0;
}