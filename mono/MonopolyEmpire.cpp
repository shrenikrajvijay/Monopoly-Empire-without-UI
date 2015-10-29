#include <iostream>
#include <string>
#include <stdio.h>
#include "Board.h"
#include "Dice.h"
#include "BillBoard.h"
#include "windows.h"
using namespace std;
int main()

{
	cout << "Welcome to Monopoly Empire!" << endl << "Enter the number of players(1-4): ";
        PlaySound("C:/Users/Admin1/Desktop/Monopoly Empire/MonopolyEmpireUsingVector/back.wav", NULL, SND_ASYNC);
	int round = 0;
	int num_players = 0;

	while (scanf("%d", &num_players) == 0 || num_players > 4 || num_players < 1) {
		printf("Error-Please in type a number between 1 and 4: ");
		do {
			num_players = getchar();
		}
		while (!isdigit(num_players) );
		ungetc( num_players, stdin);
	}

	Board * board= new Board( num_players ); // Start the game with this many players
	Dice dice;

	board->addNames(); // Adds players Names to the game
	cout << "GAME STARTED!" << endl;
	vector<Player*>* player = board->getPlayer();

	for (int i=0; i<100; i++)
	{
		round = round % board->peeps;
		if (player->at(round)->isInJail() >= 1 ) {
			int ans;
			cout <<  player->at(round)->getName() << " is in jail." << endl;
			cout << "Do you want to pay 100 for bail ?: Press 1 \nDo you want to try to roll a double?: Press 2 \n";
			cin >> ans;
			if ( ans == 1 ) {
				cout << player->at(round)->getName() << " paid 100 for bail" << endl;
				player->at(round)->changeMoney(-100);
				player->at(round)->setJail(-1);
			} else {

				dice.Roll();
				player->at(round)->setJail(1);

				if ( dice.isDouble() == true ) {
					cout << "You got a double!" << endl;
					while ( player->at(round)->isInJail() != 0 ) {
						player->at(round)->setJail( -1 );
					} 
				} else {
					cout<< "You did not get a double." << endl;

				}
				if ( player->at(round)->isInJail() == 4 ) {
					cout << "You have reached the limit and paid 50 to get out of Jail" << endl;
					player->at(round)->changeMoney(-50);
					while ( player->at(round)->isInJail() != 0 ) {
						player->at(round)->setJail( -1 );
					} 
				}
			}
		}
		if (player->at(round)->isInJail() < 1 ) {

			int count = 0;	
			int num_rolled = dice.Roll( player->at(round) );

			if ( dice.isSneaky() == false ) {
			cout << player->at(round)->getName() << " moves " << num_rolled << " spaces: ";
			player->at(round)->setPostion (num_rolled);
			board->spaces.at(player->at(round)->getPosition())->landOn(*player->at(round));
			cout << player->at(round)->getMoney()<< " dollars and at " << player->at(round)->getPosition()<< "\n\n\n";
				if ( dice.isDouble() == false ) {
					round++;
				} else {
					cout << player->at(round)->getName() << " rolled a double!" << endl;
				}
			} else {
				cout << "SNEAKY SWAPPING" << endl << "Choose 1 player:" << endl; 

				for ( int x = 0; x<board->peeps; x++ ) {
					if ( !player->at(x)->getTower()->Top_BillBoard.empty() ) {
						cout << x << "." << player->at(x)->getName() << "  (" << player->at(x)->getTower()->Top_BillBoard.top()->getName() << ")" << endl;
					} else {
						count++;
					}
					
				}

				if ( count > 2 ) {
						cout << "Need Two Players with Property to Swap." << endl;
						cout << player->at(round)->getName() << " moves " << num_rolled << " spaces: ";
						board->spaces.at(player->at(round)->getPosition())->landOn(*player->at(round));
						cout << player->at(round)->getMoney()<< " dollars and at " << player->at(round)->getPosition()<<"\n\n\n";
					}


				int choose1;
				int choose2;
				cout << "COUNT IS : " << count << endl;
				if ( count <= 2) {
					cin >> choose1;
					cout << "You Choose : " << choose1 << " for first choice" << endl;
					cout << "Enter the second player to be swapped: ";
					cin >> choose2;
					cout << "\nYou Choose : " << choose2 << " for 2nd choice" << endl; 
					player->at(round)->sneakySwap( *player->at(choose1), *player->at(choose2) );
				}
				round++;
			}
		} else {
			round++;
		}
		
	}

	for ( int i=0;i<200;i++) {
		int place = i % 36;
		cout <<  player->at(0)->getName() << " lands on: " << endl;
		board->spaces.at(place)->landOn(*player->at(0));

		place++;
	}


	delete board;
}



