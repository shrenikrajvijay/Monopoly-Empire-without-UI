#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

Ducati::Ducati( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void Ducati::print() {
	std::cout << "LAND ON Ducati";
}

void Ducati::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON Ducati"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* Ducati::getBillBoard() {
	return bboard;
}