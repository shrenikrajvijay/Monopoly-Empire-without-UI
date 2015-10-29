#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

EA::EA( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void EA::print() {
	std::cout << "LAND ON EA SPORTS";
}

void EA::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON EA SPORTS"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* EA::getBillBoard() {
	return bboard;
}