#include <iostream>
using namespace std;
int
main ()
{
  int numberOfPlayers = 0;
  double playerOneCash = 500; //each player starts with 500
  double playerTwoCash = 500;
  double playerThreeCash = 500;
  double playerFourCash = 500;
  int numberOfRound = 1;        //for when to display the number of rounds that have been played


  cout << "How many players do will there be? (Limit is 4)\n";
  cin >> numberOfPlayers;


  while (numberOfPlayers < 1 || numberOfPlayers > 4)    //while loop makes sure there is between 1 and 4 players
    {
    if (numberOfPlayers < 1)
    {
	cout << "There must be at least 1 player!\n";
    cout << "How many players do will there be? (Limit is 4)\n";
    cin >> numberOfPlayers;
    }

    else if (numberOfPlayers > 4)
    {
    cout << "There can not be more then 4 players!\n";
    cout << "How many players do will there be? (Limit is 4)\n";
    cin >> numberOfPlayers;
    }
    }
    
    cout << "Round " << numberOfRound << endl;
    
    if (numberOfPlayers == 1)
    {
    cout << "|Player 1| ";
    }
    
    else if (numberOfPlayers == 2)
    {
    cout << "|Player 1| " << "|Player 2| ";
    }
    
    else if (numberOfPlayers == 3)
    {
    cout << "|Player 1| " << "|Player 2| " << "|Player 3| ";
    }
    
    else if (numberOfPlayers == 4)
    {
    cout << "|Player 1| " << "|Player 2| " << "|Player 3| " << "|Player 4| ";
    }
    
  return 0;
}
