#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

Paramount::Paramount( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void Paramount::print() {
	std::cout << "LAND ON Paramount";
}

void Paramount::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON Paramount"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* Paramount::getBillBoard() {
	return bboard;
}