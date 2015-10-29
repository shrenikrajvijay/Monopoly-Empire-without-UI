#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

CocaCola::CocaCola( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void CocaCola::print() {
	std::cout << "LAND ON CocaCola";
}

void CocaCola::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON CocaCola"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* CocaCola::getBillBoard() {
	return bboard;
}