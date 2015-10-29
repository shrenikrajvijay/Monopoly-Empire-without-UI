#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

XBox::XBox( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void XBox::print() {
	std::cout << "LAND ON XBox";
}

void XBox::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON XBox"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* XBox::getBillBoard() {
	return bboard;
}