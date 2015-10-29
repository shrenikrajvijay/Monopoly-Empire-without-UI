#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

JetBlue::JetBlue( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void JetBlue::print() {
	std::cout << "LAND ON JetBlue";
}

void JetBlue::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON JetBlue"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* JetBlue::getBillBoard() {
	return bboard;
}