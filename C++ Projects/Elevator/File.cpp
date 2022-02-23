#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

class Elevator
{
    int current_state;
    int top_floor;
    int bottom_floor;
    public:
        Elevator(int current, int top, int bottom) : current_state(current), top_floor(top), bottom_floor(bottom){}

        void up()
        {
            cout << "GOING UP" << endl;
            Sleep(1000);
            if(current_state < top_floor)
            current_state++;
        }

        void down()
        {
            cout << "GOING DOWN" << endl;
            Sleep(1000);
            if(current_state > bottom_floor)
            current_state--;
        }

        void want_to(int floor)
        {
            current_state = floor;
        }

        void print_floor()
        {
            cout << "Current floor :: " << current_state << endl;
        }
        void screen();
};

void Elevator :: screen()
{
    system("cls");

    cout << "\t\t\t////////// Elevator //////////////" << endl;
    cout << "\t\t\t||   [1]       [2]       [3]    ||" << endl;
    cout << "\t\t\t||   [4]       [5]       [6]    ||" << endl;
    cout << "\t\t\t||   [7]       [8]       [9]    ||" << endl;
    cout << "\t\t\t||   [u]       [d]       [t]    ||" << endl;
    cout << "\t\t\t||             [x]              ||" << endl;
    cout << "\t\t\t////////////MINTU LIFT////////////" << endl;
   
    char checker;
   
   
    do
    {
        cin >> checker;
        switch (checker)
    {
    case '1':
        want_to(1);
        print_floor();
        break;
    case '2':
        want_to(2);
        print_floor();
        break;
    case '3':
        want_to(3);
        print_floor();
        break;
    case '4':
        want_to(4);
        print_floor();
        break;
    case '5':
        want_to(5);
        print_floor();
        break;
    case '6':
        want_to(6);
        print_floor();
        break;
    case '7':
        want_to(7);
        print_floor();
        break;
    case '8':
        want_to(8);
        print_floor();
        break;
    case '9':
        want_to(9);
        print_floor();
        break;
    case 't':
        want_to(10);
        print_floor();
        break;
    case 'u':
        up();
        print_floor();
        break;
    case 'd':
        down();
        print_floor();
        break;
    case 'x':
        exit(0);
        print_floor();
        break;
    
    default:
        cout << "Enter the valid key \n";
        break;
    }
    } while (1);
    

    

}
int main()
{
     
    Elevator mintu(0, 10, 0);

    mintu.screen();
    
    return 0;
}