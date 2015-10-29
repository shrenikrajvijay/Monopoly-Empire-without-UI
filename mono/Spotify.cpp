#include <iostream>
#include <stdio.h>
#include "Space.h"
#include "Tower.h"
using namespace std;




Spotify::Spotify( int brand, std::string name, int value, int costOf ) : Ownable( brand, name, value, costOf ){
		// bboard = new BillBoard( value, name, owned, owner );	
	}


void Spotify::print() {
	std::cout << "LAND ON Spotify";
}

void Spotify::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON Spotify"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	} else {
		rent(curPlayer);
	}
}
BillBoard* Spotify::getBillBoard() {
	return bboard;
}