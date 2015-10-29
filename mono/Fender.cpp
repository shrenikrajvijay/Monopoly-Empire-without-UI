#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

Fender::Fender( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void Fender::print() {
	std::cout << "LAND ON Fender";
}

void Fender::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON Fender"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* Fender::getBillBoard() {
	return bboard;
}