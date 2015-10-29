#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

XGames::XGames( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void XGames::print() {
	std::cout << "LAND ON XGames";
}

void XGames::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON XGames"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* XGames::getBillBoard() {
	return bboard;
}