#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

UnderArmour::UnderArmour( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void UnderArmour::print() {
	std::cout << "LAND ON UnderArmour";
}

void UnderArmour::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON UnderArmour"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* UnderArmour::getBillBoard() {
	return bboard;
}