#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

Beats::Beats( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void Beats::print() {
	std::cout << "LAND ON Beats";
}

void Beats::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON Beats"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* Beats::getBillBoard() {
	return bboard;
}