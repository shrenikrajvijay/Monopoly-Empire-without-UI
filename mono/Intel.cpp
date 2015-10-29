#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

Intel::Intel( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void Intel::print() {
	std::cout << "LAND ON Intel";
}

void Intel::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON Intel"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* Intel::getBillBoard() {
	return bboard;
}