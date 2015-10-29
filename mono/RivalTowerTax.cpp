#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;


void RivalTowerTax::print() {
	std::cout << "LAND ON RIVAL TOWER TAX" <<endl;
}

void RivalTowerTax::landOn(Player& curPlayer) {
	print();
	int choose = 0;
	int exist = 0;
	for ( int x = 0; x<curPlayer.getNum(); x++ ) {
		
 		if ( x  !=  curPlayer.getId() && ! (*(curPlayer.getPlayers()).at(x)).getTower()->Top_BillBoard.empty()  ) {
			cout << x << "." << (*(curPlayer.getPlayers()).at(x)).getName() << "  (" << (*(curPlayer.getPlayers().at(x))).getTower()->Top_BillBoard.top()->getName() << ")" << endl;
			exist++;
		}

	}
	if ( exist!= 0) {
		cout << "Choose a player: " << endl ;
		cin >> choose;
		curPlayer.steal(*(curPlayer.getPlayers()).at(choose));



	} else {
		cout << "No Player to Swap." << endl;
	}


}
