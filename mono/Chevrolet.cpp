#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

Chevrolet::Chevrolet( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void Chevrolet::print() {
	std::cout << "LAND ON Chevrolet";
}

void Chevrolet::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON Chevrolet"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* Chevrolet::getBillBoard() {
	return bboard;
}