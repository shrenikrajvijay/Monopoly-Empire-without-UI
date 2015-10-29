#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

Yahoo::Yahoo( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void Yahoo::print() {
	std::cout << "LAND ON Yahoo";
}

void Yahoo::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON Yahoo"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* Yahoo::getBillBoard() {
	return bboard;
}