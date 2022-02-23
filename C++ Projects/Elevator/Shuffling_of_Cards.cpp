#include <bits/stdc++.h>
using namespace std;

enum Suit
{
    Diamond,
    Spade,
    Heart,
    Club
};
int number; // 2 to 10 number of cards
const int jack = 11;
const int king = 12;
const int queen = 13;
const int ace = 14;

class Deck
{
    int number;
    Suit suit;
public:
    Deck() {} // Constructor

    void set_card(int n, Suit s) // Set a card
    {
        number = n;
        suit = s;
    }
    void Display(); // to display a card;
};

void Deck :: Display()
{
    if (number >= 2 && number <= 10)
        cout << number;
    else
        switch (number)
        {
        case jack:
            cout << "J";
            break;
        case king:
            cout << "K";
            break;
        case queen:
            cout << "Q";
            break;
        case ace:
            cout << "A";
            break;

        default:
            break;
        }
    
    switch (suit)
    {
    case Heart:
        cout<< static_cast<char>(3);
        break;
    case Diamond:
        cout<< static_cast<char>(4);
        break;
    case Spade:
        cout<< static_cast<char>(6);
        break;
    case Club:
        cout<< static_cast<char>(5);
        break;
    
    default:
        break;
    }
}
int main()
{
    char choice;
    cin >> choice;
    Deck deck[52];
    cout<<endl;


    // Setting each card of a deck
    for(int j = 0; j < 52; j++)
    {
        int num = (j%13)+2; //traverse 2 to 14, 4 times
        Suit su = Suit(j/13); // traverse 0 to 3, 13 times
        deck[j].set_card(num, su);
    }

    cout<<"\n\n Ordered Deck \n\n";
    for(int j = 0; j < 52; j++) //Display ordre deck
    {
        deck[j].Display();
        cout<<" ";
        if( !((j+1) % 13) )     // new line after 13 cards
            cout<<endl;
    }

    do
    {
        //Shuffling the deck
    srand(time(NULL));
    for(int i = 0; i < 52; i++)
    {
        int k = rand() % 52;
        
        Deck temp = deck[i];
        deck[i] = deck[k];
        deck[k] = temp;
    }

    cout<<"\n\nShuffled Cards\n\n";
     for(int j = 0; j < 52; j++) //Display ordre deck
    {
        deck[j].Display();
        cout<<" ";
        if( !((j+1) % 13) )     // new line after 13 cards
            cout<<endl;
    }
        cout << "Do you want to shuffle more \n";
        cin >> choice;
    }while(choice == 'y');

  



    return 0;
}