#include <iostream>
#include <stdio.h>
#include "Space.h"
#include "Tower.h"
using namespace std;




Transformers::Transformers( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf){
		// bboard = new BillBoard( value, name, owned, owner );	//IMPORTANT
		// cost = costOf;
	}

void Transformers::print() {
	std::cout << "LAND ON Transformers";
}

void Transformers::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON Transformers"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* Transformers::getBillBoard() {
	return bboard;
}