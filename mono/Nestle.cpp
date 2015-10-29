#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

Nestle::Nestle( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void Nestle::print() {
	std::cout << "LAND ON Nestle";
}

void Nestle::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON Nestle"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* Nestle::getBillBoard() {
	return bboard;
}