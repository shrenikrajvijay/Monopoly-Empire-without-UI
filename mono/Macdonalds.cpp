#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

Macdonalds::Macdonalds( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void Macdonalds::print() {
	std::cout << "LAND ON Macdonalds";
}

void Macdonalds::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON Macdonalds"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* Macdonalds::getBillBoard() {
	return bboard;
}