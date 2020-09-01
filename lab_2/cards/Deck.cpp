#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <time.h>

using namespace std;


void shuffleDeck(int deck[]) {

    //initialize random seed:
    srand(time(NULL));
    int original, swap, temp;

    for (int i = 0; i < 1000; i++) {
        original = rand() % 52;
        swap = rand() % 52;

        temp = deck[original];        
        deck[original] = deck[swap];
        deck[swap] = temp;       

    }
    
}

void displayCards(int deck[], string suits[], string ranks[]) {
    
    for (int i = 0; i < 4; i++) {
        int card = deck[i];
        int suitIndex = card / 13;
        int rankIndex = card % 13;

        cout << ranks[rankIndex] << " of " << suits[suitIndex] << endl;
    }
}

int main() {
    const int NUMBER_OF_CARDS = 52;
    int deck[NUMBER_OF_CARDS];
    string suits[] = {"Spades", "Hearts", "Diamonds", "Clubs"};
    string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

    //initialize cards
    for (int i = 0; i < NUMBER_OF_CARDS; i++)
        deck[i] = i;

    //Shuffle the cards
    for (int i = 0; i < NUMBER_OF_CARDS; i++)
        cout << deck[i] << " ";

    cout << endl;
    cout << endl;
    shuffleDeck(deck);

    for (int i = 0; i < NUMBER_OF_CARDS; i++)
        cout << deck[i] << " ";

    cout << endl;




    //Generate random index




    //Display first four cards
    displayCards(deck, suits, ranks);


    return 0;
}
