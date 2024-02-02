#include <iostream>

using namespace std;

/* 
TODO/outline thing:
- arrays that map values to card names and vice versa (ex: ace -> 1, ace -> 11, other ones idk)
#include <cstdlib>
const int MAX(13);
const int MIN(1);
srand(time(0));
int card = rand();
char cardName = ["Ace", "Two", "Three", "Four", "Five","Six", "Seven", "Eight", "Nine", "Ten","Ace", "Jack", "Queen", "King"]
char cardType = ["Diamond", "Heart", "Spade", "Clover"]

- loop until game ends (dealer asks if players want more cards or not)


- if a player's card values is > 21 then they lose
if (playerOneCardTotal > 21)
	
- if a player's card values is == 20 then they win
- if all players say they dont want more cards, game ends and cards are compared with dealer's cards
- 
*/

int drawCard() {
	// TODO: generate random number and return it
	return 1;
}


int main () {
	int numberOfPlayers = 0;
	double playerOneCardTotal = 0;
	double playerTwoCardTotal = 0;
	int numberOfRound = 1;        //for when to display the number of rounds that have been played

	cout << "How many players do will there be? (Limit is 2)\n";
	cin >> numberOfPlayers;

	// while loop makes sure there is between 1 and 4 players
	// its only real purpose is error-checking. it's not really necessary for things to work
	while (numberOfPlayers < 1 || numberOfPlayers > 2) {
		if (numberOfPlayers < 1) {
			cout << "There must be at least 1 player!\n";
			cout << "How many players do will there be? (Limit is 2)\n";
			cin >> numberOfPlayers;
		}
		else if (numberOfPlayers > 2) {
			cout << "There can not be more than 2 players!\n";
			cout << "How many players do will there be? (Limit is 2)\n";
			cin >> numberOfPlayers;
		}
    
		cout << "Round " << numberOfRound << endl;
	}

	if (numberOfPlayers == 1) {
		cout << "|Player 1| ";
	} else if (numberOfPlayers == 2) {
		cout << "|Player 1| " << "|Player 2| ";
	}

	// do{}while(expression)

	// The gameplay loop: it's basically here to run code every turn
	while ( playerOneCardTotal < 21 && playerTwoCardTotal < 21 ) {
		// Does player 1 want another card?
		// if so, dealer should give them a new card
			// if the player's new card total is 21, end the game and declare that player 1 won
			// if the player's new card total is > 21, end the game and declare that they lost and player 2 won
		// if they don't want a new card, just continue

		// Does player 2 want another card?
		// if so, dealer should give them a new card
			// if the player's new card total is 21, end the game and declare that player 2 won
			// if the player's new card total is > 21, end the game and declare that they lost and player 1 won
		// if they don't want a new card, just continue

		// if neither player wanted a new card, the game ends. check who has the highest value cards and declare that they win.
	}
	
  	return 0;
}
// 