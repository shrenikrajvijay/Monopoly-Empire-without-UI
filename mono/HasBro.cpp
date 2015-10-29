#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

HasBro::HasBro( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void HasBro::print() {
	std::cout << "LAND ON HasBro";
}

void HasBro::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON HasBro"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* HasBro::getBillBoard() {
	return bboard;
}