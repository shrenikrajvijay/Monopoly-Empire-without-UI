#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

EBay::EBay( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void EBay::print() {
	std::cout << "LAND ON EBay";
}

void EBay::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON EBay"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* EBay::getBillBoard() {
	return bboard;
}