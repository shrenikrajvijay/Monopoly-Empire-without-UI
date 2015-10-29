

#include "Space.h"
#include "Player.h"
#include <string>
#include <iostream>
using namespace std;

Space::Space( int place, std::string name ) : spot(place), title(name) {};
Ownable::Ownable( int place, std::string name, int value, int costOf ) : Space(place,name){
	bboard = new BillBoard( value, name, owned, owner );
	owned = false;
	cost = costOf;

	owner = -1;
};

void Ownable::buy (Player& curPlayer) {
	int ans;

	cout << "You have " << curPlayer.getMoney() << endl; 
	std::cout << "Do you want to buy " <<title << " for " << cost <<"?" << endl ;

	cout << "1. Yes 2. No" << endl;
	cin >> ans;

	if ( ans == 1 && curPlayer.getMoney()>= cost ) {
		cout << "You bought " << title << "." << endl;
		curPlayer.changeMoney( -(cost) );
			curPlayer.getTower()->setBillBoard( ( bboard) );
		curPlayer.getTower()->setHeight( (*bboard).getValue() );
		cout << (*bboard).getValue() << " VALUE" << endl ;
		cout << curPlayer.getTower()->getHeight() << " out of 17 to win." << endl;	
		owned =true;

		owner = curPlayer.getId();


	} else {
		cout << curPlayer.getName() << " did not buy " << title << "." << endl;
	}


}

void Ownable::rent(Player& curPlayer) {


	if ( owner != curPlayer.getId() && owner!= -1 && (*(curPlayer.getPlayers().at(owner))).isInJail() == 0 ) {
		// cout << "USE getPlayer() and it WORKKKKKS WTF" << endl;
		cout << curPlayer.getName() << " pays " << (*(curPlayer.getPlayers().at(owner))).getName() << " " <<  (*(curPlayer.getPlayers().at(owner))).getTower()->getValue() << endl ;
		curPlayer.changeMoney( -( (*(curPlayer.getPlayers().at(owner))).getTower()->getValue() ) );
		(*(curPlayer.getPlayers().at(owner))).changeMoney( (*(curPlayer.getPlayers().at(owner))).getTower()->getValue() );
	}


}

Space::~Space() {
}
Ownable::~Ownable() {
}

void Go::landOn(Player &curPlayer) {
	std::cout << "LAND ON GO" << endl;
}







void EmpireSpace::landOn(Player &curPlayer) {
	std::cout << "LAND ON EMPIRE SPACE" << endl;
}



void Chance::landOn(Player &curPlayer) {
	std::cout << "LAND ON CHANCE" << endl;
}





void JustVisiting::landOn(Player &curPlayer) {
	std::cout << "LAND ON JUST VISITING" << endl;
}
















void Go::print() {
	std::cout << "LAND ON GO";
}





void EmpireSpace::print() {
	std::cout << "LAND ON EMPIRE SPACE";
}



void Chance::print() {
	std::cout << "LAND ON CHANCE";
}




void JustVisiting::print() {
	std::cout << "LAND ON JUST VISITING";
}






