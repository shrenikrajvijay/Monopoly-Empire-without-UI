#include <iostream>
#include <stdio.h>
#include "Space.h"
#include "Tower.h"
using namespace std;




Nerf::Nerf( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
	
}


void Nerf::print() {
	std::cout << "LAND ON NERF";
}


void Nerf::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON NERF"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* Nerf::getBillBoard() {
	return bboard;
}
