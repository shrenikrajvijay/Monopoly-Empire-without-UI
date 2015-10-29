#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

void TowerTax::print() {
	std::cout << "LAND ON TOWER TAX"<< endl;
}



void TowerTax::landOn(Player &curPlayer) {
	print();
	if ( curPlayer.getTower()->getHeight() > 0 ) {
	BillBoard * temp_bb = curPlayer.getTower()->Top_BillBoard.top();
	cout << curPlayer.getName() << " loses his BillBoard: " << temp_bb->getName()<< "." << endl;

	curPlayer.getTower()->Top_BillBoard.pop();
	cout << curPlayer.getTower()->getHeight() << "HEIGHT_ before";

	curPlayer.getTower()->setHeight( -(temp_bb->getValue() ) );
	cout << curPlayer.getTower()->getHeight() << "HEIGHT_ after";
	
	temp_bb->setOwner( -1 );
	temp_bb->setStatus( 0 );
	
	} else {
		cout << curPlayer.getName() <<" can not be be taxed anymore." << endl;
	}


}
