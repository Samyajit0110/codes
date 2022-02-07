#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
 
class cards
{
private:
    enum suits // enum assigning int values from 0 to 3 to suits
    {
        clubs,
        diamonds,
        hearts,
        spades,
        jack = 11,
        queen = 12,
        king = 13,
        ace = 14
    };
    int number; // number of the card
    int suit;   // suit of the card
public:
    cards() // default constructor
    {
    }
    void display_card();             // to display a card
    void ordered_deck(cards deck[]); // to make an ordered deck
    void shuffle(cards deck[]);      // to shuffle the deck
    void display_deck(cards deck[]); // to display the deck
    void set(int n, suits s)         // set number and suit to a card
    {
        number = n;
        suit = s;
    }
};

void cards::display_card()
{
    if (number >= 2 && number <= 10) // card numbers 2 to 10 of any suit are plain integers
    {
        cout << number;
    }
    else
        switch (number)
        {
        case jack:
            cout << "J";
            break;
        case queen:
            cout << "Q";
            break;
        case king:
            cout << "K";
            break;
        case ace:
            cout << "A";
            break;
        }
    switch (suit)
    {
    case clubs:
        cout << static_cast<char>(5);
        break;
    case diamonds:
        cout << static_cast<char>(4);
        break;
    case hearts:
        cout << static_cast<char>(3);
        break;
    case spades:
        cout << static_cast<char>(6);
        break;
    }
}

void cards::ordered_deck(cards deck[])
{
    int i;
    cout << endl;
    for (i = 0; i < 52; i++)
    {
        int n = (i % 13) + 2;    // cycles through 2 to 14; 4 times
        suits s = suits(i / 13); // cyles through 0 to 3; 13 times
        deck[i].set(n, s);
    }
    cout << "\nOrdered deck\n";
    display_deck(deck);
}

void cards::display_deck(cards deck[])
{
    for (int i = 0; i < 52; i++)
    {
        deck[i].display_card();
        cout << "  ";
        if (!((i + 1) % 13)) // newline after every 13 cards
        {
            cout << endl;
        }
    }
}

void cards::shuffle(cards deck[])
{
    srand(time(NULL));
    cards temporary;
    for (int i = 0; i < 52; i++)
    {
        int random = rand() % 52; // keeps bounded to 52
        temporary = deck[i];
        deck[i] = deck[random];
        deck[random] = temporary;
    }
    cout << "\nShuffled deck\n";
    display_deck(deck);
}

int main()
{
    cards Deck_0;
    cards deck_0[52];
    Deck_0.ordered_deck(deck_0);
    Deck_0.display_deck(deck_0);
    Deck_0.shuffle(deck_0);
    Deck_0.display_deck(deck_0);
    return 0;
}