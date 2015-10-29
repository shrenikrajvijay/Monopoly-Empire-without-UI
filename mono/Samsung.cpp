#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

Samsung::Samsung( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void Samsung::print() {
	std::cout << "LAND ON Samsung";
}

void Samsung::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON Samsung"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* Samsung::getBillBoard() {
	return bboard;
}