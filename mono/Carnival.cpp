#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

Carnival::Carnival( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void Carnival::print() {
	std::cout << "LAND ON Carnival";
}

void Carnival::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON Carnival"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* Carnival::getBillBoard() {
	return bboard;
}