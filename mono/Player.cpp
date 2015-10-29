

#include "Player.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

Player::Player( string input, vector<Player*>* array_player, int player_num, int id, vector<Space*> array_space ) {
	// cout << array_player << endl;
	// cout << &array_player << " : Match 1" << endl;
	at_jail = 0;
	tower = new Tower();
	money = 1000;
	name = (input);
	position = 0;
	players = *&array_player; //**
	// cout << &players << " : Match 2" << endl;
	spaces = *&array_space;
	num_player = player_num;
	my_id = id;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

string Player::getName() {
	return name;
}

void Player::setPostion( int rolled_a ) {
	if ( position + rolled_a >= 36 ) {
		changeMoney( getTowerValue() );
		cout << " Receives " << getTowerValue() << " for passing GO. :";
	}
	position = (position + rolled_a) % 36;

//	cout << "POSTION AFTER ROLL " << position
}

int Player::getPosition() {
	return position;
}

int Player::getTowerValue() {
	return tower->getValue();
}

void Player::changeMoney( int amount ) {
	money += amount;
}

int Player::getMoney() {
	return money;
}

Tower* Player::getTower() {
	return tower;
}

void Player::sneakySwap(Player& choosen1, Player& choosen2 ) {

	if ( !( choosen1.getTower()->Top_BillBoard.empty() ) ) {
		cout << "CURRENT: First Choosen Player has " << choosen1.getTower()->getHeight() << "/17 points." << endl;
		choosen1.getTower()->setHeight( -( choosen1.getTower()->Top_BillBoard.top()->getValue() ) );
		choosen2.getTower()->setHeight( -( choosen2.getTower()->Top_BillBoard.top()->getValue() ) );
		(*(choosen1.getTower()->Top_BillBoard.top())).setOwner( choosen2.getId() );
		(*(choosen2.getTower()->Top_BillBoard.top())).setOwner( choosen1.getId() );
		BillBoard * choosen1_tmp = (choosen1.getTower()->Top_BillBoard.top());
		BillBoard * choosen2_tmp = (choosen2.getTower()->Top_BillBoard.top());

		choosen1.getTower()->Top_BillBoard.pop();
		choosen2.getTower()->Top_BillBoard.pop();

		choosen1.getTower()->setBillBoard( choosen2_tmp );
		choosen1.getTower()->setHeight( ( choosen1.getTower()->Top_BillBoard.top()->getValue() ) );

		choosen2.getTower()->setBillBoard( choosen1_tmp );
		choosen2.getTower()->setHeight( ( choosen1.getTower()->Top_BillBoard.top()->getValue() ) );

		cout << "AFTER SWAP: First Choosen Player has " << choosen1.getTower()->getHeight() << "/17 points." << endl;

	

	} else {
		cout << choosen1.name << " does not have any billboards." << endl;
	}


}



void Player::steal( Player& choosen ) {

	if ( !( choosen.getTower()->Top_BillBoard.empty() ) ) {
		cout << "CURRENT: Player has " << tower->getHeight() << "/17 points." << endl;
		tower->setBillBoard( choosen.getTower()->Top_BillBoard.top() );
		tower->setHeight( choosen.getTower()->Top_BillBoard.top()->getValue() );
		(*(choosen.getTower()->Top_BillBoard.top())).setOwner( my_id );
		cout << "GAINED: Player has " << tower->getHeight() << "/17 points.\n" << endl;
		cout << name << " acquired " << choosen.getName() <<"'s " <<  choosen.getTower()->Top_BillBoard.top()->getName() << " billbaord.\n" << endl;


		cout << "SWAPPED: Player has " << choosen.getTower()->getHeight() << "/17 points." << endl;
		choosen.getTower()->setHeight( -( tower->Top_BillBoard.top()->getValue() ) );
		choosen.getTower()->Top_BillBoard.pop();
		cout << "LOST: Player has " << choosen.getTower()->getHeight() << "/17 points." << endl;

	} else {
		cout << choosen.name << " does not have any billboards." << endl;
	}


}


void Player::testPlayers() {
	// cout << (*players[0]).getName() << "WORKSSSSSS" <<endl ;
	// cout << (*players[1]).getName() << "WORKSSSSSS" <<endl ;
	// cout << (*players[2]).getName() << "WORKSSSSSS" <<endl ;
	// cout << (*players[3]).getName() << "WORKSSSSSS" <<endl ;

}



int Player::getNum() {
	return num_player;
}

int Player::getId() {
	return my_id;
}

vector<Player*> Player::getPlayers(){
	return *players;
}

vector<Space*> Player::getSpaces() {
	return spaces;
}

int Player::isInJail() {
	return at_jail;
}

void Player::setJail( int jail_status ) {
	at_jail += jail_status;
}

void Player::setGlobal(int newPosition)
{
	
	if ( position > newPosition ) {
		// cal = position + (35 - ( position - newPosition ) );
		// if ( cal > 35 ) {
			changeMoney( getTowerValue() );
		cout << "Receives " << getTowerValue() << " for passing GO. :";
	
	}
	position = newPosition;
}
